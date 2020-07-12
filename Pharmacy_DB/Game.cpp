#include "Game.h"
#include "Functions.h"
#include "MainForm.h"


System::Void PharmacyDB::Game::выйти»зѕрограммыToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)
{
	MessageBoxButtons buttons = MessageBoxButtons::YesNo;
	if (MessageBox::Show("¬ы точно хотите выйти из программы?", "”ведомление", buttons) == System::Windows::Forms::DialogResult::Yes) {
		Application::Exit();
	}
	return System::Void();
}
System::Void PharmacyDB::Game::в√лавноећенюToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)
{
	MainForm^ mainForm = gcnew MainForm();//создание формы
	this->Hide();//скрытие текующей формы
	mainForm->Show();//открытие главной формы
	return System::Void();
}
System::Void PharmacyDB::Game::посмотреть—чЄтToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)
{
	return System::Void();
}
System::Void PharmacyDB::Game::Game_KeyDown(System::Object^ sender, System::Windows::Forms::KeyEventArgs^ e)
{
	//MessageBox::Show(e->KeyValue.ToString());
	int left_arrow = 37;
	int top_arrow = 38;
	int right_arrow = 39;
	int bottom_arrow = 40;
	//змейка, длина которой больше 1 кубика, не может делать поврот на 180 градусов
	if (e->KeyValue == left_arrow && (dirX != 1 || score == 0)) {
		//pictureBoxCube->Left = pictureBoxCube->Left - 40;
		dirX = -1; //движение влево
		dirY = 0; 
	}
	if (e->KeyValue == right_arrow && (dirX != -1 || score == 0)) {
		//pictureBoxCube->Left = pictureBoxCube->Left + 40;
		dirX = 1; //движение вправо
		dirY = 0;
	}
	if (e->KeyValue == top_arrow && (dirY != 1 || score == 0)) {
		//pictureBoxCube->Top = pictureBoxCube->Top - 40;
		dirY = -1; //движение вниз
		dirX = 0;
	}
	if (e->KeyValue == bottom_arrow && (dirY != -1 || score == 0)) {
		//pictureBoxCube->Top = pictureBoxCube->Top + 40;
		dirY = 1; //движение вверх
		dirX = 0;
	}
	return System::Void();
}
System::Void PharmacyDB::Game::_generateMap()
{
	for (int i = 0; i < _width / _sizeOfSides; i ++)
	{
		PictureBox^ pic = gcnew PictureBox();
		pic->BackColor = BackColor.Black;
		pic->Location = Point(0 + shift, _sizeOfSides * i + shift);
		pic->Size = Drawing::Size(_width - 100, 1);
		this->Controls->Add(pic);
	}
	for (int i = 0; i <= _height / _sizeOfSides; i++)
	{
		PictureBox^ pic = gcnew PictureBox();
		pic->BackColor = BackColor.Black;
		pic->Location = Point(_sizeOfSides * i + shift, 0 + shift);
		pic->Size = Drawing::Size(1, _width - 100);
		this->Controls->Add(pic);
	}
	return System::Void();
}

System::Void PharmacyDB::Game::Game_Shown(System::Object^ sender, System::EventArgs^ e)
{
	this->Width = _width + 200;
	this->Height = _height + 100;
	dirX = 1; //по умолчанию движение по ’ вправо есть
	dirY = 0; //по умолчанию движение по Y нет
	_generateMap();
	_generateFruit();
	this->timer->Tick += gcnew EventHandler(this, &PharmacyDB::Game::_update);

	SnakePB = gcnew array <PictureBox^>(400);//определ€ем максимально возможное кол-во квадратиков (тела змейки)
	SnakePB[0] = gcnew System::Windows::Forms::PictureBox();//создаЄм голову
	(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(SnakePB[0])->BeginInit());
	SnakePB[0]->Location = System::Drawing::Point(201, 201);
	SnakePB[0]->Size = Drawing::Size(_sizeOfSides-1, _sizeOfSides-1);
	SnakePB[0]->BackColor = BackColor.LimeGreen;
	this->Controls->Add(SnakePB[0]);
	//for (int i = 0; i < 400; i++)
	//{
		//SnakePB[i] = gcnew System::Windows::Forms::PictureBox();
		//(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(SnakePB[i])->BeginInit());
		//SnakePB[i]->Location = System::Drawing::Point(40*i , 40);
		//SnakePB[i]->BackColor = BackColor.LimeGreen;
		//SnakePB[i]->Size = Drawing::Size(_sizeOfSides, _sizeOfSides);
		//this->Controls->Add(SnakePB[i]);
	//}

	return System::Void();
}



