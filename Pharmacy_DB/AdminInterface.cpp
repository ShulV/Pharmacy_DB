#include "AdminInterface.h"
#include "MainForm.h"

System::Void PharmacyDB::AdminInterface::выйти»зѕрограммыToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)
{
    Application::Exit();
    return System::Void();
}

System::Void PharmacyDB::AdminInterface::вернутьс€ЌазадToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)
{
    MainForm^ mainForm = gcnew MainForm();//создание формы
    this->Hide();//скрытие текующей формы
    mainForm->Show();//открытие главной формы
    return System::Void();
}
