#pragma once
#include "MyForm.h"
#include "Header.h"
#include "functions.h"
#include <msclr\marshal_cppstd.h>
#include "fstream"
using namespace msclr::interop;
enum State
{
	OK,
	Error
};
State state = OK;
System::Void sch::MyForm::cols1btn_Click(System::Object^ sender, System::EventArgs^ e)
{
	try {
		System::Int32^ Int;
		Int = System::Convert::ToInt32(tbcols1->Text);
		if (Convert::ToInt32(tbcols1->Text) > 200)
		{
			MessageBox::Show("Too many elements!!!");
		}
		else
		{
			if (tbcols1->Text != "")
			{
				dgvFirst->ColumnCount = Convert::ToInt32(tbcols1->Text);
				dgvFirst->RowCount = 1;
			}
		}
	}
	catch (Exception^ ex) {
		MessageBox::Show("Enter a number please!!!");
		tbcols1->Text = "";
	}
	
}
System::Void sch::MyForm::cols2btn_Click(System::Object^ sender, System::EventArgs^ e)
{
	try {
		System::Int32^ Int;
		Int = System::Convert::ToInt32(tbcols2->Text);
		if (Convert::ToInt32(tbcols2->Text) > 200)
		{
			MessageBox::Show("Too many elements!!!");
		}
		else
		{
			if (tbcols2->Text != "")
			{
				dgvSecond->ColumnCount = Convert::ToInt32(tbcols2->Text);
				dgvSecond->RowCount = 1;
			}
		}
	}
	catch (Exception^ ex) {
		MessageBox::Show("Enter a number please!!!");
		tbcols2->Text = "";
	}
}
System::Void sch::MyForm::rowsMatbtn_Click(System::Object^ sender, System::EventArgs^ e)
{
	try {
		System::Int32^ Int;
		Int = System::Convert::ToInt32(tbrowsMat->Text);
		Int = System::Convert::ToInt32(tbcolsMat->Text);
		if (Convert::ToInt32(tbrowsMat->Text) > 200 || Convert::ToInt32(tbcolsMat->Text) > 200)
		{
			MessageBox::Show("Too many elements!!!");
		}
		else
		{
			if (tbrowsMat->Text != "")
			{
				dgvMatrix->RowCount = Convert::ToInt32(tbrowsMat->Text);
			}
			if (tbcolsMat->Text != "")
			{
				dgvMatrix->ColumnCount = Convert::ToInt32(tbcolsMat->Text);
			}
		}
	}
	catch (Exception^ ex) {
		MessageBox::Show("Enter a number please!!!");
		tbrowsMat->Text = "";
		tbcolsMat->Text = "";
	}
}
System::Void sch::MyForm::cols3btn_Click(System::Object^ sender, System::EventArgs^ e)
{
	try {
		System::Int32^ Int;
		Int = System::Convert::ToInt32(tbcols3->Text);
		if (Convert::ToInt32(tbcols3->Text) > 200)
		{
			MessageBox::Show("Too many elements!!!");
		}
		else
		{
			if (tbcols3->Text != "")
			{
				dgvThird->ColumnCount = Convert::ToInt32(tbcols3->Text);
				dgvThird->RowCount = 1;
			}
		}
	}
	catch (Exception^ ex) {
		MessageBox::Show("Enter a number please!!!");
		tbcols3->Text = "";
	}
 }
