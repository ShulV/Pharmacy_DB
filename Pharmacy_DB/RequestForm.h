#pragma once

namespace PharmacyDB {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// ������ ��� RequestForm
	/// </summary>
	public ref class RequestForm : public System::Windows::Forms::Form
	{
	public:
		RequestForm(void)
		{
			InitializeComponent();
			//
			//TODO: �������� ��� ������������
			//
		}

	protected:
		/// <summary>
		/// ���������� ��� ������������ �������.
		/// </summary>
		~RequestForm()
		{
			if (components)
			{
				delete components;
			}
		}
	public: System::Windows::Forms::GroupBox^ groupBox1;
	public: System::Windows::Forms::DataGridView^ dataGridViewRequest;
	protected:

	private: System::Windows::Forms::MenuStrip^ menuStrip1;
	public:
	private: System::Windows::Forms::ToolStripMenuItem^ �����ToolStripMenuItem;


	private: System::Windows::Forms::MaskedTextBox^ maskedTextBoxPrice;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::MaskedTextBox^ maskedTextBoxNumber;

	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::MaskedTextBox^ maskedTextBoxCountry;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::MaskedTextBox^ maskedTextBoxDate;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::MaskedTextBox^ maskedTextBoxName;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::GroupBox^ groupBox2;
	private: System::Windows::Forms::RadioButton^ radioButtonPriceMore;
	private: System::Windows::Forms::RadioButton^ radioButtonPriceLess;
	private: System::Windows::Forms::Button^ buttonShowDataRequest;
	private: System::Windows::Forms::ToolStripMenuItem^ �����ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ �������ToolStripMenuItem;

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
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->dataGridViewRequest = (gcnew System::Windows::Forms::DataGridView());
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->�����ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->�����ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->�������ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->maskedTextBoxPrice = (gcnew System::Windows::Forms::MaskedTextBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->maskedTextBoxNumber = (gcnew System::Windows::Forms::MaskedTextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->maskedTextBoxCountry = (gcnew System::Windows::Forms::MaskedTextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->maskedTextBoxDate = (gcnew System::Windows::Forms::MaskedTextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->maskedTextBoxName = (gcnew System::Windows::Forms::MaskedTextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->groupBox2 = (gcnew System::Windows::Forms::GroupBox());
			this->buttonShowDataRequest = (gcnew System::Windows::Forms::Button());
			this->radioButtonPriceMore = (gcnew System::Windows::Forms::RadioButton());
			this->radioButtonPriceLess = (gcnew System::Windows::Forms::RadioButton());
			this->groupBox1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridViewRequest))->BeginInit();
			this->menuStrip1->SuspendLayout();
			this->groupBox2->SuspendLayout();
			this->SuspendLayout();
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->dataGridViewRequest);
			this->groupBox1->Location = System::Drawing::Point(9, 28);
			this->groupBox1->Margin = System::Windows::Forms::Padding(2);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Padding = System::Windows::Forms::Padding(2);
			this->groupBox1->Size = System::Drawing::Size(929, 522);
			this->groupBox1->TabIndex = 3;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"������";
			// 
			// dataGridViewRequest
			// 
			this->dataGridViewRequest->AllowUserToAddRows = false;
			this->dataGridViewRequest->AllowUserToDeleteRows = false;
			this->dataGridViewRequest->AutoSizeColumnsMode = System::Windows::Forms::DataGridViewAutoSizeColumnsMode::Fill;
			this->dataGridViewRequest->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridViewRequest->Location = System::Drawing::Point(4, 17);
			this->dataGridViewRequest->Margin = System::Windows::Forms::Padding(2);
			this->dataGridViewRequest->Name = L"dataGridViewRequest";
			this->dataGridViewRequest->ReadOnly = true;
			this->dataGridViewRequest->RowHeadersWidth = 51;
			this->dataGridViewRequest->RowTemplate->Height = 24;
			this->dataGridViewRequest->SelectionMode = System::Windows::Forms::DataGridViewSelectionMode::FullRowSelect;
			this->dataGridViewRequest->Size = System::Drawing::Size(921, 498);
			this->dataGridViewRequest->TabIndex = 1;
			// 
			// menuStrip1
			// 
			this->menuStrip1->ImageScalingSize = System::Drawing::Size(20, 20);
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {
				this->�����ToolStripMenuItem,
					this->�����ToolStripMenuItem, this->�������ToolStripMenuItem
			});
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Padding = System::Windows::Forms::Padding(4, 2, 0, 2);
			this->menuStrip1->Size = System::Drawing::Size(1188, 24);
			this->menuStrip1->TabIndex = 4;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// �����ToolStripMenuItem
			// 
			this->�����ToolStripMenuItem->Name = L"�����ToolStripMenuItem";
			this->�����ToolStripMenuItem->Size = System::Drawing::Size(137, 20);
			this->�����ToolStripMenuItem->Text = L"����� �� ���������";
			this->�����ToolStripMenuItem->Click += gcnew System::EventHandler(this, &RequestForm::�����ToolStripMenuItem_Click);
			// 
			// �����ToolStripMenuItem
			// 
			this->�����ToolStripMenuItem->Name = L"�����ToolStripMenuItem";
			this->�����ToolStripMenuItem->Size = System::Drawing::Size(108, 20);
			this->�����ToolStripMenuItem->Text = L"� ������� ����";
			this->�����ToolStripMenuItem->Click += gcnew System::EventHandler(this, &RequestForm::�����ToolStripMenuItem_Click);
			// 
			// �������ToolStripMenuItem
			// 
			this->�������ToolStripMenuItem->Name = L"�������ToolStripMenuItem";
			this->�������ToolStripMenuItem->Size = System::Drawing::Size(65, 20);
			this->�������ToolStripMenuItem->Text = L"�������";
			this->�������ToolStripMenuItem->Click += gcnew System::EventHandler(this, &RequestForm::�������ToolStripMenuItem_Click);
			// 
			// maskedTextBoxPrice
			// 
			this->maskedTextBoxPrice->Location = System::Drawing::Point(4, 183);
			this->maskedTextBoxPrice->Margin = System::Windows::Forms::Padding(2);
			this->maskedTextBoxPrice->Name = L"maskedTextBoxPrice";
			this->maskedTextBoxPrice->Size = System::Drawing::Size(151, 20);
			this->maskedTextBoxPrice->TabIndex = 50;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(2, 167);
			this->label5->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(36, 13);
			this->label5->TabIndex = 51;
			this->label5->Text = L"����:";
			// 
			// maskedTextBoxNumber
			// 
			this->maskedTextBoxNumber->Location = System::Drawing::Point(4, 146);
			this->maskedTextBoxNumber->Margin = System::Windows::Forms::Padding(2);
			this->maskedTextBoxNumber->Name = L"maskedTextBoxNumber";
			this->maskedTextBoxNumber->Size = System::Drawing::Size(34, 20);
			this->maskedTextBoxNumber->TabIndex = 48;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(2, 130);
			this->label4->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(82, 13);
			this->label4->TabIndex = 49;
			this->label4->Text = L"����� ������:";
			// 
			// maskedTextBoxCountry
			// 
			this->maskedTextBoxCountry->Location = System::Drawing::Point(4, 73);
			this->maskedTextBoxCountry->Margin = System::Windows::Forms::Padding(2);
			this->maskedTextBoxCountry->Name = L"maskedTextBoxCountry";
			this->maskedTextBoxCountry->Size = System::Drawing::Size(151, 20);
			this->maskedTextBoxCountry->TabIndex = 46;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(2, 57);
			this->label3->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(126, 13);
			this->label3->TabIndex = 47;
			this->label3->Text = L"������-�������������:";
			// 
			// maskedTextBoxDate
			// 
			this->maskedTextBoxDate->BeepOnError = true;
			this->maskedTextBoxDate->Location = System::Drawing::Point(4, 110);
			this->maskedTextBoxDate->Margin = System::Windows::Forms::Padding(2);
			this->maskedTextBoxDate->Mask = L"0000/00/00";
			this->maskedTextBoxDate->Name = L"maskedTextBoxDate";
			this->maskedTextBoxDate->Size = System::Drawing::Size(151, 20);
			this->maskedTextBoxDate->TabIndex = 44;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(2, 93);
			this->label1->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(173, 13);
			this->label1->TabIndex = 45;
			this->label1->Text = L"���� ������������ (����.��.��):";
			// 
			// maskedTextBoxName
			// 
			this->maskedTextBoxName->Location = System::Drawing::Point(4, 37);
			this->maskedTextBoxName->Margin = System::Windows::Forms::Padding(2);
			this->maskedTextBoxName->Name = L"maskedTextBoxName";
			this->maskedTextBoxName->Size = System::Drawing::Size(151, 20);
			this->maskedTextBoxName->TabIndex = 42;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(2, 20);
			this->label2->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(60, 13);
			this->label2->TabIndex = 43;
			this->label2->Text = L"��������:";
			// 
			// groupBox2
			// 
			this->groupBox2->Controls->Add(this->buttonShowDataRequest);
			this->groupBox2->Controls->Add(this->radioButtonPriceMore);
			this->groupBox2->Controls->Add(this->radioButtonPriceLess);
			this->groupBox2->Controls->Add(this->maskedTextBoxName);
			this->groupBox2->Controls->Add(this->label5);
			this->groupBox2->Controls->Add(this->maskedTextBoxNumber);
			this->groupBox2->Controls->Add(this->label2);
			this->groupBox2->Controls->Add(this->maskedTextBoxPrice);
			this->groupBox2->Controls->Add(this->label4);
			this->groupBox2->Controls->Add(this->label1);
			this->groupBox2->Controls->Add(this->maskedTextBoxCountry);
			this->groupBox2->Controls->Add(this->maskedTextBoxDate);
			this->groupBox2->Controls->Add(this->label3);
			this->groupBox2->Location = System::Drawing::Point(950, 28);
			this->groupBox2->Margin = System::Windows::Forms::Padding(2);
			this->groupBox2->Name = L"groupBox2";
			this->groupBox2->Padding = System::Windows::Forms::Padding(2);
			this->groupBox2->Size = System::Drawing::Size(227, 345);
			this->groupBox2->TabIndex = 52;
			this->groupBox2->TabStop = false;
			this->groupBox2->Text = L"������� ������";
			// 
			// buttonShowDataRequest
			// 
			this->buttonShowDataRequest->BackColor = System::Drawing::SystemColors::Control;
			this->buttonShowDataRequest->FlatAppearance->MouseOverBackColor = System::Drawing::Color::PapayaWhip;
			this->buttonShowDataRequest->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->buttonShowDataRequest->Font = (gcnew System::Drawing::Font(L"Tempus Sans ITC", 9));
			this->buttonShowDataRequest->Location = System::Drawing::Point(70, 295);
			this->buttonShowDataRequest->Margin = System::Windows::Forms::Padding(2);
			this->buttonShowDataRequest->Name = L"buttonShowDataRequest";
			this->buttonShowDataRequest->Size = System::Drawing::Size(140, 33);
			this->buttonShowDataRequest->TabIndex = 54;
			this->buttonShowDataRequest->Text = L"�������� ������";
			this->buttonShowDataRequest->UseVisualStyleBackColor = false;
			this->buttonShowDataRequest->Click += gcnew System::EventHandler(this, &RequestForm::buttonShowDataRequest_Click);
			// 
			// radioButtonPriceMore
			// 
			this->radioButtonPriceMore->AutoSize = true;
			this->radioButtonPriceMore->Location = System::Drawing::Point(5, 236);
			this->radioButtonPriceMore->Name = L"radioButtonPriceMore";
			this->radioButtonPriceMore->Size = System::Drawing::Size(219, 17);
			this->radioButtonPriceMore->TabIndex = 53;
			this->radioButtonPriceMore->TabStop = true;
			this->radioButtonPriceMore->Text = L"���������� ���� ������ ���������";
			this->radioButtonPriceMore->UseVisualStyleBackColor = true;
			// 
			// radioButtonPriceLess
			// 
			this->radioButtonPriceLess->AutoSize = true;
			this->radioButtonPriceLess->Checked = true;
			this->radioButtonPriceLess->Location = System::Drawing::Point(5, 213);
			this->radioButtonPriceLess->Name = L"radioButtonPriceLess";
			this->radioButtonPriceLess->Size = System::Drawing::Size(220, 17);
			this->radioButtonPriceLess->TabIndex = 52;
			this->radioButtonPriceLess->TabStop = true;
			this->radioButtonPriceLess->Text = L"���������� ���� ������ ���������";
			this->radioButtonPriceLess->UseVisualStyleBackColor = true;
			// 
			// RequestForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::SkyBlue;
			this->ClientSize = System::Drawing::Size(1188, 557);
			this->Controls->Add(this->groupBox2);
			this->Controls->Add(this->menuStrip1);
			this->Controls->Add(this->groupBox1);
			this->Margin = System::Windows::Forms::Padding(2);
			this->MaximizeBox = false;
			this->MaximumSize = System::Drawing::Size(1204, 596);
			this->MinimumSize = System::Drawing::Size(1204, 596);
			this->Name = L"RequestForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"�����: ������������";
			this->Load += gcnew System::EventHandler(this, &RequestForm::RequestForm_Load);
			this->Shown += gcnew System::EventHandler(this, &RequestForm::RequestForm_Shown);
			this->groupBox1->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridViewRequest))->EndInit();
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			this->groupBox2->ResumeLayout(false);
			this->groupBox2->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: void Header();//��������� �������
	private: void Show_meds(int _countData);//���������� ������ � ���� ����
	private: System::Void RequestForm_Shown(System::Object^ sender, System::EventArgs^ e);
private: System::Void buttonShowDataRequest_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void RequestForm_Load(System::Object^ sender, System::EventArgs^ e);
private: System::Void �����ToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void �����ToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void �������ToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e);
};
}
