#include "Login.h"
#include "MainForm.h"
#include "AdminInterface.h"

System::Void PharmacyDB::Login::выйтиИзПрограммыToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)
{
    MessageBoxButtons buttons = MessageBoxButtons::YesNo;
    if (MessageBox::Show("Вы точно хотите выйти из программы?", "Уведомление", buttons) == System::Windows::Forms::DialogResult::Yes) {
        Application::Exit();
    }
    return System::Void();
}

System::Void PharmacyDB::Login::вернутьсяНазадToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)
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
    String^ admin_password = gcnew String("123");//пароль для работы в режиме админа
    String^ entered_password = textBox1->Text->ToString();
    if (admin_password == entered_password) {
        AdminInterface^ mainForm = gcnew AdminInterface();//создание формы
        this->Hide();//скрытие текующей формы
        mainForm->Show();//открытие главной формы
    }
    else
        MessageBox::Show("Пароль введен не верно!", "Ошибка");
   
    return System::Void();
}