System::Void PharmacyDB::Game::_update(System::Object^ sender, System::EventArgs^ e)
{
	//pictureBoxCube->Location = Point(pictureBoxCube->Location.X + dirX * _sizeOfSides, pictureBoxCube->Location.Y + dirY * _sizeOfSides);
	_checkBorders();
	_eatFruit();
	_MoveSnake();
	return System::Void();
}

System::Void PharmacyDB::Game::_generateFruit()
{
	fruit->BackColor = System::Drawing::Color::Transparent;
	Bitmap^ image1 = gcnew Bitmap("yellow-fruit.png");
	fruit->BackgroundImage = image1;
	fruit->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
	fruit->Size = Drawing::Size(_sizeOfSides - 1, _sizeOfSides - 1);
	Random^ randomNumber = gcnew Random();

	rI = randomNumber->Next(shift, _height - _sizeOfSides + shift);
	int tempI = rI % _sizeOfSides;
	rI -= tempI;
	rJ = randomNumber->Next(shift, _height - _sizeOfSides + shift);
	int tempJ = rJ % _sizeOfSides;
	rJ -= tempJ;
	rJ++;
	rI++;
	fruit->Location = Point(rI, rJ);
	this->Controls->Add(fruit);
	return System::Void();
}

System::Void PharmacyDB::Game::_eatFruit()
{
	if(SnakePB[0]->Location.X ==rI && SnakePB[0]->Location.Y == rJ){
		labelScore->Text = "–езультат: " + (++score);
		//удлинн€ем змейку
		SnakePB[score] = gcnew System::Windows::Forms::PictureBox();//создаЄм голову
		(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(SnakePB[score])->BeginInit());
		SnakePB[score]->Location = Point(SnakePB[score - 1]->Location.X + 40 * dirX, SnakePB[score - 1]->Location.Y - 40 * dirY);
		SnakePB[score]->Size = Drawing::Size(_sizeOfSides-1, _sizeOfSides-1);
		SnakePB[score]->BackColor = BackColor.Green;
		this->Controls->Add(SnakePB[score]);
		
		_generateFruit();
	}
	
	return System::Void();
}

System::Void PharmacyDB::Game::_MoveSnake()
{
	for (int i = score; i >= 1; i--) {
		//
		SnakePB[i]->Location = SnakePB[i-1]->Location;
	}
	SnakePB[0]->Location = Point(SnakePB[0]->Location.X + dirX * _sizeOfSides, SnakePB[0]->Location.Y + dirY * _sizeOfSides);
	
	_eatItSelf();
}

System::Void PharmacyDB::Game::_eatItSelf()
{
	for (int _i = 1; _i < score; _i++) {
		if (SnakePB[0]->Location == SnakePB[_i]->Location)
		{
			for (int _j = 1; _j <= score; _j++) {
				this->Controls->Remove(SnakePB[_j]);
			}
			this->timer->Stop();
			saveScore(score);
			MessageBox::Show("–езультат игры: " + score + " !");
			score = 0;
		}
	}
	return System::Void();
}

System::Void PharmacyDB::Game::_checkBorders()
{
	if (SnakePB[0]->Location.X < shift)
	{
		for (int _j = 1; _j <= score; _j++) {
			this->Controls->Remove(SnakePB[_j]);	
		}
		
		this->timer->Stop();
		saveScore(score);
		MessageBox::Show("–езультат игры: " + score + " !");
		score = 0;
		dirX = 1;
	}
	if (SnakePB[0]->Location.X > _width - 100 + shift)
	{
		for (int _j = 1; _j <= score; _j++) {
			this->Controls->Remove(SnakePB[_j]);
		}
		
		this->timer->Stop();
		saveScore(score);
		MessageBox::Show("–езультат игры: " + score + " !");
		score = 0;
		dirX = -1;
	}
	if (SnakePB[0]->Location.Y < shift)
	{
		for (int _j = 1; _j <= score; _j++) {
			this->Controls->Remove(SnakePB[_j]);
		}
		
		this->timer->Stop();
		saveScore(score);
		MessageBox::Show("–езультат игры: " + score + " !");
		score = 0;
		dirY = 1;
	}
	if (SnakePB[0]->Location.Y > _height + shift)
	{
		for (int _j = 1; _j <= score; _j++) {
			this->Controls->Remove(SnakePB[_j]);
		}
		
		this->timer->Stop();
		saveScore(score);
		MessageBox::Show("–езультат игры: " + score + " !");
		score = 0;
		dirY = -1;
	}
	return System::Void();
}

