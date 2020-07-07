#include "AddForm.h"
#include "Functions.h"
#include <ctype.h>
System::Void PharmacyDB::AddForm::buttonAdd_Click(System::Object^ sender, System::EventArgs^ e)
{
    std::string number;
    String^ Number = maskedTextBoxPrice->Text->ToString();;
    Convert_String_to_string(Number, number);
 //if (!isNumber(number))
 //{
     ;
// }
    MessageBox::Show("Ошибок при вводе не найдено ", "П");
    return System::Void();
}
