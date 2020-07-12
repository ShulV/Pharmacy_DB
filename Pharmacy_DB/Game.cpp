#include "Game.h"
#include "Functions.h"
#include "MainForm.h"


System::Void PharmacyDB::Game::����������������ToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)
{
	MessageBoxButtons buttons = MessageBoxButtons::YesNo;
	if (MessageBox::Show("�� ����� ������ ����� �� ���������?", "�����������", buttons) == System::Windows::Forms::DialogResult::Yes) {
		Application::Exit();
	}
	return System::Void();
}

System::Void PharmacyDB::Game::������������ToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)
{
	MainForm^ mainForm = gcnew MainForm();//�������� �����
	this->Hide();//������� �������� �����
	mainForm->Show();//�������� ������� �����
	return System::Void();
}

System::Void PharmacyDB::Game::��������������ToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)
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
	if (e->KeyValue == left_arrow) {
		//pictureBoxCube->Left = pictureBoxCube->Left - 40;
		dirX = -1; //�������� �����
		dirY = 0; 
	}
	if (e->KeyValue == right_arrow) {
		//pictureBoxCube->Left = pictureBoxCube->Left + 40;
		dirX = 1; //�������� ������
		dirY = 0;
	}
	if (e->KeyValue == top_arrow) {
		//pictureBoxCube->Top = pictureBoxCube->Top - 40;
		dirY = -1; //�������� ����
		dirX = 0;
	}
	if (e->KeyValue == bottom_arrow) {
		//pictureBoxCube->Top = pictureBoxCube->Top + 40;
		dirY = 1; //�������� �����
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
		pic->Location = Point(0, _sizeOfSides * i);
		pic->Size = Drawing::Size(_width - 100, 1);
		this->Controls->Add(pic);
	}
	for (int i = 0; i <= _height / _sizeOfSides; i++)
	{
		PictureBox^ pic = gcnew PictureBox();
		pic->BackColor = BackColor.Black;
		pic->Location = Point(_sizeOfSides * i, 0);
		pic->Size = Drawing::Size(1, _width);
		this->Controls->Add(pic);
	}
	return System::Void();
}

System::Void PharmacyDB::Game::Game_Shown(System::Object^ sender, System::EventArgs^ e)
{
	this->Width = _width;
	this->Height = _height;
	dirX = 1; //�� ��������� �������� �� � ������ ����
	dirY = 0; //�� ��������� �������� �� Y ���
	_generateMap();
	this->timer->Tick += gcnew EventHandler(this, &PharmacyDB::Game::_update);
	this->timer->Interval = 500;
	this->timer->Start();

	return System::Void();
}



System::Void PharmacyDB::Game::_update(System::Object^ sender, System::EventArgs^ e)
{
	pictureBoxCube->Location = Point(pictureBoxCube->Location.X + dirX * _sizeOfSides, pictureBoxCube->Location.Y + dirY * _sizeOfSides);
	return System::Void();
}





