#include "MainForm.h"
#include "AdminInterface.h"
#include "UserInterface.h"
#include "Login.h"

using namespace System;
using namespace System::Windows::Forms;
//Главная форма
[STAThreadAttribute]
int main(array<String^>^ args) {
	Application::EnableVisualStyles();//включает визуальные стили
	Application::SetCompatibleTextRenderingDefault(false);//настройка совместимого отображения текста по умолчанию

	PharmacyDB::MainForm form;//определение формы
	Application::Run(% form);//запуск первоначальной формы
}

System::Void PharmacyDB::MainForm::выходToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)
{
	Application::Exit();
	return System::Void();
}

System::Void PharmacyDB::MainForm::btnAdmin_Click(System::Object^ sender, System::EventArgs^ e)
{
	Login^ mainForm = gcnew Login();//создание формы
	this->Hide();//скрытие текующей формы
	mainForm->Show();//открытие главной формы
	return System::Void();
}

System::Void PharmacyDB::MainForm::btnUser_Click(System::Object^ sender, System::EventArgs^ e)
{
	UserInterface^ mainForm = gcnew UserInterface();//создание формы
	this->Hide();//скрытие текующей формы
	mainForm->Show();//открытие главной формы
	return System::Void();
}
