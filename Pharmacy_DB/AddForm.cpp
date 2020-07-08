#include "AddForm.h"
#include "AdminInterface.h"
#include "Functions.h"
#include <ctype.h>
System::Void PharmacyDB::AddForm::buttonAdd_Click(System::Object^ sender, System::EventArgs^ e)
{
    char fileName[] = "medicines.txt"; //�������� ����
    char AddFileName[] = "AddRecord.txt"; //���� ����������� ������

    std::string id, name, date, country, pharm_numbers[MAX_PHARMACIES], price;
    String^ Id = Convert::ToString(get_count_data(fileName));
    String^ Name = maskedTextBoxName->Text->ToString();
    String^ Date = maskedTextBoxDate->Text->ToString();
    String^ Country = maskedTextBoxCountry->Text->ToString();
    String^ Pharm_numbers1 = maskedTextBoxNumber1->Text->ToString();
    String^ Pharm_numbers2 = maskedTextBoxNumber2->Text->ToString();
    String^ Pharm_numbers3 = maskedTextBoxNumber3->Text->ToString();
    String^ Pharm_numbers4 = maskedTextBoxNumber4->Text->ToString();
    String^ Pharm_numbers5 = maskedTextBoxNumber5->Text->ToString();
    String^ Price = maskedTextBoxPrice->Text->ToString();

    Convert_String_to_string(Id, id);
    Convert_String_to_string(Date, date);
    Convert_String_to_string(Name, name);
    Convert_String_to_string(Country, country);
    Convert_String_to_string(Pharm_numbers1, pharm_numbers[0]);
    Convert_String_to_string(Pharm_numbers2, pharm_numbers[1]);
    Convert_String_to_string(Pharm_numbers3, pharm_numbers[2]);
    Convert_String_to_string(Pharm_numbers4, pharm_numbers[3]);
    Convert_String_to_string(Pharm_numbers5, pharm_numbers[4]);
    Convert_String_to_string(Price, price);
    
    bool fields_is_empty = (id == "" || date == "" || name == "" || country == "" || pharm_numbers[0] == "" || pharm_numbers[1] == "" || pharm_numbers[2] == "" || pharm_numbers[3] == "" || pharm_numbers[4] == "" || price == "");
    if (fields_is_empty) {
        MessageBox::Show("���� ������ ����!\n�������� ������ � ��������� ��������.", "������");
        return System::Void();
    }
    bool data_true = date_is_true(date);
    if (!data_true) {
        MessageBox::Show("����-������������ �� ���� ������� (��� ���� ������� �� ���������)\n��������� ������ � ��������� ��������.", "������");
        return System::Void();
    }
    bool pharms_true = is_positive_number(pharm_numbers[0]) && is_positive_number(pharm_numbers[1]) && is_positive_number(pharm_numbers[2]) && is_positive_number(pharm_numbers[3]) && is_positive_number(pharm_numbers[4]);
    if (!pharms_true) {
        MessageBox::Show("����� ������ ������ ���� �� ������������� ������!\n��������� ������ � ��������� ��������.", "������");
        return System::Void();
    }
    bool price_true = is_positive_number(price);
    if (!price_true) {
        MessageBox::Show("���� ������ ���� �� ������������� ������!\n��������� ������ � ��������� ��������.", "������");
        return System::Void();
    }

    save_meds_line_in_adititional_file(id, date, name, country, pharm_numbers, price);
    add_line_from_adititional_file_to_main_file(AddFileName, fileName);

    AdminInterface^ adminForm = gcnew AdminInterface();//�������� �����
    this->Hide();//������� �������� �����
    adminForm->Hide();//������� ������� �����
    adminForm->Show();//�������� ������� ����� (����� ���� ����������)
   

    return System::Void();
   
}