System::Void sch::MyForm::calcbtn_Click(System::Object^ sender, System::EventArgs^ e)
{
	double T, p, v;
	int m, k;
	std::string ier = " ";
	std::vector<double> Parameters = {0};
	std::vector<double> EquilibriumComposition = {0};
	int Sum = 0;
	std::vector<double> Result_of_check_convergency = {0};
	std::vector<double> b(dgvSecond->ColumnCount);
	std::vector<double> F(dgvThird->ColumnCount);
	std::vector<std::vector<double>> Nji(dgvMatrix->RowCount, std::vector<double>(dgvMatrix->ColumnCount, 0));
	std::vector<std::string> List_of_products(dgvFirst->ColumnCount);
	Result_of_MicPV res(ier, Parameters, EquilibriumComposition, Sum, Result_of_check_convergency);
	try {
		System::Double^ Double;
		System::Int64^ Int;
		Double = System::Convert::ToDouble(tbTemperature->Text);
		if (tbTemperature->Text != "")
			T = Convert::ToDouble(tbTemperature->Text);
		else
			state = Error;
		Double = System::Convert::ToDouble(tbPressure->Text);
		if (tbPressure->Text != "")
			p = Convert::ToDouble(tbPressure->Text);
		else
			state = Error;
		Double = System::Convert::ToDouble(tbVolume->Text);
		if (tbVolume->Text != "")
			v = Convert::ToDouble(tbVolume->Text);
		else
			v = 0;
		Int = System::Convert::ToInt64(tbM->Text);
		if (tbM->Text != "")
			m = Convert::ToInt64(tbM->Text);
		else
			state = Error;
		Int = System::Convert::ToInt64(tbK->Text);
		if (tbK->Text != "")
			k = Convert::ToInt64(tbK->Text);
		else
			state = Error;
	}
	catch (Exception^ ex) 
	{
		MessageBox::Show("Enter a number please!!!");
		tbTemperature->Text = "";
		tbPressure->Text = "";
		tbVolume->Text = "";
		tbM->Text = "";
		tbK->Text = "";
	}
	if (dgvFirst->RowCount == 0)
		state = Error;
	else
		for (int i = 0; i < dgvFirst->ColumnCount; i++)
		{
			if (Convert::ToString(dgvFirst[i, 0]->Value) != "")
			{
				state = OK;
				List_of_products[i] = marshal_as<std::string>((Convert::ToString(dgvFirst[i, 0]->Value)));
			}
			else
			{
				state = Error;
			}
		}
	if (dgvSecond->RowCount == 0)
		state = Error;
	else
		for (int i = 0; i < dgvSecond->ColumnCount; i++)
		{
			
			try
			{
				System::Double^ Double;
				Double = System::Convert::ToDouble(this->dgvSecond[i, 0]->Value);
				if (Convert::ToString(dgvSecond[i, 0]->Value) != "")
				{
					b[i] = Convert::ToDouble(dgvSecond[i, 0]->Value);
				}
				else
				{
					state = Error;
				}
			}
			catch (Exception^ ex) 
			{
				MessageBox::Show("Enter a number please!!!");
				this->dgvSecond[i, 0]->Value = "";
			}
		}
	if (dgvThird->RowCount == 0)
		state = Error;
	else
		for (int i = 0; i < dgvThird->ColumnCount; i++)
		{
			try {
				System::Double^ Double;
				Double = System::Convert::ToDouble(this->dgvThird[i, 0]->Value);
				if (Convert::ToString(dgvThird[i, 0]->Value) != "")
				{
					F[i] = Convert::ToDouble(dgvThird[i, 0]->Value);
				}
				else
					state = Error;
			}
			catch (Exception^ ex) {
				MessageBox::Show("Enter a number please!!!");
				this->dgvThird[i, 0]->Value = "";
			}
			
		}
	if (dgvMatrix->RowCount == 0)
		state = Error;
	else
		for (int i = 0; i < dgvMatrix->RowCount; i++)
		{
			for (int j = 0; j < dgvMatrix->ColumnCount; j++)
			{
				try {
					System::Double^ Double;
					Double = System::Convert::ToDouble(this->dgvMatrix[j, i]->Value);
					if (Convert::ToString(dgvMatrix[j, i]->Value) != "")
					{
						Nji[i][j] = Convert::ToDouble(dgvMatrix[j, i]->Value);
					}
					else
						state = Error;
				}
				catch (Exception^ ex) {
					MessageBox::Show("Enter a number please!!!");
					this->dgvMatrix[j,i]->Value = "";
				}
			}
		}
	if (state != Error)
	{
		res = MicPV(T, p, v, m, k, b, Nji, F);
		lb1->Items->Clear();
		lb1->Items->Add("Pressure, MPa = " + Convert::ToString(res.Parameters[0]));
		lb1->Items->Add("Temperature, K = " + Convert::ToString(res.Parameters[1]));
		lb1->Items->Add("Volume, cub.m = " + Convert::ToString(res.Parameters[2]));
		lb1->Items->Add("Number of moles = " + Convert::ToString(res.Parameters[3]));
		lb1->Items->Add("Equilibrium composition, mole: ");
		for (int i = 0; i < res.EquilibriumComposition.size(); i++)
		{
			lb1->Items->Add(Convert::ToString(dgvFirst[i, 0]->Value) + "(g)" + "\t" + Convert::ToString(res.EquilibriumComposition[i]));
		}
		std::string fname = "data.txt";
		std::ofstream out;
		out.open(fname);
		if (!out.is_open())
			MessageBox::Show("Open file error");
		else
		{
			out << "Pressure, MPa = " << res.Parameters[0] << '\n'
				<< "Temperature, K = " << res.Parameters[1] << '\n'
				<< "Volume, cub.m = " << res.Parameters[2] << '\n'
				<< "Number of moles = " << res.Parameters[3] << '\n'
				<< "Equilibrium composition, mole: " << '\n';
			for (int i = 0; i < res.EquilibriumComposition.size(); i++)
			{
				out << List_of_products[i] << "(g)" << "\t" << res.EquilibriumComposition[i] << '\n';
			}
			out.close();
		}
	}
	else
		MessageBox::Show("Data entered incorrectly!!!");
}
System::Void sch::MyForm::saveToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)
{
	if (state == OK)
	{
		if (sfdSave->ShowDialog() == Windows::Forms::DialogResult::OK)
		{
			string fname = marshal_as<string>(sfdSave->FileName);
			ofstream out;
			out.open(fname);
			if (!out.is_open())
			{
				MessageBox::Show("Ошибка открытия файла");
			}
			else
			{
				int count = lb1->Items->Count;
				for (int i = 0; i < count; i++)
				{
					out << marshal_as<std::string>(Convert::ToString(lb1->Items[i])) << '\n';
				}
			}
		}
	}
}

