#include "MainForm.h"
#include "AdminInterface.h"
#include "UserInterface.h"
#include "Login.h"

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
	Application::Exit();
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
	UserInterface^ mainForm = gcnew UserInterface();//�������� �����
	this->Hide();//������� �������� �����
	mainForm->Show();//�������� ������� �����
	return System::Void();
}
