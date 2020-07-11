#include "Game.h"
#include "Functions.h"
#include "MainForm.h"

System::Void PharmacyDB::Game::âûéòèÈçÏðîãðàììûToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)
{
	MessageBoxButtons buttons = MessageBoxButtons::YesNo;
	if (MessageBox::Show("Âû òî÷íî õîòèòå âûéòè èç ïðîãðàììû?", "Óâåäîìëåíèå", buttons) == System::Windows::Forms::DialogResult::Yes) {
		Application::Exit();
	}
	return System::Void();
}

System::Void PharmacyDB::Game::âÃëàâíîåÌåíþToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)
{
	MainForm^ mainForm = gcnew MainForm();//ñîçäàíèå ôîðìû
	this->Hide();//ñêðûòèå òåêóþùåé ôîðìû
	mainForm->Show();//îòêðûòèå ãëàâíîé ôîðìû
	return System::Void();
}

System::Void PharmacyDB::Game::ïîñìîòðåòüÑ÷¸òToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)
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
		pictureBoxCube->Left = pictureBoxCube->Left - 40;
	}
	if (e->KeyValue == right_arrow) {
		pictureBoxCube->Left = pictureBoxCube->Left + 40;
	}
	if (e->KeyValue == top_arrow) {
		pictureBoxCube->Top = pictureBoxCube->Top - 40;
	}
	if (e->KeyValue == bottom_arrow) {
		pictureBoxCube->Top = pictureBoxCube->Top + 40;
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
	_generateMap();
	return System::Void();
}