System::Void PharmacyDB::Game::выходToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)
{
	MessageBoxButtons buttons = MessageBoxButtons::YesNo;
	if (MessageBox::Show("¬ы точно хотите выйти из программы?", "”ведомление", buttons) == System::Windows::Forms::DialogResult::Yes) {
		Application::Exit();
	}
	return System::Void();
}

System::Void PharmacyDB::Game::в√лавноећенюToolStripMenuItem_Click_1(System::Object^ sender, System::EventArgs^ e)
{
	MainForm^ mainForm = gcnew MainForm();//создание формы
	this->Hide();//скрытие текующей формы
	mainForm->Show();//открытие главной формы
	return System::Void();
}

System::Void PharmacyDB::Game::о»греToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)
{
	MessageBox::Show("»гра \"Snake\"\n”правление осуществл€етс€ кнопками-стрелками на клавиатуре.\n÷ель игры - собрать как можно больше жЄ лтыхфруктов.\n«мейка не может разворачиватьс€ на 180 градусов, если еЄ длина больше одного кубика.\n", "о игре");
	return System::Void();
}

System::Void PharmacyDB::Game::рекордыToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)
{
	
	showScore();

	
}

System::Void PharmacyDB::Game::игратьToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)
{
	labelScore->Text = "–езультат: " + score;
	this->timer->Interval = 200;
	this->timer->Start();

	return System::Void();
}

System::Void PharmacyDB::Game::saveScore(int score_)
{
	int count_scores = 4;
	std::string str_scores[3];
	int int_scores[3];
	int copy;
	//прочитать 3 лучших счЄта
	std::ifstream read_scores("Scores.txt", std::ifstream::in);
	if (read_scores) {
		getline(read_scores, str_scores[0], ';');
		int_scores[0] = std::stoi(str_scores[0]);
		getline(read_scores, str_scores[1], ';');
		int_scores[1] = std::stoi(str_scores[1]);
		getline(read_scores, str_scores[2], ';');
		int_scores[2] = std::stoi(str_scores[2]);
		int_scores[3] = score_;
	}
	else
		MessageBox::Show("ќшибка открыти€ файла", "ќшибка");
	read_scores.close();
	//String^ str = str = int_scores[0] + "_" + int_scores[1] + "_" + int_scores[2] + "_" + int_scores[3];
	//MessageBox::Show("" + score_ + " str=" + str);
	//отсортировать 3 счЄта из файла и текущий по убыванию
	for (int k = 1; k < count_scores; k++) {
		for (int i = 0; i < count_scores - k; i++) {
			if (int_scores[i] < int_scores[i + 1]) {
				copy = int_scores[i];
				int_scores[i] = int_scores[i + 1];
				int_scores[i + 1] = copy;
			}
		}
	}
	//str = int_scores[0] + "_" + int_scores[1] + "_" + int_scores[2] + "_" + int_scores[3];
	//MessageBox::Show("" + score_ + " str=" + str);
	//записать 3 лучших счЄта
	std::ofstream write_scores("Scores.txt");
	if (write_scores) {
		write_scores << int_scores[0] << ";";
		write_scores << int_scores[1] << ";";
		write_scores << int_scores[2] << ";";
	}
	write_scores.close();
	return;

}
System::Void PharmacyDB::Game::showScore()
{
	int count_scores = 4;
	std::string str_scores[3];
	int int_scores[3];
	int copy;
	//прочитать 3 лучших счЄта
	std::ifstream read_scores("Scores.txt", std::ifstream::in);
	if (read_scores) {
		getline(read_scores, str_scores[0], ';');
		int_scores[0] = std::stoi(str_scores[0]);
		getline(read_scores, str_scores[1], ';');
		int_scores[1] = std::stoi(str_scores[1]);
		getline(read_scores, str_scores[2], ';');
		int_scores[2] = std::stoi(str_scores[2]);
	}
	else
		MessageBox::Show("ќшибка открыти€ файла", "ќшибка");
	read_scores.close();

	MessageBox::Show("Ћучшие результаты:\n" + "1 - " + int_scores[0] + " очков\n" + "2 - " + int_scores[1] + " очков\n" + "3 - " + int_scores[2] + " очков\n");
	return System::Void();
}
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////



