#include "Login.h"
#include "MainForm.h"
#include "AdminInterface.h"

System::Void PharmacyDB::Login::����������������ToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)
{
    Application::Exit();
    return System::Void();
}

System::Void PharmacyDB::Login::��������������ToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)
{
    MainForm^ mainForm = gcnew MainForm();//�������� �����
    this->Hide();//������� �������� �����
    mainForm->Show();//�������� ������� �����

    return System::Void();
}

System::Void PharmacyDB::Login::textBox1_TextChanged(System::Object^ sender, System::EventArgs^ e)
{
    return System::Void();
}

System::Void PharmacyDB::Login::btnAdminEntry_Click(System::Object^ sender, System::EventArgs^ e)
{
    String^ admin_password = gcnew String("123");//������ ��� ������ � ������ ������
    String^ entered_password = textBox1->Text->ToString();
    if (admin_password == entered_password) {
        AdminInterface^ mainForm = gcnew AdminInterface();//�������� �����
        this->Hide();//������� �������� �����
        mainForm->Show();//�������� ������� �����
    }
    else
        MessageBox::Show("������ ������ �� �����!", "������");
   
    return System::Void();
}
