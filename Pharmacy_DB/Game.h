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
	/// Сводка для Game
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
		/// Освободить все используемые ресурсы.
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
	private: System::Windows::Forms::MenuStrip^ menuStrip1;
	private: System::Windows::Forms::ToolStripMenuItem^ выходToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ вГлавноеМенюToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ оИгреToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ рекордыToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ игратьToolStripMenuItem;











	private: System::ComponentModel::IContainer^ components;

	

	private:
		/// <summary>
		/// Обязательная переменная конструктора.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Требуемый метод для поддержки конструктора — не изменяйте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			this->timer = (gcnew System::Windows::Forms::Timer(this->components));
			this->labelScore = (gcnew System::Windows::Forms::Label());
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->выходToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->вГлавноеМенюToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->оИгреToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->рекордыToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->игратьToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->menuStrip1->SuspendLayout();
			this->SuspendLayout();
			// 
			// labelScore
			// 
			this->labelScore->AutoSize = true;
			this->labelScore->BackColor = System::Drawing::Color::Transparent;
			this->labelScore->Font = (gcnew System::Drawing::Font(L"Modern No. 20", 21.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->labelScore->Location = System::Drawing::Point(875, 38);
			this->labelScore->Name = L"labelScore";
			this->labelScore->Size = System::Drawing::Size(161, 31);
			this->labelScore->TabIndex = 2;
			this->labelScore->Text = L"Результат: 0";
			// 
			// menuStrip1
			// 
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(5) {
				this->выходToolStripMenuItem,
					this->вГлавноеМенюToolStripMenuItem, this->оИгреToolStripMenuItem, this->рекордыToolStripMenuItem, this->игратьToolStripMenuItem
			});
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Margin = System::Windows::Forms::Padding(40, 0, 0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(1105, 24);
			this->menuStrip1->TabIndex = 3;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// выходToolStripMenuItem
			// 
			this->выходToolStripMenuItem->Name = L"выходToolStripMenuItem";
			this->выходToolStripMenuItem->Size = System::Drawing::Size(53, 20);
			this->выходToolStripMenuItem->Text = L"Выход";
			this->выходToolStripMenuItem->Click += gcnew System::EventHandler(this, &Game::выходToolStripMenuItem_Click);
			// 
			// вГлавноеМенюToolStripMenuItem
			// 
			this->вГлавноеМенюToolStripMenuItem->Name = L"вГлавноеМенюToolStripMenuItem";
			this->вГлавноеМенюToolStripMenuItem->Size = System::Drawing::Size(108, 20);
			this->вГлавноеМенюToolStripMenuItem->Text = L"В главное меню";
			this->вГлавноеМенюToolStripMenuItem->Click += gcnew System::EventHandler(this, &Game::вГлавноеМенюToolStripMenuItem_Click_1);
			// 
			// оИгреToolStripMenuItem
			// 
			this->оИгреToolStripMenuItem->Name = L"оИгреToolStripMenuItem";
			this->оИгреToolStripMenuItem->Size = System::Drawing::Size(56, 20);
			this->оИгреToolStripMenuItem->Text = L"О игре";
			this->оИгреToolStripMenuItem->Click += gcnew System::EventHandler(this, &Game::оИгреToolStripMenuItem_Click);
			// 
			// рекордыToolStripMenuItem
			// 
			this->рекордыToolStripMenuItem->Name = L"рекордыToolStripMenuItem";
			this->рекордыToolStripMenuItem->Size = System::Drawing::Size(67, 20);
			this->рекордыToolStripMenuItem->Text = L"Рекорды";
			this->рекордыToolStripMenuItem->Click += gcnew System::EventHandler(this, &Game::рекордыToolStripMenuItem_Click);
			// 
			// игратьToolStripMenuItem
			// 
			this->игратьToolStripMenuItem->BackColor = System::Drawing::Color::LimeGreen;
			this->игратьToolStripMenuItem->Name = L"игратьToolStripMenuItem";
			this->игратьToolStripMenuItem->Size = System::Drawing::Size(57, 20);
			this->игратьToolStripMenuItem->Text = L"Играть";
			this->игратьToolStripMenuItem->Click += gcnew System::EventHandler(this, &Game::игратьToolStripMenuItem_Click);
			// 
			// Game
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::SkyBlue;
			this->ClientSize = System::Drawing::Size(1105, 861);
			this->Controls->Add(this->labelScore);
			this->Controls->Add(this->menuStrip1);
			this->MainMenuStrip = this->menuStrip1;
			this->MaximumSize = System::Drawing::Size(1121, 900);
			this->MinimumSize = System::Drawing::Size(1121, 900);
			this->Name = L"Game";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Game";
			this->Shown += gcnew System::EventHandler(this, &Game::Game_Shown);
			this->KeyDown += gcnew System::Windows::Forms::KeyEventHandler(this, &Game::Game_KeyDown);
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: int _width = 900;//ширина карты
	private: int _height = 800;//высота карты
	private: int _sizeOfSides = 40;//размер квадратика
	private: int shift = 40; //сдвиг для того, чтобы влезло меню
	private: int dirX;//движение по Х
	private: int dirY;//движение по Y
	private: int rI;//рандомная координата X
	private: int rJ;//рандомная координата Y
	private: int score = 0; //опыт
	PictureBox^ fruit = gcnew PictureBox();//создаём фрукт
	array <System::Windows::Forms::PictureBox^>^ SnakePB;
	
	
	private: System::Void выйтиИзПрограммыToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void вГлавноеМенюToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void посмотретьСчётToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e);

	private: System::Void Game_KeyDown(System::Object^ sender, System::Windows::Forms::KeyEventArgs^ e);//обработка кнопок

	private: System::Void _generateMap();//создание карты (сетки)
	private: System::Void Game_Shown(System::Object^ sender, System::EventArgs^ e);

	private: System::Void _update(System::Object^ sender, System::EventArgs^ e);
	private: System::Void _generateFruit();//генерация фрукта

	private: System::Void _eatFruit();//поведение при поедании фруктов
	private: System::Void _MoveSnake();//движение всей структуры змеи
	private: System::Void _eatItSelf();//поведение при поедании змейкой самой себя
	private: System::Void _checkBorders();//поведение при встрече с границей

private: System::Void выходToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void вГлавноеМенюToolStripMenuItem_Click_1(System::Object^ sender, System::EventArgs^ e);
private: System::Void оИгреToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void рекордыToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e);

private: System::Void игратьToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e);

private: System::Void saveScore(int score_);
private: System::Void showScore();
};
}
