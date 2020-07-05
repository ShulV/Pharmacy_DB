#include "Login.h"
#include "MainForm.h"
#include "AdminInterface.h"

System::Void PharmacyDB::Login::выйти»зѕрограммыToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)
{
    Application::Exit();
    return System::Void();
}

System::Void PharmacyDB::Login::вернутьс€ЌазадToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)
{
    MainForm^ mainForm = gcnew MainForm();//создание формы
    this->Hide();//скрытие текующей формы
    mainForm->Show();//открытие главной формы

    return System::Void();
}

System::Void PharmacyDB::Login::textBox1_TextChanged(System::Object^ sender, System::EventArgs^ e)
{
    return System::Void();
}

System::Void PharmacyDB::Login::btnAdminEntry_Click(System::Object^ sender, System::EventArgs^ e)
{
    String^ admin_password = gcnew String("123");//пароль дл€ работы в режиме админа
    String^ entered_password = textBox1->Text->ToString();
    if (admin_password == entered_password) {
        AdminInterface^ mainForm = gcnew AdminInterface();//создание формы
        this->Hide();//скрытие текующей формы
        mainForm->Show();//открытие главной формы
    }
    else
        MessageBox::Show("ѕароль введен не верно!", "ќшибка");
   
    return System::Void();
}
