#pragma once

namespace PharmacyDB {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// —водка дл€ AdminInterface
	/// </summary>
	public ref class AdminInterface : public System::Windows::Forms::Form
	{
	public:
		AdminInterface(void)
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
		~AdminInterface()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::MenuStrip^ menuStrip1;
	private: System::Windows::Forms::ToolStripMenuItem^ выходToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ выйти»зѕрограммыToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ вернутьс€ЌазадToolStripMenuItem;
	private: System::Windows::Forms::DataGridView^ dataGridViewAdmin;
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
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->выходToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->выйти»зѕрограммыToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->вернутьс€ЌазадToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->dataGridViewAdmin = (gcnew System::Windows::Forms::DataGridView());
			this->menuStrip1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridViewAdmin))->BeginInit();
			this->SuspendLayout();
			// 
			// menuStrip1
			// 
			this->menuStrip1->ImageScalingSize = System::Drawing::Size(20, 20);
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->выходToolStripMenuItem });
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(1261, 28);
			this->menuStrip1->TabIndex = 0;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// выходToolStripMenuItem
			// 
			this->выходToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->выйти»зѕрограммыToolStripMenuItem,
					this->вернутьс€ЌазадToolStripMenuItem
			});
			this->выходToolStripMenuItem->Name = L"выходToolStripMenuItem";
			this->выходToolStripMenuItem->Size = System::Drawing::Size(67, 24);
			this->выходToolStripMenuItem->Text = L"¬ыход";
			// 
			// выйти»зѕрограммыToolStripMenuItem
			// 
			this->выйти»зѕрограммыToolStripMenuItem->Name = L"выйти»зѕрограммыToolStripMenuItem";
			this->выйти»зѕрограммыToolStripMenuItem->Size = System::Drawing::Size(243, 26);
			this->выйти»зѕрограммыToolStripMenuItem->Text = L"¬ыйти из программы";
			this->выйти»зѕрограммыToolStripMenuItem->Click += gcnew System::EventHandler(this, &AdminInterface::выйти»зѕрограммыToolStripMenuItem_Click);
			// 
			// вернутьс€ЌазадToolStripMenuItem
			// 
			this->вернутьс€ЌазадToolStripMenuItem->Name = L"вернутьс€ЌазадToolStripMenuItem";
			this->вернутьс€ЌазадToolStripMenuItem->Size = System::Drawing::Size(243, 26);
			this->вернутьс€ЌазадToolStripMenuItem->Text = L"¬ернутьс€ назад";
			this->вернутьс€ЌазадToolStripMenuItem->Click += gcnew System::EventHandler(this, &AdminInterface::вернутьс€ЌазадToolStripMenuItem_Click);
			// 
			// dataGridViewAdmin
			// 
			this->dataGridViewAdmin->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridViewAdmin->Location = System::Drawing::Point(12, 43);
			this->dataGridViewAdmin->Name = L"dataGridViewAdmin";
			this->dataGridViewAdmin->RowHeadersWidth = 51;
			this->dataGridViewAdmin->RowTemplate->Height = 24;
			this->dataGridViewAdmin->Size = System::Drawing::Size(1224, 409);
			this->dataGridViewAdmin->TabIndex = 1;
			// 
			// AdminInterface
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1261, 553);
			this->Controls->Add(this->dataGridViewAdmin);
			this->Controls->Add(this->menuStrip1);
			this->MainMenuStrip = this->menuStrip1;
			this->Name = L"AdminInterface";
			this->Text = L"AdminInterface";
			this->Shown += gcnew System::EventHandler(this, &AdminInterface::AdminInterface_Shown);
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridViewAdmin))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void выйти»зѕрограммыToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void вернутьс€ЌазадToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e);
	private: void Header();
	private: void Show();
		   private: void Show_meds(int _countData);
private: System::Void AdminInterface_Shown(System::Object^ sender, System::EventArgs^ e);
};
}
