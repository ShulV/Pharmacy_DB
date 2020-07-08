#pragma once

namespace PharmacyDB {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для AddForm
	/// </summary>
	public ref class AddForm : public System::Windows::Forms::Form
	{
	public:
		AddForm(void)
		{
			InitializeComponent();
			//
			//TODO: добавьте код конструктора
			//
		}

	protected:
		/// <summary>
		/// Освободить все используемые ресурсы.
		/// </summary>
		~AddForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::MaskedTextBox^ maskedTextBoxName;
	protected:
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::MaskedTextBox^ maskedTextBoxDate;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::MaskedTextBox^ maskedTextBoxCountry;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::MaskedTextBox^ maskedTextBoxNumber1;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::MaskedTextBox^ maskedTextBoxPrice;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::MaskedTextBox^ maskedTextBoxNumber2;
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::MaskedTextBox^ maskedTextBoxNumber3;
	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::MaskedTextBox^ maskedTextBoxNumber4;
	private: System::Windows::Forms::Label^ label11;
	private: System::Windows::Forms::MaskedTextBox^ maskedTextBoxNumber5;
	private: System::Windows::Forms::Button^ buttonAdd;

	protected:

	private:
		/// <summary>
		/// Обязательная переменная конструктора.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Требуемый метод для поддержки конструктора — не изменяйте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			this->maskedTextBoxName = (gcnew System::Windows::Forms::MaskedTextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->maskedTextBoxDate = (gcnew System::Windows::Forms::MaskedTextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->maskedTextBoxCountry = (gcnew System::Windows::Forms::MaskedTextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->maskedTextBoxNumber1 = (gcnew System::Windows::Forms::MaskedTextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->maskedTextBoxPrice = (gcnew System::Windows::Forms::MaskedTextBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->maskedTextBoxNumber2 = (gcnew System::Windows::Forms::MaskedTextBox());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->maskedTextBoxNumber3 = (gcnew System::Windows::Forms::MaskedTextBox());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->maskedTextBoxNumber4 = (gcnew System::Windows::Forms::MaskedTextBox());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->maskedTextBoxNumber5 = (gcnew System::Windows::Forms::MaskedTextBox());
			this->buttonAdd = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// maskedTextBoxName
			// 
			this->maskedTextBoxName->Location = System::Drawing::Point(28, 71);
			this->maskedTextBoxName->Name = L"maskedTextBoxName";
			this->maskedTextBoxName->Size = System::Drawing::Size(200, 22);
			this->maskedTextBoxName->TabIndex = 1;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(25, 51);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(76, 17);
			this->label2->TabIndex = 2;
			this->label2->Text = L"Название:";
			// 
			// maskedTextBoxDate
			// 
			this->maskedTextBoxDate->BeepOnError = true;
			this->maskedTextBoxDate->Location = System::Drawing::Point(28, 116);
			this->maskedTextBoxDate->Mask = L"0000/00/00";
			this->maskedTextBoxDate->Name = L"maskedTextBoxDate";
			this->maskedTextBoxDate->Size = System::Drawing::Size(200, 22);
			this->maskedTextBoxDate->TabIndex = 3;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(25, 96);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(255, 17);
			this->label1->TabIndex = 4;
			this->label1->Text = L"Дата производства (год.месяц.день):";
			// 
			// maskedTextBoxCountry
			// 
			this->maskedTextBoxCountry->Location = System::Drawing::Point(28, 161);
			this->maskedTextBoxCountry->Name = L"maskedTextBoxCountry";
			this->maskedTextBoxCountry->Size = System::Drawing::Size(200, 22);
			this->maskedTextBoxCountry->TabIndex = 5;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(25, 141);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(165, 17);
			this->label3->TabIndex = 6;
			this->label3->Text = L"Страна-производитель:";
			// 
			// maskedTextBoxNumber1
			// 
			this->maskedTextBoxNumber1->Location = System::Drawing::Point(47, 206);
			this->maskedTextBoxNumber1->Name = L"maskedTextBoxNumber1";
			this->maskedTextBoxNumber1->Size = System::Drawing::Size(33, 22);
			this->maskedTextBoxNumber1->TabIndex = 7;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(25, 186);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(105, 17);
			this->label4->TabIndex = 8;
			this->label4->Text = L"Номера аптек:";
			// 
			// maskedTextBoxPrice
			// 
			this->maskedTextBoxPrice->Location = System::Drawing::Point(28, 251);
			this->maskedTextBoxPrice->Name = L"maskedTextBoxPrice";
			this->maskedTextBoxPrice->Size = System::Drawing::Size(200, 22);
			this->maskedTextBoxPrice->TabIndex = 9;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(25, 231);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(47, 17);
			this->label5->TabIndex = 10;
			this->label5->Text = L"Цена:";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label7->Location = System::Drawing::Point(24, 208);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(18, 20);
			this->label7->TabIndex = 13;
			this->label7->Text = L"1";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label8->Location = System::Drawing::Point(86, 208);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(18, 20);
			this->label8->TabIndex = 15;
			this->label8->Text = L"2";
			// 
			// maskedTextBoxNumber2
			// 
			this->maskedTextBoxNumber2->Location = System::Drawing::Point(109, 206);
			this->maskedTextBoxNumber2->Name = L"maskedTextBoxNumber2";
			this->maskedTextBoxNumber2->Size = System::Drawing::Size(33, 22);
			this->maskedTextBoxNumber2->TabIndex = 14;
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label9->Location = System::Drawing::Point(147, 208);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(18, 20);
			this->label9->TabIndex = 17;
			this->label9->Text = L"3";
			// 
			// maskedTextBoxNumber3
			// 
			this->maskedTextBoxNumber3->Location = System::Drawing::Point(170, 206);
			this->maskedTextBoxNumber3->Name = L"maskedTextBoxNumber3";
			this->maskedTextBoxNumber3->Size = System::Drawing::Size(33, 22);
			this->maskedTextBoxNumber3->TabIndex = 16;
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label10->Location = System::Drawing::Point(210, 208);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(18, 20);
			this->label10->TabIndex = 19;
			this->label10->Text = L"4";
			// 
			// maskedTextBoxNumber4
			// 
			this->maskedTextBoxNumber4->Location = System::Drawing::Point(233, 206);
			this->maskedTextBoxNumber4->Name = L"maskedTextBoxNumber4";
			this->maskedTextBoxNumber4->Size = System::Drawing::Size(33, 22);
			this->maskedTextBoxNumber4->TabIndex = 18;
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label11->Location = System::Drawing::Point(272, 208);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(18, 20);
			this->label11->TabIndex = 21;
			this->label11->Text = L"5";
			// 
			// maskedTextBoxNumber5
			// 
			this->maskedTextBoxNumber5->Location = System::Drawing::Point(295, 206);
			this->maskedTextBoxNumber5->Name = L"maskedTextBoxNumber5";
			this->maskedTextBoxNumber5->Size = System::Drawing::Size(33, 22);
			this->maskedTextBoxNumber5->TabIndex = 20;
			// 
			// buttonAdd
			// 
			this->buttonAdd->Location = System::Drawing::Point(316, 309);
			this->buttonAdd->Name = L"buttonAdd";
			this->buttonAdd->Size = System::Drawing::Size(153, 28);
			this->buttonAdd->TabIndex = 22;
			this->buttonAdd->Text = L"Добавить запись";
			this->buttonAdd->UseVisualStyleBackColor = true;
			this->buttonAdd->Click += gcnew System::EventHandler(this, &AddForm::buttonAdd_Click);
			// 
			// AddForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(505, 363);
			this->Controls->Add(this->buttonAdd);
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
			this->Name = L"AddForm";
			this->Text = L"AddForm";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void buttonAdd_Click(System::Object^ sender, System::EventArgs^ e);
};
}
