#include "EditForm.h"
#include "AdminInterface.h"
#include "Functions.h"

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

System::Void PharmacyDB::EditForm::EditForm_Shown(System::Object^ sender, System::EventArgs^ e)
{
    std::string edit_fileName = "EditRecord.txt";
    std::string line;
    std::ifstream in(edit_fileName); // окрываем файл для чтения
    if (in.is_open())
    {
        getline(in, line, ';');
        getline(in, line, ';');
        EditForm::maskedTextBoxName->AppendText(Convert_string_to_String(line));
        getline(in, line, ';');
        EditForm::maskedTextBoxCountry->AppendText(Convert_string_to_String(line));
        getline(in, line, ';');
        EditForm::maskedTextBoxDate->AppendText(Convert_string_to_String(line));
        getline(in, line, ';');
        EditForm::maskedTextBoxNumber1->AppendText(Convert_string_to_String(line));
        getline(in, line, ';');
        EditForm::maskedTextBoxNumber2->AppendText(Convert_string_to_String(line));
        getline(in, line, ';');
        EditForm::maskedTextBoxNumber3->AppendText(Convert_string_to_String(line));
        getline(in, line, ';');
        EditForm::maskedTextBoxNumber4->AppendText(Convert_string_to_String(line));
        getline(in, line, ';');
        EditForm::maskedTextBoxNumber5->AppendText(Convert_string_to_String(line));
        getline(in, line, ';');
        EditForm::maskedTextBoxPrice->AppendText(Convert_string_to_String(line));
    }
   
    return System::Void();
}
