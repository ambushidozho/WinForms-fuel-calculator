#pragma once

namespace sch {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// —водка дл€ MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: добавьте код конструктора
			//
		}

	protected:
		/// <summary>
		/// ќсвободить все используемые ресурсы.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label13;
	protected:
	private: System::Windows::Forms::Label^ label12;
	private: System::Windows::Forms::Label^ label14;
	private: System::Windows::Forms::TextBox^ tbrowsMat;
	private: System::Windows::Forms::TextBox^ tbcolsMat;
	private: System::Windows::Forms::Button^ rowsMatbtn;
	private: System::Windows::Forms::DataGridView^ dgvThird;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ dataGridViewTextBoxColumn20;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ dataGridViewTextBoxColumn21;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ dataGridViewTextBoxColumn22;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ dataGridViewTextBoxColumn23;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ dataGridViewTextBoxColumn24;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ dataGridViewTextBoxColumn25;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ dataGridViewTextBoxColumn26;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ dataGridViewTextBoxColumn27;
	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::TextBox^ tbcols2;
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::TextBox^ tbPressure;
	private: System::Windows::Forms::Label^ label11;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::Button^ cols2btn;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::TextBox^ tbM;
	private: System::Windows::Forms::TextBox^ tbTemperature;
	private: System::Windows::Forms::TextBox^ tbcols3;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::TextBox^ tbK;
	private: System::Windows::Forms::DataGridView^ dgvSecond;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ dataGridViewTextBoxColumn4;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ dataGridViewTextBoxColumn5;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ dataGridViewTextBoxColumn6;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ dataGridViewTextBoxColumn7;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ dataGridViewTextBoxColumn8;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ dataGridViewTextBoxColumn9;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ dataGridViewTextBoxColumn10;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ dataGridViewTextBoxColumn11;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Button^ cols3btn;
	private: System::Windows::Forms::DataGridView^ dgvFirst;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ dataGridViewTextBoxColumn1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ dataGridViewTextBoxColumn2;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ dataGridViewTextBoxColumn3;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ col4;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ col5;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ col6;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ col7;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ col8;
	private: System::Windows::Forms::ListBox^ lb1;

	private: System::Windows::Forms::DataGridView^ dgvMatrix;








	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::TextBox^ tbcols1;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Button^ cols1btn;
	private: System::Windows::Forms::Button^ calcbtn;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label15;
	private: System::Windows::Forms::TextBox^ tbVolume;
	private: System::Windows::Forms::GroupBox^ groupBox1;
	private: System::Windows::Forms::MenuStrip^ menuStrip1;
	private: System::Windows::Forms::ToolStripMenuItem^ toolStripMenuItem1;
	private: System::Windows::Forms::ToolStripMenuItem^ saveToolStripMenuItem;
	private: System::Windows::Forms::SaveFileDialog^ sfdSave;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ dataGridViewTextBoxColumn12;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ dataGridViewTextBoxColumn13;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ dataGridViewTextBoxColumn14;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ dataGridViewTextBoxColumn15;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ dataGridViewTextBoxColumn16;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ dataGridViewTextBoxColumn17;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ dataGridViewTextBoxColumn18;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ dataGridViewTextBoxColumn19;
