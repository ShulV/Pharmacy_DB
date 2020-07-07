#include "AddForm.h"
#include "Functions.h"
#include <ctype.h>
System::Void PharmacyDB::AddForm::buttonAdd_Click(System::Object^ sender, System::EventArgs^ e)
{
    char fileName[] = "medicines.txt"; //основной файл

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
    
    save_meds_line(id, date, name, country, pharm_numbers, price);

    MessageBox::Show("Ошибок при вводе не найдено ", "П");
    return System::Void();
}
