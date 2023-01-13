#pragma once
#include "Header.h"
#include "functions.h"
using namespace Eigen;
void multiply(vector<vector<double>>& A, vector<double>& B, vector<double>& C)
{
	int n = A.size(), m = 1, p = A[0].size();
	double sum;
	for (int i = 0; i < n; i++)
	{
		sum = 0;
		for (int k = 0; k < p; k++)
		{
			sum += A[i][k] * B[k];
		}
		C[i] = sum;
	}
}

vector<double> back_subst(vector<vector<double>> R, vector<double> b, vector<double> xrem)
{
	int n = b.size();
	vector<double> x(n, 0);
	for (int i = n - 1; i >= 0; --i)
	{
		if (abs(R[i][i]) > 1.e-15)
		{
			double sum = 0;
			for (int j = i + 1; j < n; j++)
			{
				sum += R[i][j] * x[j];
			}
			x[i] = (b[i] - sum) / R[i][i];
		}
		else
			x[i] = xrem[i];
	}
	return x;
}
vector<double> CheckConvergency(double p, int m, int k, vector<double> b, vector<vector<double>> Nji, vector<double> F,
	vector<double> ex, vector<double> xx, double xs, double StandardPressure)
{
	vector<double> result;
	double epsmb = 0;
	double x = 0;
	for (int j = 0; j < m; j++)
	{
		x = 0;
		for (int i = 0; i < k; i++)
		{
			x += ex[i] * Nji[i][j];
		}
		x = abs(b[j] - x);
		if (x > epsmb)
			epsmb = x;
	}
	double SumMolarFractions = 0;
	double SumG = 0;
	double px = (1.e6 / StandardPressure) * p;
	for (int i = 0; i < k; i++)
	{
		x = 0;
		for (int j = 0; j < m; j++)
		{
			x += Nji[i][j] * xx[j];
		}
		SumMolarFractions += exp(F[i] + x) / px;
		SumG += (log(px * ex[i] / xs) - F[i]) * ex[i];
	}
	double SumL = 0;
	for (int j = 0; j < m; j++)
	{
		SumL += b[j] * xx[j];
	}
	double epsg = abs(SumL - SumG);
	result.push_back(epsmb);
	result.push_back(epsg);
	result.push_back(SumMolarFractions);
	result.push_back(SumG);
	return result;
}
Result_of_MicPV MicPV(double T, double p, double v, int m, int k, vector<double> b, vector<vector<double>> Nji, vector<double> F)
{
	vector<double> Parameters(4, 0);
	vector<double> EquilibriumComposition(k, 0);
	vector<double> bb(m + 1, 0);
	double Rgas = 8.314462618;
	double StandardPressure = 101325;
	double sum_b = 0;
	vector<double> Result_of_check_convergency(4 , 0);
	for (int i = 0; i < m; i++)
	{
		sum_b += b[i];
	}
	for (int i = 0; i < m; i++)
	{
		b[i] = b[i] / sum_b;
	}
	v = v / sum_b;
	string ier;
	if (m == 0 || k == 0)
	{
		ier = "(m == 0) | (k == 0)";
		Result_of_MicPV res(ier, Parameters, EquilibriumComposition, 0, Result_of_check_convergency);
		return res;
	}
	int m1 = m + 1, m2 = m + 2, iter = 0; 
	ier = "";
	vector<double> x(k, 0), ex(k, 0), xrem(m1, 0), str(m2, 0);
	for (int i = 0; i < k; i++)
	{
		x[i] = -15.0;
		ex[i] = exp(x[i]);
	}
	double y = 0.0;
	double eps = 0.0;
	double xs = 0.0;
	vector<double> xx(b.size());
	while (true)
	{
		eps = 0.0;
		vector<vector<double>> S(m1, vector<double>(m1, 0));
		for (int j = 0; j < m; j++)
		{
			bb[j] = b[j];
		}
		if (v <= 0.0)
		{
			S[m1 - 1][m1 - 1] = (1.e6 / StandardPressure) * p * exp(-y);
			bb[m1 - 1] = S[m1 - 1][m1 - 1] * (1.0 + y);
		}
		else
		{
			S[m1 - 1][m1 - 1] = 1.0;
			bb[m1 - 1] = log((Rgas / StandardPressure) * T / v);
		}
		for (int i = 0; i < k; i++)
		{
			str[m1 - 1] = -ex[i];
			str[m2 - 1] = (x[i] - F[i] - 1.0) * ex[i];
			for (int j = 0; j < m; j++)
			{
				str[j] = Nji[i][j] * ex[i];
			}
			if (v <= 0.0)
			{
				for (int j = 0; j < m1; j++)
				{
					S[m1 - 1][j] = S[m1 - 1][j] + str[j];
				}
				bb[m1 - 1] = bb[m1 - 1] + str[m2 - 1];
			}
			for (int jj = 0; jj < m; jj++)
			{
				for (int j = 0; j < m1; j++)
				{
					S[jj][j] = S[jj][j] + str[j] * Nji[i][jj];
				}
				bb[jj] = bb[jj] + str[m2 - 1] * Nji[i][jj];
			}
		}
		MatrixXd S_new = MatrixXd::Zero(m1, m1);
		MatrixXd Q(S_new.rows(), S_new.cols());
		MatrixXd R(S_new.cols(), S_new.cols());
		for (int i = 0; i < m1; i++)
		{
			for (int j = 0; j < m1; j++)
			{
				S_new(i, j) = S[i][j];
			}
		}
		VectorXd col;
		for (int i = 0; i < S_new.cols(); i++)
		{
			col = S_new.col(i);
			for (int j = 0; j < i; j++)
			{
				col -= (col.dot(Q.col(j))) * Q.col(j);
			}
			col = col.normalized();
			Q.col(i) = col;
		}
		R = Q.transpose() * S_new;
		vector<vector<double>> zQ_Transposed(m1, vector<double>(m1));
		for (int i = 0; i < m1; i++)
		{
			for (int j = 0; j < m1; j++)
			{
				if (abs(Q(j, i)) < 1.e-8)
				{
					zQ_Transposed[i][j] = 0;
				}
				else
				{
					zQ_Transposed[i][j] = Q(j, i);
				}
			}
		}
		vector<vector<double>> zR(m1, vector<double>(m1));
		for (int i = 0; i < m1; i++)
		{
			for (int j = 0; j < m1; j++)
			{
				if (abs(R(i, j)) < 1.e-8)
				{
					zR[i][j] = 0;
				}
				else
				{
					zR[i][j] = R(i, j);
				}
			}
		}
		vector<double> yy(m1, 0);
		multiply(zQ_Transposed, bb, yy);
		xx = back_subst(zR, yy, xrem);
		double w = 0.5;
		if (abs(y) > 1.0) 
			w = 0.5 * abs(y);
		if (abs(xx[m1 - 1] - y) < w)
			w = abs(xx[m1 - 1] - y);
		if (xx[m1 - 1] < y) 
			w = -w;
		if ((abs(y) > 1e-10) && (abs(w / y) > eps)) 
			eps = abs(w / y);
		y = y + w;
		xs = 0.0;
		for (int i = 0; i < k; i++)
		{
			double u = F[i] - xx[m1 - 1];
			for (int j = 0; j < m; j++)
			{
				 u = u + Nji[i][j] * xx[j];
			}
			w = 3.0;
			if (u >= x[i])
			{
				w = 1.0;
				if (x[i] < -7.0)
					w = 5.0;
			}
			if (abs(u - x[i]) < w) 
				w = abs(u - x[i]);
			if (u < x[i]) 
				w = -w;
			if ((x[i] > -80) && (abs(x[i]) > 1e-10) && (abs(w / x[i]) > eps)) 
				eps = abs(w / x[i]);
			x[i] = x[i] + w;
			ex[i] = exp(x[i]);
			xs = xs + ex[i];
		}
		xrem = xx;
		iter = iter + 1;
		if (eps <= 1e-6)
			break;
		if (iter > 200)
			break;
	}
	if (iter > 200)
	{
		ier = "after 200 iterations eps= " + to_string(eps);
	}
	if (v <= 0)
		Parameters[0] = p;
	else
		Parameters[0] = 1.e-6 * Rgas * T * xs / v;
	
	Result_of_check_convergency = CheckConvergency(Parameters[0], m, k, b, Nji, F, ex, xx, xs, StandardPressure);
	Parameters[1] = T;
	if (v <= 0.0)
	{
		Parameters[2] = (Rgas / StandardPressure) * T * sum_b / exp(y);
	}
	else
	{
		Parameters[2] = v * sum_b;
	}
	Parameters[3] = xs * sum_b;
	for (int i = 0; i < k; i++)
	{
		EquilibriumComposition[i] = ex[i] * sum_b;
	}
	for (int i = 0; i < m; i++)
	{
		b[i] = b[i] * sum_b;
	}
	Result_of_MicPV result(ier, Parameters, EquilibriumComposition, Result_of_check_convergency[3] * sum_b, Result_of_check_convergency);
	return result;
}

