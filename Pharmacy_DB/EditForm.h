#pragma once

namespace PharmacyDB {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// ������ ��� EditForm
	/// </summary>
	public ref class EditForm : public System::Windows::Forms::Form
	{
	public:
		EditForm(void)
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
		~EditForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ buttonEdit;
	protected:

	protected:

	protected:
	private: System::Windows::Forms::Label^ label11;
	private: System::Windows::Forms::MaskedTextBox^ maskedTextBoxNumber5;
	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::MaskedTextBox^ maskedTextBoxNumber4;
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::MaskedTextBox^ maskedTextBoxNumber3;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::MaskedTextBox^ maskedTextBoxNumber2;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::MaskedTextBox^ maskedTextBoxPrice;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::MaskedTextBox^ maskedTextBoxNumber1;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::MaskedTextBox^ maskedTextBoxCountry;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::MaskedTextBox^ maskedTextBoxDate;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::MaskedTextBox^ maskedTextBoxName;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::MenuStrip^ menuStrip1;
	private: System::Windows::Forms::ToolStripMenuItem^ �����ToolStripMenuItem;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label_Id;

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
			this->buttonEdit = (gcnew System::Windows::Forms::Button());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->maskedTextBoxNumber5 = (gcnew System::Windows::Forms::MaskedTextBox());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->maskedTextBoxNumber4 = (gcnew System::Windows::Forms::MaskedTextBox());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->maskedTextBoxNumber3 = (gcnew System::Windows::Forms::MaskedTextBox());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->maskedTextBoxNumber2 = (gcnew System::Windows::Forms::MaskedTextBox());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->maskedTextBoxPrice = (gcnew System::Windows::Forms::MaskedTextBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->maskedTextBoxNumber1 = (gcnew System::Windows::Forms::MaskedTextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->maskedTextBoxCountry = (gcnew System::Windows::Forms::MaskedTextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->maskedTextBoxDate = (gcnew System::Windows::Forms::MaskedTextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->maskedTextBoxName = (gcnew System::Windows::Forms::MaskedTextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->�����ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label_Id = (gcnew System::Windows::Forms::Label());
			this->menuStrip1->SuspendLayout();
			this->SuspendLayout();
			// 
			// buttonEdit
			// 
			this->buttonEdit->BackColor = System::Drawing::SystemColors::Control;
			this->buttonEdit->FlatAppearance->MouseOverBackColor = System::Drawing::Color::PapayaWhip;
			this->buttonEdit->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->buttonEdit->Font = (gcnew System::Drawing::Font(L"Tempus Sans ITC", 9));
			this->buttonEdit->Location = System::Drawing::Point(222, 232);
			this->buttonEdit->Margin = System::Windows::Forms::Padding(2);
			this->buttonEdit->Name = L"buttonEdit";
			this->buttonEdit->Size = System::Drawing::Size(147, 41);
			this->buttonEdit->TabIndex = 42;
			this->buttonEdit->Text = L"������������� ������";
			this->buttonEdit->UseVisualStyleBackColor = false;
			this->buttonEdit->Click += gcnew System::EventHandler(this, &EditForm::buttonEdit_Click);
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label11->Location = System::Drawing::Point(205, 168);
			this->label11->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(16, 17);
			this->label11->TabIndex = 41;
			this->label11->Text = L"5";
			// 
			// maskedTextBoxNumber5
			// 
			this->maskedTextBoxNumber5->Location = System::Drawing::Point(222, 167);
			this->maskedTextBoxNumber5->Margin = System::Windows::Forms::Padding(2);
			this->maskedTextBoxNumber5->Name = L"maskedTextBoxNumber5";
			this->maskedTextBoxNumber5->Size = System::Drawing::Size(26, 20);
			this->maskedTextBoxNumber5->TabIndex = 40;
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label10->Location = System::Drawing::Point(158, 168);
			this->label10->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(16, 17);
			this->label10->TabIndex = 39;
			this->label10->Text = L"4";
			// 
			// maskedTextBoxNumber4
			// 
			this->maskedTextBoxNumber4->Location = System::Drawing::Point(176, 167);
			this->maskedTextBoxNumber4->Margin = System::Windows::Forms::Padding(2);
			this->maskedTextBoxNumber4->Name = L"maskedTextBoxNumber4";
			this->maskedTextBoxNumber4->Size = System::Drawing::Size(26, 20);
			this->maskedTextBoxNumber4->TabIndex = 38;
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label9->Location = System::Drawing::Point(111, 168);
			this->label9->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(16, 17);
			this->label9->TabIndex = 37;
			this->label9->Text = L"3";
			// 
			// maskedTextBoxNumber3
			// 
			this->maskedTextBoxNumber3->Location = System::Drawing::Point(128, 167);
			this->maskedTextBoxNumber3->Margin = System::Windows::Forms::Padding(2);
			this->maskedTextBoxNumber3->Name = L"maskedTextBoxNumber3";
			this->maskedTextBoxNumber3->Size = System::Drawing::Size(26, 20);
			this->maskedTextBoxNumber3->TabIndex = 36;
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label8->Location = System::Drawing::Point(65, 168);
			this->label8->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(16, 17);
			this->label8->TabIndex = 35;
			this->label8->Text = L"2";
			// 
			// maskedTextBoxNumber2
			// 
			this->maskedTextBoxNumber2->Location = System::Drawing::Point(82, 167);
			this->maskedTextBoxNumber2->Margin = System::Windows::Forms::Padding(2);
			this->maskedTextBoxNumber2->Name = L"maskedTextBoxNumber2";
			this->maskedTextBoxNumber2->Size = System::Drawing::Size(26, 20);
			this->maskedTextBoxNumber2->TabIndex = 34;
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label7->Location = System::Drawing::Point(19, 168);
			this->label7->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(16, 17);
			this->label7->TabIndex = 33;
			this->label7->Text = L"1";
			// 
			// maskedTextBoxPrice
			// 
			this->maskedTextBoxPrice->Location = System::Drawing::Point(22, 203);
			this->maskedTextBoxPrice->Margin = System::Windows::Forms::Padding(2);
			this->maskedTextBoxPrice->Name = L"maskedTextBoxPrice";
			this->maskedTextBoxPrice->Size = System::Drawing::Size(151, 20);
			this->maskedTextBoxPrice->TabIndex = 31;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(20, 187);
			this->label5->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(36, 13);
			this->label5->TabIndex = 32;
			this->label5->Text = L"����:";
			// 
			// maskedTextBoxNumber1
			// 
			this->maskedTextBoxNumber1->Location = System::Drawing::Point(36, 167);
			this->maskedTextBoxNumber1->Margin = System::Windows::Forms::Padding(2);
			this->maskedTextBoxNumber1->Name = L"maskedTextBoxNumber1";
			this->maskedTextBoxNumber1->Size = System::Drawing::Size(26, 20);
			this->maskedTextBoxNumber1->TabIndex = 29;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(20, 150);
			this->label4->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(82, 13);
			this->label4->TabIndex = 30;
			this->label4->Text = L"������ �����:";
			// 
			// maskedTextBoxCountry
			// 
			this->maskedTextBoxCountry->Location = System::Drawing::Point(22, 93);
			this->maskedTextBoxCountry->Margin = System::Windows::Forms::Padding(2);
			this->maskedTextBoxCountry->Name = L"maskedTextBoxCountry";
			this->maskedTextBoxCountry->Size = System::Drawing::Size(151, 20);
			this->maskedTextBoxCountry->TabIndex = 27;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(20, 77);
			this->label3->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(126, 13);
			this->label3->TabIndex = 28;
			this->label3->Text = L"������-�������������:";
			// 
			// maskedTextBoxDate
			// 
			this->maskedTextBoxDate->BeepOnError = true;
			this->maskedTextBoxDate->Location = System::Drawing::Point(22, 130);
			this->maskedTextBoxDate->Margin = System::Windows::Forms::Padding(2);
			this->maskedTextBoxDate->Mask = L"0000/00/00";
			this->maskedTextBoxDate->Name = L"maskedTextBoxDate";
			this->maskedTextBoxDate->Size = System::Drawing::Size(151, 20);
			this->maskedTextBoxDate->TabIndex = 25;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(20, 114);
			this->label1->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(198, 13);
			this->label1->TabIndex = 26;
			this->label1->Text = L"���� ������������ (���.�����.����):";
			// 
			// maskedTextBoxName
			// 
			this->maskedTextBoxName->Location = System::Drawing::Point(22, 57);
			this->maskedTextBoxName->Margin = System::Windows::Forms::Padding(2);
			this->maskedTextBoxName->Name = L"maskedTextBoxName";
			this->maskedTextBoxName->Size = System::Drawing::Size(151, 20);
			this->maskedTextBoxName->TabIndex = 23;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(20, 41);
			this->label2->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(60, 13);
			this->label2->TabIndex = 24;
			this->label2->Text = L"��������:";
			// 
			// menuStrip1
			// 
			this->menuStrip1->ImageScalingSize = System::Drawing::Size(20, 20);
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->�����ToolStripMenuItem });
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Padding = System::Windows::Forms::Padding(4, 2, 0, 2);
			this->menuStrip1->Size = System::Drawing::Size(380, 24);
			this->menuStrip1->TabIndex = 43;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// �����ToolStripMenuItem
			// 
			this->�����ToolStripMenuItem->Name = L"�����ToolStripMenuItem";
			this->�����ToolStripMenuItem->Size = System::Drawing::Size(51, 20);
			this->�����ToolStripMenuItem->Text = L"�����";
			this->�����ToolStripMenuItem->Click += gcnew System::EventHandler(this, &EditForm::�����ToolStripMenuItem_Click);
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(315, 210);
			this->label6->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(18, 13);
			this->label6->TabIndex = 44;
			this->label6->Text = L"id:";
			// 
			// label_Id
			// 
			this->label_Id->AutoSize = true;
			this->label_Id->Location = System::Drawing::Point(352, 210);
			this->label_Id->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label_Id->Name = L"label_Id";
			this->label_Id->Size = System::Drawing::Size(0, 13);
			this->label_Id->TabIndex = 45;
			// 
			// EditForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::SkyBlue;
			this->ClientSize = System::Drawing::Size(380, 303);
			this->Controls->Add(this->label_Id);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->buttonEdit);
			this->Controls->Add(this->label11);
			this->Controls->Add(this->maskedTextBoxNumber5);
			this->Controls->Add(this->label10);
			this->Controls->Add(this->maskedTextBoxNumber4);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->maskedTextBoxNumber3);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->maskedTextBoxNumber2);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->maskedTextBoxPrice);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->maskedTextBoxNumber1);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->maskedTextBoxCountry);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->maskedTextBoxDate);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->maskedTextBoxName);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->menuStrip1);
			this->MainMenuStrip = this->menuStrip1;
			this->Margin = System::Windows::Forms::Padding(2);
			this->MaximizeBox = false;
			this->MaximumSize = System::Drawing::Size(396, 342);
			this->MinimumSize = System::Drawing::Size(396, 342);
			this->Name = L"EditForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"���� ��������������";
			this->Load += gcnew System::EventHandler(this, &EditForm::EditForm_Load);
			this->Shown += gcnew System::EventHandler(this, &EditForm::EditForm_Shown);
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void buttonEdit_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void �����ToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void EditForm_Shown(System::Object^ sender, System::EventArgs^ e);
private: System::Void EditForm_Load(System::Object^ sender, System::EventArgs^ e) {
}
};
}
