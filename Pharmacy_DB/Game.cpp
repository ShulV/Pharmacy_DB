#include "Game.h"

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


