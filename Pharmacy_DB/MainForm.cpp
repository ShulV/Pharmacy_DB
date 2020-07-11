#include "MainForm.h"
#include "AdminInterface.h"
#include "UserInterface.h"
#include "Login.h"
#include "RequestForm.h"
#include "Game.h"

using namespace System;
using namespace System::Windows::Forms;
//������� �����
[STAThreadAttribute]
int main(array<String^>^ args) {
	Application::EnableVisualStyles();//�������� ���������� �����
	Application::SetCompatibleTextRenderingDefault(false);//��������� ������������ ����������� ������ �� ���������

	PharmacyDB::MainForm form;//����������� �����
	Application::Run(% form);//������ �������������� �����
}

System::Void PharmacyDB::MainForm::�����ToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)
{
	MessageBoxButtons buttons = MessageBoxButtons::YesNo;
	if (MessageBox::Show("�� ����� ������ ����� �� ���������?", "�����������", buttons) == System::Windows::Forms::DialogResult::Yes) {
		Application::Exit();
	}
	return System::Void();
}

System::Void PharmacyDB::MainForm::btnAdmin_Click(System::Object^ sender, System::EventArgs^ e)
{
	Login^ mainForm = gcnew Login();//�������� �����
	this->Hide();//������� �������� �����
	mainForm->Show();//�������� ������� �����
	return System::Void();
}

System::Void PharmacyDB::MainForm::btnUser_Click(System::Object^ sender, System::EventArgs^ e)
{
	RequestForm^ requestForm = gcnew  RequestForm();//�������� �����
	this->Hide();//������� �������� �����
	requestForm->Show();//�������� ������� �����
	return System::Void();
}

System::Void PharmacyDB::MainForm::����ToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)
{
	Game^ gameForm = gcnew Game();
	this->Hide();
	gameForm->Show();
	return System::Void();
}
