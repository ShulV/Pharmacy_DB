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



	private: System::Windows::Forms::PictureBox^ pictureBoxCube;
	private: System::Windows::Forms::Timer^ timer;

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
			this->pictureBoxCube = (gcnew System::Windows::Forms::PictureBox());
			this->timer = (gcnew System::Windows::Forms::Timer(this->components));
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBoxCube))->BeginInit();
			this->SuspendLayout();
			// 
			// pictureBoxCube
			// 
			this->pictureBoxCube->BackColor = System::Drawing::Color::LimeGreen;
			this->pictureBoxCube->Location = System::Drawing::Point(1, 1);
			this->pictureBoxCube->MaximumSize = System::Drawing::Size(39, 39);
			this->pictureBoxCube->MinimumSize = System::Drawing::Size(39, 39);
			this->pictureBoxCube->Name = L"pictureBoxCube";
			this->pictureBoxCube->Size = System::Drawing::Size(39, 39);
			this->pictureBoxCube->TabIndex = 1;
			this->pictureBoxCube->TabStop = false;
			// 
			// Game
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::SkyBlue;
			this->ClientSize = System::Drawing::Size(1105, 601);
			this->Controls->Add(this->pictureBoxCube);
			this->Name = L"Game";
			this->Text = L"Game";
			this->Shown += gcnew System::EventHandler(this, &Game::Game_Shown);
			this->KeyDown += gcnew System::Windows::Forms::KeyEventHandler(this, &Game::Game_KeyDown);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBoxCube))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: int _width = 900;//ширина карты
	private: int _height = 800;//высота карты
	private: int _sizeOfSides = 40;//размер квадратика
	private: int dirX;//движение по ’
	private: int dirY;//движение по Y
	
	private: System::Void выйти»зѕрограммыToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void в√лавноећенюToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void посмотреть—чЄтToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e);

	private: System::Void Game_KeyDown(System::Object^ sender, System::Windows::Forms::KeyEventArgs^ e);//обработка кнопок

	private: System::Void _generateMap();
	private: System::Void Game_Shown(System::Object^ sender, System::EventArgs^ e);

	private: System::Void _update(System::Object^ sender, System::EventArgs^ e);


};
}
