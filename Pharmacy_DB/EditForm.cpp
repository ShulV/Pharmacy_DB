#include "EditForm.h"
#include "AdminInterface.h"

System::Void PharmacyDB::EditForm::buttonEdit_Click(System::Object^ sender, System::EventArgs^ e)
{
    return System::Void();
}

System::Void PharmacyDB::EditForm::назадToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)
{
    AdminInterface^ adminForm = gcnew  AdminInterface();//создание формы
    this->Hide();//скрытие текующей формы
    adminForm->Show();//открытие главной формы
    return System::Void();
}
