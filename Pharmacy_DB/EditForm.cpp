#include "EditForm.h"
#include "AdminInterface.h"

System::Void PharmacyDB::EditForm::buttonEdit_Click(System::Object^ sender, System::EventArgs^ e)
{
    return System::Void();
}

System::Void PharmacyDB::EditForm::�����ToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)
{
    AdminInterface^ adminForm = gcnew  AdminInterface();//�������� �����
    this->Hide();//������� �������� �����
    adminForm->Show();//�������� ������� �����
    return System::Void();
}
