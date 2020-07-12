#pragma once

namespace PharmacyDB {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Collections::Generic;
	using namespace System::Text;
	using namespace System::Threading::Tasks;



	/// <summary>
	/// —водка дл€ Game
	/// </summary>
	public ref class Game : public System::Windows::Forms::Form
	{
	public:
		Game(void)
		{
			InitializeComponent();
			//this->KeyDown += gcnew System::Windows::Forms::KeyEventHandler(this, &PharmacyDB::Game::OnKeyDown);
			//
			//TODO: добавьте код конструктора
			//
		}
	
	protected:
		/// <summary>
		/// ќсвободить все используемые ресурсы.
		/// </summary>
		~Game()
		{
			if (components)
			{
				delete components;
			}
		}

	protected:




	private: System::Windows::Forms::Timer^ timer;
	private: System::Windows::Forms::Label^ labelScore;


	private: System::ComponentModel::IContainer^ components;

	

	private:
		/// <summary>
		/// ќб€зательна€ переменна€ конструктора.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// “ребуемый метод дл€ поддержки конструктора Ч не измен€йте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			this->timer = (gcnew System::Windows::Forms::Timer(this->components));
			this->labelScore = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// labelScore
			// 
			this->labelScore->AutoSize = true;
			this->labelScore->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 21.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->labelScore->Location = System::Drawing::Point(862, 7);
			this->labelScore->Name = L"labelScore";
			this->labelScore->Size = System::Drawing::Size(186, 33);
			this->labelScore->TabIndex = 2;
			this->labelScore->Text = L"–езультат: 0";
			// 
			// Game
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::SkyBlue;
			this->ClientSize = System::Drawing::Size(1105, 601);
			this->Controls->Add(this->labelScore);
			this->Name = L"Game";
			this->Text = L"Game";
			this->Shown += gcnew System::EventHandler(this, &Game::Game_Shown);
			this->KeyDown += gcnew System::Windows::Forms::KeyEventHandler(this, &Game::Game_KeyDown);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: int _width = 900;//ширина карты
	private: int _height = 800;//высота карты
	private: int _sizeOfSides = 40;//размер квадратика
	private: int dirX;//движение по ’
	private: int dirY;//движение по Y
	private: int rI;//рандомна€ координата X
	private: int rJ;//рандомна€ координата Y
	private: int score = 0; //опыт
	PictureBox^ fruit = gcnew PictureBox();//создаЄм фрукт
	array <System::Windows::Forms::PictureBox^>^ SnakePB;
	
	
	private: System::Void выйти»зѕрограммыToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void в√лавноећенюToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void посмотреть—чЄтToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e);

	private: System::Void Game_KeyDown(System::Object^ sender, System::Windows::Forms::KeyEventArgs^ e);//обработка кнопок

	private: System::Void _generateMap();//создание карты (сетки)
	private: System::Void Game_Shown(System::Object^ sender, System::EventArgs^ e);

	private: System::Void _update(System::Object^ sender, System::EventArgs^ e);
	private: System::Void _generateFruit();//генераци€ фрукта

	private: System::Void _eatFruit();//поведение при поедании фруктов
	private: System::Void _MoveSnake();//движение всей структуры змеи


};
}
