#include "Game.h"

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


