#pragma once

namespace PharmacyDB {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// ������ ��� AdminInterface
	/// </summary>
	public ref class AdminInterface : public System::Windows::Forms::Form
	{
	public:
		AdminInterface(void)
		{
			InitializeComponent();
			//
			//TODO: �������� ��� ������������
			//
		}
	public: System::Windows::Forms::GroupBox^ groupBox1;
	public:
	private: System::Windows::Forms::GroupBox^ groupBox2;
	private: System::Windows::Forms::Button^ buttonAddLine;
	private: System::Windows::Forms::Button^ buttonEditLine;
	private: System::Windows::Forms::GroupBox^ groupBox3;
	private: System::Windows::Forms::Button^ buttonDeleteLine;
	private: System::Windows::Forms::Label^ label1;







	public:
		DataGridView^ DataGridViewAdmin = gcnew DataGridView();
	protected:
		/// <summary>
		/// ���������� ��� ������������ �������.
		/// </summary>
		~AdminInterface()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::MenuStrip^ menuStrip1;
	private: System::Windows::Forms::ToolStripMenuItem^ �����ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ ����������������ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ ��������������ToolStripMenuItem;
	public: System::Windows::Forms::DataGridView^ dataGridViewAdmin;
	private: System::Windows::Forms::ToolStripMenuItem^ �������������������ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ ��������������ToolStripMenuItem;
	protected:

	private:
		/// <summary>
		/// ������������ ���������� ������������.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// ��������� ����� ��� ��������� ������������ � �� ��������� 
		/// ���������� ����� ������ � ������� ��������� ����.
		/// </summary>
		void InitializeComponent(void)
		{
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->�����ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->����������������ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->��������������ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->�������������������ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->��������������ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->dataGridViewAdmin = (gcnew System::Windows::Forms::DataGridView());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->groupBox2 = (gcnew System::Windows::Forms::GroupBox());
			this->buttonEditLine = (gcnew System::Windows::Forms::Button());
			this->groupBox3 = (gcnew System::Windows::Forms::GroupBox());
			this->buttonDeleteLine = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->buttonAddLine = (gcnew System::Windows::Forms::Button());
			this->menuStrip1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridViewAdmin))->BeginInit();
			this->groupBox1->SuspendLayout();
			this->groupBox2->SuspendLayout();
			this->groupBox3->SuspendLayout();
			this->SuspendLayout();
			// 
			// menuStrip1
			// 
			this->menuStrip1->ImageScalingSize = System::Drawing::Size(20, 20);
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {
				this->�����ToolStripMenuItem,
					this->�������������������ToolStripMenuItem, this->��������������ToolStripMenuItem
			});
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(1582, 28);
			this->menuStrip1->TabIndex = 0;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// �����ToolStripMenuItem
			// 
			this->�����ToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->����������������ToolStripMenuItem,
					this->��������������ToolStripMenuItem
			});
			this->�����ToolStripMenuItem->Name = L"�����ToolStripMenuItem";
			this->�����ToolStripMenuItem->Size = System::Drawing::Size(67, 24);
			this->�����ToolStripMenuItem->Text = L"�����";
			// 
			// ����������������ToolStripMenuItem
			// 
			this->����������������ToolStripMenuItem->Name = L"����������������ToolStripMenuItem";
			this->����������������ToolStripMenuItem->Size = System::Drawing::Size(243, 26);
			this->����������������ToolStripMenuItem->Text = L"����� �� ���������";
			this->����������������ToolStripMenuItem->Click += gcnew System::EventHandler(this, &AdminInterface::����������������ToolStripMenuItem_Click);
			// 
			// ��������������ToolStripMenuItem
			// 
			this->��������������ToolStripMenuItem->Name = L"��������������ToolStripMenuItem";
			this->��������������ToolStripMenuItem->Size = System::Drawing::Size(243, 26);
			this->��������������ToolStripMenuItem->Text = L"��������� �����";
			this->��������������ToolStripMenuItem->Click += gcnew System::EventHandler(this, &AdminInterface::��������������ToolStripMenuItem_Click);
			// 
			// �������������������ToolStripMenuItem
			// 
			this->�������������������ToolStripMenuItem->Name = L"�������������������ToolStripMenuItem";
			this->�������������������ToolStripMenuItem->Size = System::Drawing::Size(182, 24);
			this->�������������������ToolStripMenuItem->Text = L"������������� ������";
			// 
			// ��������������ToolStripMenuItem
			// 
			this->��������������ToolStripMenuItem->Name = L"��������������ToolStripMenuItem";
			this->��������������ToolStripMenuItem->Size = System::Drawing::Size(147, 24);
			this->��������������ToolStripMenuItem->Text = L"�������� ������";
			this->��������������ToolStripMenuItem->Click += gcnew System::EventHandler(this, &AdminInterface::��������������ToolStripMenuItem_Click);
			// 
			// dataGridViewAdmin
			// 
			this->dataGridViewAdmin->AllowUserToAddRows = false;
			this->dataGridViewAdmin->AllowUserToDeleteRows = false;
			this->dataGridViewAdmin->AutoSizeColumnsMode = System::Windows::Forms::DataGridViewAutoSizeColumnsMode::Fill;
			this->dataGridViewAdmin->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridViewAdmin->Location = System::Drawing::Point(6, 21);
			this->dataGridViewAdmin->Name = L"dataGridViewAdmin";
			this->dataGridViewAdmin->ReadOnly = true;
			this->dataGridViewAdmin->RowHeadersWidth = 51;
			this->dataGridViewAdmin->RowTemplate->Height = 24;
			this->dataGridViewAdmin->SelectionMode = System::Windows::Forms::DataGridViewSelectionMode::FullRowSelect;
			this->dataGridViewAdmin->Size = System::Drawing::Size(1308, 613);
			this->dataGridViewAdmin->TabIndex = 1;
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->dataGridViewAdmin);
			this->groupBox1->Location = System::Drawing::Point(12, 31);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(1320, 642);
			this->groupBox1->TabIndex = 2;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"������";
			// 
			// groupBox2
			// 
			this->groupBox2->Controls->Add(this->groupBox3);
			this->groupBox2->Controls->Add(this->label1);
			this->groupBox2->Controls->Add(this->buttonAddLine);
			this->groupBox2->Location = System::Drawing::Point(1338, 31);
			this->groupBox2->Name = L"groupBox2";
			this->groupBox2->Size = System::Drawing::Size(232, 250);
			this->groupBox2->TabIndex = 3;
			this->groupBox2->TabStop = false;
			this->groupBox2->Text = L"������ � �������";
			// 
			// buttonEditLine
			// 
			this->buttonEditLine->BackColor = System::Drawing::SystemColors::Control;
			this->buttonEditLine->FlatAppearance->MouseOverBackColor = System::Drawing::Color::PapayaWhip;
			this->buttonEditLine->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->buttonEditLine->Font = (gcnew System::Drawing::Font(L"Tempus Sans ITC", 9));
			this->buttonEditLine->Location = System::Drawing::Point(15, 44);
			this->buttonEditLine->Name = L"buttonEditLine";
			this->buttonEditLine->Size = System::Drawing::Size(187, 39);
			this->buttonEditLine->TabIndex = 1;
			this->buttonEditLine->Text = L"�������������";
			this->buttonEditLine->UseVisualStyleBackColor = false;
			this->buttonEditLine->Click += gcnew System::EventHandler(this, &AdminInterface::buttonEditLine_Click);
			// 
			// groupBox3
			// 
			this->groupBox3->Controls->Add(this->buttonDeleteLine);
			this->groupBox3->Controls->Add(this->buttonEditLine);
			this->groupBox3->Location = System::Drawing::Point(6, 108);
			this->groupBox3->Name = L"groupBox3";
			this->groupBox3->Size = System::Drawing::Size(220, 136);
			this->groupBox3->TabIndex = 3;
			this->groupBox3->TabStop = false;
			this->groupBox3->Text = L"������ � ���������� �������";
			// 
			// buttonDeleteLine
			// 
			this->buttonDeleteLine->BackColor = System::Drawing::SystemColors::Control;
			this->buttonDeleteLine->FlatAppearance->MouseOverBackColor = System::Drawing::Color::PapayaWhip;
			this->buttonDeleteLine->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->buttonDeleteLine->Font = (gcnew System::Drawing::Font(L"Tempus Sans ITC", 9));
			this->buttonDeleteLine->Location = System::Drawing::Point(15, 89);
			this->buttonDeleteLine->Name = L"buttonDeleteLine";
			this->buttonDeleteLine->Size = System::Drawing::Size(187, 41);
			this->buttonDeleteLine->TabIndex = 2;
			this->buttonDeleteLine->Text = L"�������";
			this->buttonDeleteLine->UseVisualStyleBackColor = false;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(36, 78);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(0, 17);
			this->label1->TabIndex = 2;
			// 
			// buttonAddLine
			// 
			this->buttonAddLine->BackColor = System::Drawing::SystemColors::Control;
			this->buttonAddLine->FlatAppearance->MouseOverBackColor = System::Drawing::Color::PapayaWhip;
			this->buttonAddLine->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->buttonAddLine->Font = (gcnew System::Drawing::Font(L"Tempus Sans ITC", 9));
			this->buttonAddLine->Location = System::Drawing::Point(21, 40);
			this->buttonAddLine->Name = L"buttonAddLine";
			this->buttonAddLine->Size = System::Drawing::Size(187, 42);
			this->buttonAddLine->TabIndex = 0;
			this->buttonAddLine->Text = L"�������� ������";
			this->buttonAddLine->UseVisualStyleBackColor = false;
			this->buttonAddLine->Click += gcnew System::EventHandler(this, &AdminInterface::buttonAddLine_Click);
			// 
			// AdminInterface
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::SkyBlue;
			this->ClientSize = System::Drawing::Size(1582, 677);
			this->Controls->Add(this->groupBox2);
			this->Controls->Add(this->groupBox1);
			this->Controls->Add(this->menuStrip1);
			this->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->MainMenuStrip = this->menuStrip1;
			this->MaximizeBox = false;
			this->MaximumSize = System::Drawing::Size(1600, 724);
			this->MinimumSize = System::Drawing::Size(1600, 724);
			this->Name = L"AdminInterface";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"AdminInterface";
			this->Load += gcnew System::EventHandler(this, &AdminInterface::AdminInterface_Load);
			this->Shown += gcnew System::EventHandler(this, &AdminInterface::AdminInterface_Shown);
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridViewAdmin))->EndInit();
			this->groupBox1->ResumeLayout(false);
			this->groupBox2->ResumeLayout(false);
			this->groupBox2->PerformLayout();
			this->groupBox3->ResumeLayout(false);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void ����������������ToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void ��������������ToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e);
	private: void Header();//��������� �������
	//private: void Show();
	private: void Show_meds(int _countData);//���������� ������ � ���� ����
	private: void Save_data_grid_in_file(char* fileName);//��������� ������ �� ���� ���� � ����
private: System::Void AdminInterface_Shown(System::Object^ sender, System::EventArgs^ e);
private: System::Void ��������������ToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void buttonAddLine_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void buttonEditLine_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void buttonSaveData_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void AdminInterface_Load(System::Object^ sender, System::EventArgs^ e);
private: System::Void buttonDownload_Click(System::Object^ sender, System::EventArgs^ e);
};
}
