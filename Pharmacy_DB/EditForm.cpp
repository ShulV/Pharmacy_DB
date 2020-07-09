#include "EditForm.h"
#include "AdminInterface.h"
#include "Functions.h"

System::Void PharmacyDB::EditForm::buttonEdit_Click(System::Object^ sender, System::EventArgs^ e)
{
    char fileName[] = "medicines.txt"; //основной файл
    std::string id, name, date, country, pharm_numbers[MAX_PHARMACIES], price;
    String^ Id = label_Id->Text->ToString();
    String^ Name = maskedTextBoxName->Text->ToString();
    String^ Country = maskedTextBoxCountry->Text->ToString();
    String^ Date = maskedTextBoxDate->Text->ToString();
    String^ Pharm_numbers1 = maskedTextBoxNumber1->Text->ToString();
    String^ Pharm_numbers2 = maskedTextBoxNumber2->Text->ToString();
    String^ Pharm_numbers3 = maskedTextBoxNumber3->Text->ToString();
    String^ Pharm_numbers4 = maskedTextBoxNumber4->Text->ToString();
    String^ Pharm_numbers5 = maskedTextBoxNumber5->Text->ToString();
    String^ Price = maskedTextBoxPrice->Text->ToString();

    Convert_String_to_string(Id, id);
    Convert_String_to_string(Name, name);
    Convert_String_to_string(Country, country);
    Convert_String_to_string(Date, date);
    Convert_String_to_string(Pharm_numbers1, pharm_numbers[0]);
    Convert_String_to_string(Pharm_numbers2, pharm_numbers[1]);
    Convert_String_to_string(Pharm_numbers3, pharm_numbers[2]);
    Convert_String_to_string(Pharm_numbers4, pharm_numbers[3]);
    Convert_String_to_string(Pharm_numbers5, pharm_numbers[4]);
    Convert_String_to_string(Price, price);

    bool fields_is_empty = (id == "" || date == "" || name == "" || country == "" || pharm_numbers[0] == "" || pharm_numbers[1] == "" || pharm_numbers[2] == "" || pharm_numbers[3] == "" || pharm_numbers[4] == "" || price == "");
    if (fields_is_empty) {
        MessageBox::Show("Есть пустое поле!\nДобавьте данные и повторите действие.", "Ошибка");
        return System::Void();
    }
    bool data_true = date_is_true(date);
    if (!data_true) {
        MessageBox::Show("Дата-производства не была введена (или была введена не полностью)\nИсправьте данные и повторите действие.", "Ошибка");
        return System::Void();
    }
    bool pharms_true = is_positive_number(pharm_numbers[0]) && is_positive_number(pharm_numbers[1]) && is_positive_number(pharm_numbers[2]) && is_positive_number(pharm_numbers[3]) && is_positive_number(pharm_numbers[4]);
    if (!pharms_true) {
        MessageBox::Show("Номер аптеки должен быть не отрицательным числом!\nИсправьте данные и повторите действие.", "Ошибка");
        return System::Void();
    }
    bool price_true = is_positive_number(price);
    if (!price_true) {
        MessageBox::Show("Цена должна быть не отрицательным числом!\nИсправьте данные и повторите действие.", "Ошибка");
        return System::Void();
    }
    std::string edit_fileName = "EditRecord.txt";
    save_meds_line_in_adititional_file(id, name, country, date, pharm_numbers, price, edit_fileName);

    AdminInterface^ adminForm = gcnew  AdminInterface();//создание формы
    this->Hide();//скрытие текующей формы
    adminForm->Show();//открытие главной формы
    return System::Void();
    //AdminInterface^ adminForm = gcnew  AdminInterface();//создание формы
   //adminForm->dataGridViewAdmin->Text = "FFFFFFFFFFFf";
   


    return System::Void();
}
System::Void PharmacyDB::EditForm::назадToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)
{
    std::string edit_fileName = "EditRecord.txt";
    ClearFile(edit_fileName);
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
        EditForm::label_Id->Text = (Convert_string_to_String(line));
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
