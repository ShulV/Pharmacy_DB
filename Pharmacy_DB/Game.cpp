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