private: System::Windows::Forms::Label^ label3;








	protected:

	protected:








































































































	private:
		/// <summary>
		/// ќб€зательна€ переменна€ конструктора.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// “ребуемый метод дл€ поддержки конструктора Ч не измен€йте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle1 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle2 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle3 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle4 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->tbrowsMat = (gcnew System::Windows::Forms::TextBox());
			this->tbcolsMat = (gcnew System::Windows::Forms::TextBox());
			this->rowsMatbtn = (gcnew System::Windows::Forms::Button());
			this->dgvThird = (gcnew System::Windows::Forms::DataGridView());
			this->dataGridViewTextBoxColumn20 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dataGridViewTextBoxColumn21 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dataGridViewTextBoxColumn22 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dataGridViewTextBoxColumn23 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dataGridViewTextBoxColumn24 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dataGridViewTextBoxColumn25 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dataGridViewTextBoxColumn26 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dataGridViewTextBoxColumn27 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->tbcols2 = (gcnew System::Windows::Forms::TextBox());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->tbPressure = (gcnew System::Windows::Forms::TextBox());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->cols2btn = (gcnew System::Windows::Forms::Button());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->tbM = (gcnew System::Windows::Forms::TextBox());
			this->tbTemperature = (gcnew System::Windows::Forms::TextBox());
			this->tbcols3 = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->tbK = (gcnew System::Windows::Forms::TextBox());
			this->dgvSecond = (gcnew System::Windows::Forms::DataGridView());
			this->dataGridViewTextBoxColumn4 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dataGridViewTextBoxColumn5 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dataGridViewTextBoxColumn6 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dataGridViewTextBoxColumn7 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dataGridViewTextBoxColumn8 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dataGridViewTextBoxColumn9 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dataGridViewTextBoxColumn10 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dataGridViewTextBoxColumn11 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->cols3btn = (gcnew System::Windows::Forms::Button());
			this->dgvFirst = (gcnew System::Windows::Forms::DataGridView());
			this->dataGridViewTextBoxColumn1 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dataGridViewTextBoxColumn2 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dataGridViewTextBoxColumn3 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->col4 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->col5 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->col6 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->col7 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->col8 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->lb1 = (gcnew System::Windows::Forms::ListBox());
			this->dgvMatrix = (gcnew System::Windows::Forms::DataGridView());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->tbcols1 = (gcnew System::Windows::Forms::TextBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->cols1btn = (gcnew System::Windows::Forms::Button());
			this->calcbtn = (gcnew System::Windows::Forms::Button());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label15 = (gcnew System::Windows::Forms::Label());
			this->tbVolume = (gcnew System::Windows::Forms::TextBox());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->toolStripMenuItem1 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->saveToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->sfdSave = (gcnew System::Windows::Forms::SaveFileDialog());
			this->dataGridViewTextBoxColumn12 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dataGridViewTextBoxColumn13 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dataGridViewTextBoxColumn14 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dataGridViewTextBoxColumn15 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dataGridViewTextBoxColumn16 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dataGridViewTextBoxColumn17 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dataGridViewTextBoxColumn18 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dataGridViewTextBoxColumn19 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->label3 = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgvThird))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgvSecond))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgvFirst))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgvMatrix))->BeginInit();
			this->groupBox1->SuspendLayout();
			this->menuStrip1->SuspendLayout();
			this->SuspendLayout();
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label13->ForeColor = System::Drawing::Color::White;
			this->label13->Location = System::Drawing::Point(427, 16);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(32, 21);
			this->label13->TabIndex = 41;
			this->label13->Text = L"Nji";
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label12->ForeColor = System::Drawing::Color::White;
			this->label12->Location = System::Drawing::Point(12, 340);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(26, 21);
			this->label12->TabIndex = 40;
			this->label12->Text = L"b:";
			// 
			// label14
			// 
			this->label14->AutoSize = true;
			this->label14->Font = (gcnew System::Drawing::Font(L"Verdana", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label14->ForeColor = System::Drawing::Color::White;
			this->label14->Location = System::Drawing::Point(428, 377);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(18, 18);
			this->label14->TabIndex = 42;
			this->label14->Text = L"F";
			// 
			// tbrowsMat
			// 
			this->tbrowsMat->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->tbrowsMat->Location = System::Drawing::Point(431, 260);
			this->tbrowsMat->MaximumSize = System::Drawing::Size(50, 36);
			this->tbrowsMat->MinimumSize = System::Drawing::Size(50, 36);
			this->tbrowsMat->Name = L"tbrowsMat";
			this->tbrowsMat->Size = System::Drawing::Size(50, 36);
			this->tbrowsMat->TabIndex = 32;
			this->tbrowsMat->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &MyForm::tbcolsMat_KeyPress);
			// 
			// tbcolsMat
			// 
			this->tbcolsMat->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->tbcolsMat->Location = System::Drawing::Point(431, 325);
			this->tbcolsMat->MaximumSize = System::Drawing::Size(50, 36);
			this->tbcolsMat->MinimumSize = System::Drawing::Size(50, 36);
			this->tbcolsMat->Name = L"tbcolsMat";
			this->tbcolsMat->Size = System::Drawing::Size(50, 36);
			this->tbcolsMat->TabIndex = 33;
			this->tbcolsMat->TextChanged += gcnew System::EventHandler(this, &MyForm::tbcolsMat_TextChanged);
			this->tbcolsMat->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &MyForm::tbcolsMat_KeyPress);
			// 
			// rowsMatbtn
			// 
			this->rowsMatbtn->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(117)), static_cast<System::Int32>(static_cast<System::Byte>(116)),
				static_cast<System::Int32>(static_cast<System::Byte>(116)));
			this->rowsMatbtn->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->rowsMatbtn->FlatAppearance->BorderSize = 0;
			this->rowsMatbtn->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->rowsMatbtn->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->rowsMatbtn->ForeColor = System::Drawing::Color::White;
			this->rowsMatbtn->Location = System::Drawing::Point(593, 282);
			this->rowsMatbtn->Name = L"rowsMatbtn";
			this->rowsMatbtn->Size = System::Drawing::Size(90, 40);
			this->rowsMatbtn->TabIndex = 34;
			this->rowsMatbtn->Text = L"Apply";
			this->rowsMatbtn->UseVisualStyleBackColor = false;
			this->rowsMatbtn->Click += gcnew System::EventHandler(this, &MyForm::rowsMatbtn_Click);
			// 
			// dgvThird
			// 
			this->dgvThird->AllowUserToAddRows = false;
			this->dgvThird->AllowUserToResizeColumns = false;
			this->dgvThird->AllowUserToResizeRows = false;
			this->dgvThird->BackgroundColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(49)), static_cast<System::Int32>(static_cast<System::Byte>(50)),
				static_cast<System::Int32>(static_cast<System::Byte>(56)));
			this->dgvThird->ColumnHeadersVisible = false;
			this->dgvThird->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(8) {
				this->dataGridViewTextBoxColumn20,
					this->dataGridViewTextBoxColumn21, this->dataGridViewTextBoxColumn22, this->dataGridViewTextBoxColumn23, this->dataGridViewTextBoxColumn24,
					this->dataGridViewTextBoxColumn25, this->dataGridViewTextBoxColumn26, this->dataGridViewTextBoxColumn27
			});
			this->dgvThird->GridColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(145)),
				static_cast<System::Int32>(static_cast<System::Byte>(44)));
			this->dgvThird->Location = System::Drawing::Point(431, 399);
			this->dgvThird->Name = L"dgvThird";
			this->dgvThird->RowHeadersVisible = false;
			this->dgvThird->RowTemplate->DefaultCellStyle->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 9.75F, System::Drawing::FontStyle::Bold,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->dgvThird->RowTemplate->Height = 30;
			this->dgvThird->RowTemplate->Resizable = System::Windows::Forms::DataGridViewTriState::False;
			this->dgvThird->ScrollBars = System::Windows::Forms::ScrollBars::Horizontal;
			this->dgvThird->Size = System::Drawing::Size(341, 78);
			this->dgvThird->TabIndex = 28;
			// 
			// dataGridViewTextBoxColumn20
			// 
			this->dataGridViewTextBoxColumn20->HeaderText = L"1";
			this->dataGridViewTextBoxColumn20->Name = L"dataGridViewTextBoxColumn20";
			// 
			// dataGridViewTextBoxColumn21
			// 
			this->dataGridViewTextBoxColumn21->HeaderText = L"2";
			this->dataGridViewTextBoxColumn21->Name = L"dataGridViewTextBoxColumn21";
			// 
			// dataGridViewTextBoxColumn22
			// 
			this->dataGridViewTextBoxColumn22->HeaderText = L"3";
			this->dataGridViewTextBoxColumn22->Name = L"dataGridViewTextBoxColumn22";
			// 
			// dataGridViewTextBoxColumn23
			// 
			this->dataGridViewTextBoxColumn23->HeaderText = L"4";
			this->dataGridViewTextBoxColumn23->Name = L"dataGridViewTextBoxColumn23";
			// 
			// dataGridViewTextBoxColumn24
			// 
			this->dataGridViewTextBoxColumn24->HeaderText = L"5";
			this->dataGridViewTextBoxColumn24->Name = L"dataGridViewTextBoxColumn24";
			// 
			// dataGridViewTextBoxColumn25
			// 
			this->dataGridViewTextBoxColumn25->HeaderText = L"6";
			this->dataGridViewTextBoxColumn25->Name = L"dataGridViewTextBoxColumn25";
			// 
			// dataGridViewTextBoxColumn26
			// 
			this->dataGridViewTextBoxColumn26->HeaderText = L"7";
			this->dataGridViewTextBoxColumn26->Name = L"dataGridViewTextBoxColumn26";
			// 
			// dataGridViewTextBoxColumn27
			// 
			this->dataGridViewTextBoxColumn27->HeaderText = L"8";
			this->dataGridViewTextBoxColumn27->Name = L"dataGridViewTextBoxColumn27";
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label10->ForeColor = System::Drawing::Color::White;
			this->label10->Location = System::Drawing::Point(427, 236);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(128, 21);
			this->label10->TabIndex = 36;
			this->label10->Text = L"Number of rows";
			// 
			// tbcols2
			// 
			this->tbcols2->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->tbcols2->Location = System::Drawing::Point(16, 441);
			this->tbcols2->MaximumSize = System::Drawing::Size(50, 36);
			this->tbcols2->MinimumSize = System::Drawing::Size(50, 36);
			this->tbcols2->Name = L"tbcols2";
			this->tbcols2->Size = System::Drawing::Size(50, 36);
			this->tbcols2->TabIndex = 19;
			this->tbcols2->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &MyForm::tbcolsMat_KeyPress);
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label9->ForeColor = System::Drawing::Color::White;
			this->label9->Location = System::Drawing::Point(427, 480);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(158, 21);
			this->label9->TabIndex = 29;
			this->label9->Text = L"Number of elements";
			// 
			// tbPressure
			// 
			this->tbPressure->Location = System::Drawing::Point(94, 16);
			this->tbPressure->Name = L"tbPressure";
			this->tbPressure->Size = System::Drawing::Size(100, 28);
			this->tbPressure->TabIndex = 1;
			this->tbPressure->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &MyForm::tbcolsMat_KeyPress);
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label11->ForeColor = System::Drawing::Color::White;
			this->label11->Location = System::Drawing::Point(427, 301);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(151, 21);
			this->label11->TabIndex = 37;
			this->label11->Text = L"Number of colomns";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label8->ForeColor = System::Drawing::Color::White;
			this->label8->Location = System::Drawing::Point(12, 417);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(158, 21);
			this->label8->TabIndex = 21;
			this->label8->Text = L"Number of elements";
			// 
			// cols2btn
			// 
			this->cols2btn->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(117)), static_cast<System::Int32>(static_cast<System::Byte>(116)),
				static_cast<System::Int32>(static_cast<System::Byte>(116)));
			this->cols2btn->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->cols2btn->FlatAppearance->BorderColor = System::Drawing::Color::White;
			this->cols2btn->FlatAppearance->BorderSize = 0;
			this->cols2btn->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->cols2btn->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->cols2btn->ForeColor = System::Drawing::Color::White;
			this->cols2btn->Location = System::Drawing::Point(80, 441);
			this->cols2btn->Name = L"cols2btn";
			this->cols2btn->Size = System::Drawing::Size(90, 36);
			this->cols2btn->TabIndex = 23;
			this->cols2btn->Text = L"Apply";
			this->cols2btn->UseVisualStyleBackColor = false;
			this->cols2btn->Click += gcnew System::EventHandler(this, &MyForm::cols2btn_Click);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->ForeColor = System::Drawing::Color::White;
			this->label2->Location = System::Drawing::Point(6, 19);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(93, 21);
			this->label2->TabIndex = 8;
			this->label2->Text = L"Pressure = ";
			// 
			// tbM
			// 
			this->tbM->Location = System::Drawing::Point(45, 86);
			this->tbM->Name = L"tbM";
			this->tbM->Size = System::Drawing::Size(100, 28);
			this->tbM->TabIndex = 4;
			this->tbM->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &MyForm::tbcolsMat_KeyPress);
			// 
			// tbTemperature
			// 
			this->tbTemperature->Location = System::Drawing::Point(124, 52);
			this->tbTemperature->Name = L"tbTemperature";
			this->tbTemperature->Size = System::Drawing::Size(100, 28);
			this->tbTemperature->TabIndex = 0;
			this->tbTemperature->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &MyForm::tbcolsMat_KeyPress);
			// 
			// tbcols3
			// 
			this->tbcols3->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->tbcols3->Location = System::Drawing::Point(431, 504);
			this->tbcols3->MaximumSize = System::Drawing::Size(50, 36);
			this->tbcols3->MinimumSize = System::Drawing::Size(50, 36);
			this->tbcols3->Name = L"tbcols3";
			this->tbcols3->Size = System::Drawing::Size(50, 36);
			this->tbcols3->TabIndex = 31;
			this->tbcols3->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &MyForm::tbcolsMat_KeyPress);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->ForeColor = System::Drawing::Color::White;
			this->label1->Location = System::Drawing::Point(6, 55);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(124, 21);
			this->label1->TabIndex = 7;
			this->label1->Text = L"Temperature = ";
			// 
			// tbK
			// 
			this->tbK->Location = System::Drawing::Point(46, 128);
			this->tbK->Name = L"tbK";
			this->tbK->Size = System::Drawing::Size(100, 28);
			this->tbK->TabIndex = 5;
			this->tbK->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &MyForm::tbcolsMat_KeyPress);
			// 
			// dgvSecond
			// 
			this->dgvSecond->AllowUserToAddRows = false;
			this->dgvSecond->AllowUserToResizeColumns = false;
			this->dgvSecond->AllowUserToResizeRows = false;
			this->dgvSecond->BackgroundColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(49)), static_cast<System::Int32>(static_cast<System::Byte>(50)),
				static_cast<System::Int32>(static_cast<System::Byte>(56)));
			this->dgvSecond->ColumnHeadersVisible = false;
			this->dgvSecond->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(8) {
				this->dataGridViewTextBoxColumn4,
					this->dataGridViewTextBoxColumn5, this->dataGridViewTextBoxColumn6, this->dataGridViewTextBoxColumn7, this->dataGridViewTextBoxColumn8,
					this->dataGridViewTextBoxColumn9, this->dataGridViewTextBoxColumn10, this->dataGridViewTextBoxColumn11
			});
			this->dgvSecond->GridColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(145)),
				static_cast<System::Int32>(static_cast<System::Byte>(44)));
			this->dgvSecond->Location = System::Drawing::Point(10, 364);
			this->dgvSecond->Name = L"dgvSecond";
			this->dgvSecond->RowHeadersVisible = false;
			this->dgvSecond->RowTemplate->DefaultCellStyle->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 9.75F, System::Drawing::FontStyle::Bold,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->dgvSecond->RowTemplate->Height = 30;
			this->dgvSecond->RowTemplate->Resizable = System::Windows::Forms::DataGridViewTriState::False;
			this->dgvSecond->ScrollBars = System::Windows::Forms::ScrollBars::Horizontal;
			this->dgvSecond->Size = System::Drawing::Size(373, 50);
			this->dgvSecond->TabIndex = 25;
			// 
			// dataGridViewTextBoxColumn4
			// 
			this->dataGridViewTextBoxColumn4->HeaderText = L"1";
			this->dataGridViewTextBoxColumn4->Name = L"dataGridViewTextBoxColumn4";
			this->dataGridViewTextBoxColumn4->Width = 50;
			// 
			// dataGridViewTextBoxColumn5
			// 
			this->dataGridViewTextBoxColumn5->HeaderText = L"2";
			this->dataGridViewTextBoxColumn5->Name = L"dataGridViewTextBoxColumn5";
			this->dataGridViewTextBoxColumn5->Width = 50;
			// 
			// dataGridViewTextBoxColumn6
			// 
			this->dataGridViewTextBoxColumn6->HeaderText = L"3";
			this->dataGridViewTextBoxColumn6->Name = L"dataGridViewTextBoxColumn6";
			this->dataGridViewTextBoxColumn6->Width = 50;
			// 
			// dataGridViewTextBoxColumn7
			// 
			this->dataGridViewTextBoxColumn7->HeaderText = L"4";
			this->dataGridViewTextBoxColumn7->Name = L"dataGridViewTextBoxColumn7";
			this->dataGridViewTextBoxColumn7->Width = 50;
			// 
			// dataGridViewTextBoxColumn8
			// 
			this->dataGridViewTextBoxColumn8->HeaderText = L"5";
			this->dataGridViewTextBoxColumn8->Name = L"dataGridViewTextBoxColumn8";
			this->dataGridViewTextBoxColumn8->Width = 50;
			// 
			// dataGridViewTextBoxColumn9
			// 
			this->dataGridViewTextBoxColumn9->HeaderText = L"6";
			this->dataGridViewTextBoxColumn9->Name = L"dataGridViewTextBoxColumn9";
			this->dataGridViewTextBoxColumn9->Width = 50;
			// 
			// dataGridViewTextBoxColumn10
			// 
			this->dataGridViewTextBoxColumn10->HeaderText = L"7";
			this->dataGridViewTextBoxColumn10->Name = L"dataGridViewTextBoxColumn10";
			this->dataGridViewTextBoxColumn10->Width = 50;
			// 
			// dataGridViewTextBoxColumn11
			// 
			this->dataGridViewTextBoxColumn11->HeaderText = L"8";
			this->dataGridViewTextBoxColumn11->Name = L"dataGridViewTextBoxColumn11";
			this->dataGridViewTextBoxColumn11->Width = 50;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->ForeColor = System::Drawing::Color::White;
			this->label6->Location = System::Drawing::Point(6, 128);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(34, 21);
			this->label6->TabIndex = 12;
			this->label6->Text = L"k =";
			// 
			// cols3btn
			// 
			this->cols3btn->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(117)), static_cast<System::Int32>(static_cast<System::Byte>(116)),
				static_cast<System::Int32>(static_cast<System::Byte>(116)));
			this->cols3btn->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->cols3btn->FlatAppearance->BorderSize = 0;
			this->cols3btn->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->cols3btn->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->cols3btn->ForeColor = System::Drawing::Color::White;
			this->cols3btn->Location = System::Drawing::Point(495, 504);
			this->cols3btn->Name = L"cols3btn";
			this->cols3btn->Size = System::Drawing::Size(90, 36);
			this->cols3btn->TabIndex = 30;
			this->cols3btn->Text = L"Apply";
			this->cols3btn->UseVisualStyleBackColor = false;
			this->cols3btn->Click += gcnew System::EventHandler(this, &MyForm::cols3btn_Click);
			// 
			// dgvFirst
			// 
			this->dgvFirst->AllowUserToAddRows = false;
			this->dgvFirst->AllowUserToResizeColumns = false;
			this->dgvFirst->AllowUserToResizeRows = false;
			dataGridViewCellStyle1->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->dgvFirst->AlternatingRowsDefaultCellStyle = dataGridViewCellStyle1;
			this->dgvFirst->BackgroundColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(49)), static_cast<System::Int32>(static_cast<System::Byte>(50)),
				static_cast<System::Int32>(static_cast<System::Byte>(56)));
			this->dgvFirst->ColumnHeadersVisible = false;
			this->dgvFirst->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(8) {
				this->dataGridViewTextBoxColumn1,
					this->dataGridViewTextBoxColumn2, this->dataGridViewTextBoxColumn3, this->col4, this->col5, this->col6, this->col7, this->col8
			});
			this->dgvFirst->GridColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(145)),
				static_cast<System::Int32>(static_cast<System::Byte>(44)));
			this->dgvFirst->Location = System::Drawing::Point(10, 216);
			this->dgvFirst->Name = L"dgvFirst";
			this->dgvFirst->RowHeadersVisible = false;
			this->dgvFirst->RowTemplate->DefaultCellStyle->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 9.75F, System::Drawing::FontStyle::Bold,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->dgvFirst->RowTemplate->Height = 30;
			this->dgvFirst->RowTemplate->Resizable = System::Windows::Forms::DataGridViewTriState::False;
			this->dgvFirst->ScrollBars = System::Windows::Forms::ScrollBars::Horizontal;
			this->dgvFirst->Size = System::Drawing::Size(373, 50);
			this->dgvFirst->TabIndex = 18;
			// 
			// dataGridViewTextBoxColumn1
			// 
			this->dataGridViewTextBoxColumn1->HeaderText = L"1";
			this->dataGridViewTextBoxColumn1->Name = L"dataGridViewTextBoxColumn1";
			// 
			// dataGridViewTextBoxColumn2
			// 
			this->dataGridViewTextBoxColumn2->HeaderText = L"2";
			this->dataGridViewTextBoxColumn2->Name = L"dataGridViewTextBoxColumn2";
			// 
			// dataGridViewTextBoxColumn3
			// 
			this->dataGridViewTextBoxColumn3->HeaderText = L"3";
			this->dataGridViewTextBoxColumn3->Name = L"dataGridViewTextBoxColumn3";
			// 
			// col4
			// 
			this->col4->HeaderText = L"4";
			this->col4->Name = L"col4";
			// 
			// col5
			// 
			this->col5->HeaderText = L"5";
			this->col5->Name = L"col5";
			// 
			// col6
			// 
			this->col6->HeaderText = L"6";
			this->col6->Name = L"col6";
			// 
			// col7
			// 
			this->col7->HeaderText = L"7";
			this->col7->Name = L"col7";
			// 
			// col8
			// 
			this->col8->HeaderText = L"8";
			this->col8->Name = L"col8";
			// 
			// lb1
			// 
			this->lb1->FormattingEnabled = true;
			this->lb1->ItemHeight = 21;
			this->lb1->Location = System::Drawing::Point(825, 47);
			this->lb1->Name = L"lb1";
			this->lb1->Size = System::Drawing::Size(465, 298);
			this->lb1->TabIndex = 26;
			// 
			// dgvMatrix
			// 
			this->dgvMatrix->AllowUserToAddRows = false;
			this->dgvMatrix->AllowUserToResizeColumns = false;
			this->dgvMatrix->AllowUserToResizeRows = false;
			this->dgvMatrix->BackgroundColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(49)), static_cast<System::Int32>(static_cast<System::Byte>(50)),
				static_cast<System::Int32>(static_cast<System::Byte>(56)));
			this->dgvMatrix->ColumnHeadersVisible = false;
			this->dgvMatrix->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(8) {
				this->dataGridViewTextBoxColumn12,
					this->dataGridViewTextBoxColumn13, this->dataGridViewTextBoxColumn14, this->dataGridViewTextBoxColumn15, this->dataGridViewTextBoxColumn16,
					this->dataGridViewTextBoxColumn17, this->dataGridViewTextBoxColumn18, this->dataGridViewTextBoxColumn19
			});
			this->dgvMatrix->GridColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(145)),
				static_cast<System::Int32>(static_cast<System::Byte>(44)));
			this->dgvMatrix->Location = System::Drawing::Point(431, 40);
			this->dgvMatrix->Name = L"dgvMatrix";
			this->dgvMatrix->RowHeadersVisible = false;
			this->dgvMatrix->RowTemplate->DefaultCellStyle->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 9.75F, System::Drawing::FontStyle::Bold,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->dgvMatrix->RowTemplate->Height = 30;
			this->dgvMatrix->RowTemplate->Resizable = System::Windows::Forms::DataGridViewTriState::False;
			this->dgvMatrix->Size = System::Drawing::Size(341, 193);
			this->dgvMatrix->TabIndex = 27;
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label7->ForeColor = System::Drawing::Color::White;
			this->label7->Location = System::Drawing::Point(6, 269);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(158, 21);
			this->label7->TabIndex = 22;
			this->label7->Text = L"Number of products";
			// 
			// tbcols1
			// 
			this->tbcols1->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->tbcols1->Location = System::Drawing::Point(10, 293);
			this->tbcols1->MaximumSize = System::Drawing::Size(50, 36);
			this->tbcols1->MinimumSize = System::Drawing::Size(50, 36);
			this->tbcols1->Name = L"tbcols1";
			this->tbcols1->Size = System::Drawing::Size(50, 36);
			this->tbcols1->TabIndex = 20;
			this->tbcols1->TextChanged += gcnew System::EventHandler(this, &MyForm::tbcols1_TextChanged);
			this->tbcols1->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &MyForm::tbcolsMat_KeyPress);
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->ForeColor = System::Drawing::Color::White;
			this->label5->Location = System::Drawing::Point(6, 89);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(45, 21);
			this->label5->TabIndex = 11;
			this->label5->Text = L"m = ";
			// 
			// cols1btn
			// 
			this->cols1btn->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(117)), static_cast<System::Int32>(static_cast<System::Byte>(116)),
				static_cast<System::Int32>(static_cast<System::Byte>(116)));
			this->cols1btn->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->cols1btn->FlatAppearance->BorderSize = 0;
			this->cols1btn->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->cols1btn->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->cols1btn->ForeColor = System::Drawing::Color::White;
			this->cols1btn->Location = System::Drawing::Point(74, 293);
			this->cols1btn->Name = L"cols1btn";
			this->cols1btn->Size = System::Drawing::Size(90, 36);
			this->cols1btn->TabIndex = 24;
			this->cols1btn->Text = L"Apply";
			this->cols1btn->UseVisualStyleBackColor = false;
			this->cols1btn->Click += gcnew System::EventHandler(this, &MyForm::cols1btn_Click);
			// 
			// calcbtn
			// 
			this->calcbtn->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(117)), static_cast<System::Int32>(static_cast<System::Byte>(116)),
				static_cast<System::Int32>(static_cast<System::Byte>(116)));
			this->calcbtn->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->calcbtn->Cursor = System::Windows::Forms::Cursors::Hand;
			this->calcbtn->FlatAppearance->BorderSize = 0;
			this->calcbtn->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->calcbtn->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->calcbtn->ForeColor = System::Drawing::Color::White;
			this->calcbtn->Location = System::Drawing::Point(1157, 374);
			this->calcbtn->Name = L"calcbtn";
			this->calcbtn->Size = System::Drawing::Size(133, 40);
			this->calcbtn->TabIndex = 38;
			this->calcbtn->Text = L"Calculate";
			this->calcbtn->UseVisualStyleBackColor = false;
			this->calcbtn->Click += gcnew System::EventHandler(this, &MyForm::calcbtn_Click);
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label4->ForeColor = System::Drawing::Color::White;
			this->label4->Location = System::Drawing::Point(6, 192);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(142, 21);
			this->label4->TabIndex = 39;
			this->label4->Text = L"List of products: ";
			// 
			// label15
			// 
			this->label15->AutoSize = true;
			this->label15->ForeColor = System::Drawing::Color::White;
			this->label15->Location = System::Drawing::Point(6, 164);
			this->label15->Name = L"label15";
			this->label15->Size = System::Drawing::Size(83, 21);
			this->label15->TabIndex = 43;
			this->label15->Text = L"Volume = ";
			// 
			// tbVolume
			// 
			this->tbVolume->Location = System::Drawing::Point(91, 161);
			this->tbVolume->Name = L"tbVolume";
			this->tbVolume->Size = System::Drawing::Size(100, 28);
			this->tbVolume->TabIndex = 44;
			this->tbVolume->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &MyForm::tbcolsMat_KeyPress);
			// 
			// groupBox1
			// 
			this->groupBox1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->groupBox1->Controls->Add(this->label3);
			this->groupBox1->Controls->Add(this->tbVolume);
			this->groupBox1->Controls->Add(this->calcbtn);
			this->groupBox1->Controls->Add(this->cols1btn);
			this->groupBox1->Controls->Add(this->tbcols1);
			this->groupBox1->Controls->Add(this->dgvMatrix);
			this->groupBox1->Controls->Add(this->lb1);
			this->groupBox1->Controls->Add(this->dgvFirst);
			this->groupBox1->Controls->Add(this->cols3btn);
			this->groupBox1->Controls->Add(this->dgvSecond);
			this->groupBox1->Controls->Add(this->tbK);
			this->groupBox1->Controls->Add(this->tbcols3);
			this->groupBox1->Controls->Add(this->tbTemperature);
			this->groupBox1->Controls->Add(this->tbM);
			this->groupBox1->Controls->Add(this->cols2btn);
			this->groupBox1->Controls->Add(this->tbPressure);
			this->groupBox1->Controls->Add(this->tbcols2);
			this->groupBox1->Controls->Add(this->dgvThird);
			this->groupBox1->Controls->Add(this->rowsMatbtn);
			this->groupBox1->Controls->Add(this->tbcolsMat);
			this->groupBox1->Controls->Add(this->tbrowsMat);
			this->groupBox1->Controls->Add(this->label14);
			this->groupBox1->Controls->Add(this->label13);
			this->groupBox1->Controls->Add(this->label10);
			this->groupBox1->Controls->Add(this->label11);
			this->groupBox1->Controls->Add(this->label9);
			this->groupBox1->Controls->Add(this->label8);
			this->groupBox1->Controls->Add(this->label12);
			this->groupBox1->Controls->Add(this->label4);
			this->groupBox1->Controls->Add(this->label7);
			this->groupBox1->Controls->Add(this->label6);
			this->groupBox1->Controls->Add(this->label15);
			this->groupBox1->Controls->Add(this->label5);
			this->groupBox1->Controls->Add(this->label1);
			this->groupBox1->Controls->Add(this->label2);
			this->groupBox1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->groupBox1->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->groupBox1->Location = System::Drawing::Point(0, 12);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(1314, 623);
			this->groupBox1->TabIndex = 38;
			this->groupBox1->TabStop = false;
			// 
			// menuStrip1
			// 
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->toolStripMenuItem1 });
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(1334, 24);
			this->menuStrip1->TabIndex = 39;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// toolStripMenuItem1
			// 
			this->toolStripMenuItem1->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->saveToolStripMenuItem });
			this->toolStripMenuItem1->Name = L"toolStripMenuItem1";
			this->toolStripMenuItem1->Size = System::Drawing::Size(37, 20);
			this->toolStripMenuItem1->Text = L"File";
			// 
			// saveToolStripMenuItem
			// 
			this->saveToolStripMenuItem->Name = L"saveToolStripMenuItem";
			this->saveToolStripMenuItem->Size = System::Drawing::Size(98, 22);
			this->saveToolStripMenuItem->Text = L"Save";
			this->saveToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::saveToolStripMenuItem_Click);
			// 
			// dataGridViewTextBoxColumn12
			// 
			dataGridViewCellStyle2->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->dataGridViewTextBoxColumn12->DefaultCellStyle = dataGridViewCellStyle2;
			this->dataGridViewTextBoxColumn12->HeaderText = L"1";
			this->dataGridViewTextBoxColumn12->Name = L"dataGridViewTextBoxColumn12";
			this->dataGridViewTextBoxColumn12->Width = 50;
			// 
			// dataGridViewTextBoxColumn13
			// 
			dataGridViewCellStyle3->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->dataGridViewTextBoxColumn13->DefaultCellStyle = dataGridViewCellStyle3;
			this->dataGridViewTextBoxColumn13->HeaderText = L"2";
			this->dataGridViewTextBoxColumn13->Name = L"dataGridViewTextBoxColumn13";
			this->dataGridViewTextBoxColumn13->Width = 50;
			// 
			// dataGridViewTextBoxColumn14
			// 
			dataGridViewCellStyle4->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->dataGridViewTextBoxColumn14->DefaultCellStyle = dataGridViewCellStyle4;
			this->dataGridViewTextBoxColumn14->HeaderText = L"3";
			this->dataGridViewTextBoxColumn14->Name = L"dataGridViewTextBoxColumn14";
			this->dataGridViewTextBoxColumn14->Width = 50;
			// 
			// dataGridViewTextBoxColumn15
			// 
			this->dataGridViewTextBoxColumn15->HeaderText = L"4";
			this->dataGridViewTextBoxColumn15->Name = L"dataGridViewTextBoxColumn15";
			this->dataGridViewTextBoxColumn15->Width = 50;
			// 
			// dataGridViewTextBoxColumn16
			// 
			this->dataGridViewTextBoxColumn16->HeaderText = L"5";
			this->dataGridViewTextBoxColumn16->Name = L"dataGridViewTextBoxColumn16";
			this->dataGridViewTextBoxColumn16->Width = 50;
			// 
			// dataGridViewTextBoxColumn17
			// 
			this->dataGridViewTextBoxColumn17->HeaderText = L"6";
			this->dataGridViewTextBoxColumn17->Name = L"dataGridViewTextBoxColumn17";
			this->dataGridViewTextBoxColumn17->Width = 50;
			// 
			// dataGridViewTextBoxColumn18
			// 
			this->dataGridViewTextBoxColumn18->HeaderText = L"7";
			this->dataGridViewTextBoxColumn18->Name = L"dataGridViewTextBoxColumn18";
			this->dataGridViewTextBoxColumn18->Width = 50;
			// 
			// dataGridViewTextBoxColumn19
			// 
			this->dataGridViewTextBoxColumn19->HeaderText = L"8";
			this->dataGridViewTextBoxColumn19->Name = L"dataGridViewTextBoxColumn19";
			this->dataGridViewTextBoxColumn19->Width = 50;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label3->ForeColor = System::Drawing::Color::White;
			this->label3->Location = System::Drawing::Point(820, 17);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(68, 27);
			this->label3->TabIndex = 45;
			this->label3->Text = L"Result";
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(49)), static_cast<System::Int32>(static_cast<System::Byte>(50)),
				static_cast<System::Int32>(static_cast<System::Byte>(56)));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->ClientSize = System::Drawing::Size(1334, 581);
			this->Controls->Add(this->menuStrip1);
			this->Controls->Add(this->groupBox1);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->MainMenuStrip = this->menuStrip1;
			this->MaximumSize = System::Drawing::Size(1350, 620);
			this->MinimumSize = System::Drawing::Size(1350, 620);
			this->Name = L"MyForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Calculator of fuel";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgvThird))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgvSecond))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgvFirst))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgvMatrix))->EndInit();
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void tbcols1_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void cols1btn_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void cols2btn_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void tbcolsMat_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void rowsMatbtn_Click(System::Object^ sender, System::EventArgs^ e);

private: System::Void cols3btn_Click(System::Object^ sender, System::EventArgs^ e);

private: System::Void calcbtn_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void tbcolsMat_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) 
{
	if ((e->KeyChar < 48 || e->KeyChar > 57) && e->KeyChar != '\b' && e->KeyChar != 44 && e->KeyChar != 45)
		e->Handled = true;
}
private: System::Void saveToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e);
};
}
