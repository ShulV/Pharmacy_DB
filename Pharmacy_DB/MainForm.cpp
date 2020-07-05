#include "MainForm.h"

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
