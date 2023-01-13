#pragma once
#include <vector>
using namespace std;
class Result_of_MicPV
{
public:
	string ier;
	vector<double> Parameters;
	vector<double> EquilibriumComposition;
	int Sum;
	vector<double> Result_of_check_convergency;
	Result_of_MicPV(string ier, vector<double> Parameters, vector<double> EquilibriumComposition, int Sum, vector<double> Result_of_check_convergency)
	{
		this->ier = ier;
		this->Parameters = Parameters;
		this->EquilibriumComposition = EquilibriumComposition;
		this->Sum = Sum;
		this->Result_of_check_convergency = Result_of_check_convergency;
	}

};
void multiply(vector<vector<double>>& A, vector<vector<double>>& B, vector<vector<double>>& C);
vector<double> back_subst(vector<vector<double>> R, vector<double> b, vector<double> xrem);
vector<double> CheckConvergency(double p, int m, int k, vector<double> b, vector<vector<double>> Nji, vector<double> F,
	vector<double> ex, vector<double> xx, double xs, double StandardPressure);
Result_of_MicPV MicPV(double T, double p, double v, int m, int k, vector<double> b, vector<vector<double>> Nji, vector<double> F);