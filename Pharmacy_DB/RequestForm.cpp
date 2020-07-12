#include "RequestForm.h"
#include "Functions.h"
#include "MainForm.h"



void PharmacyDB::RequestForm::Header()
{
    DataGridViewTextBoxColumn^ c1 = gcnew DataGridViewTextBoxColumn();
    c1->Name = "Id";
    c1->HeaderText = "id";
    c1->Width = 150;
    dataGridViewRequest->Columns->Add(c1);

    DataGridViewTextBoxColumn^ c2 = gcnew DataGridViewTextBoxColumn();
    c2->Name = "Name";
    c2->HeaderText = "��������";
    c2->Width = 450;
    dataGridViewRequest->Columns->Add(c2);

    DataGridViewTextBoxColumn^ c3 = gcnew DataGridViewTextBoxColumn();
    c3->Name = "Country";
    c3->HeaderText = "������-�������������";
    c3->Width = 150;
    dataGridViewRequest->Columns->Add(c3);
    DataGridViewTextBoxColumn^ c4 = gcnew DataGridViewTextBoxColumn();
    c4->Name = "Date";
    c4->HeaderText = "���� ������������";
    c4->Width = 150;
    dataGridViewRequest->Columns->Add(c4);

    DataGridViewTextBoxColumn^ c5 = gcnew DataGridViewTextBoxColumn();
    c5->Name = "PharmacyNumbers";
    c5->HeaderText = "������ 1";
    c5->Width = 50;
    dataGridViewRequest->Columns->Add(c5);

    DataGridViewTextBoxColumn^ c6 = gcnew DataGridViewTextBoxColumn();
    c6->Name = "PharmacyNumbers";
    c6->HeaderText = "������ 2";
    c6->Width = 50;
    dataGridViewRequest->Columns->Add(c6);

    DataGridViewTextBoxColumn^ c7 = gcnew DataGridViewTextBoxColumn();
    c7->Name = "PharmacyNumbers";
    c7->HeaderText = "������ 3";
    c7->Width = 50;
    dataGridViewRequest->Columns->Add(c7);

    DataGridViewTextBoxColumn^ c8 = gcnew DataGridViewTextBoxColumn();
    c8->Name = "PharmacyNumbers";
    c8->HeaderText = "������ 4";
    c8->Width = 50;
    dataGridViewRequest->Columns->Add(c8);

    DataGridViewTextBoxColumn^ c9 = gcnew DataGridViewTextBoxColumn();
    c9->Name = "PharmacyNumbers";
    c9->HeaderText = "������ 5";
    c9->Width = 50;
    dataGridViewRequest->Columns->Add(c9);

    DataGridViewTextBoxColumn^ c10 = gcnew DataGridViewTextBoxColumn();
    c10->Name = "Price";
    c10->HeaderText = "����";
    c10->Width = 150;
    dataGridViewRequest->Columns->Add(c10);

    dataGridViewRequest->AutoResizeColumns();
    dataGridViewRequest->TopLeftHeaderCell->Value = "������ �� �������";
}
void PharmacyDB::RequestForm::Show_meds(int _countData)
{
    int countData = 0;//������� ���-�� ��������
    char fileName[] = "medicines.txt"; //�������� ����
    if (_countData == 0)
    {
        MessageBox::Show("������� � ����� ���", "��������������");
    }
    else {
        dataGridViewRequest->RowCount = _countData + 1;
        dataGridViewRequest->ColumnCount = 10;
        std::string line;
        //std::string data[10];
        std::ifstream in(fileName); // �������� ���� ��� ������
       
        

        if (in.is_open())
        {
            getline(in, line);
            for (int row = 0; row < _countData; row++) {
                for (int cell = 0; cell < 10; cell++) {
                    getline(in, line, ';');
                    dataGridViewRequest->Rows[row]->Cells[cell]->Value = Convert_string_to_String(line);
                    //data[cell] = line;
                }
                /*
                 if (1) {
                    for (int cell = 0; cell < 10; cell++) {
                        
                    }
                }*/
               
                    
            }
        }
        else
            MessageBox::Show("���� �� ��������", "������");//���� �� �������� 
        in.close();     // ��������� ����
    }
    return;
}
System::Void PharmacyDB::RequestForm::RequestForm_Shown(System::Object^ sender, System::EventArgs^ e)
{
    /*
    char fileName[] = "medicines.txt"; //�������� ����
    int countData = get_count_data(fileName);//������� ���-�� ��������
    Header();
    //MessageBox::Show(Convert_string_to_String(std::to_string(countData)));
    Show_meds(countData);
    */
    
    return System::Void();
}
System::Void PharmacyDB::RequestForm::buttonShowDataRequest_Click(System::Object^ sender, System::EventArgs^ e)
{
    char fileName[] = "medicines.txt"; //�������� ����
    int count_row = get_count_data(fileName);
    int countData = get_count_data(fileName);//������� ���-�� ��������
    Show_meds(countData);
    std::string name, country, date, number, price;
    String^ Name = RequestForm::maskedTextBoxName->Text->ToString();
    String^ Country = RequestForm::maskedTextBoxCountry->Text->ToString();
    String^ Date = RequestForm::maskedTextBoxDate->Text->ToString();
    String^ Number = RequestForm::maskedTextBoxNumber->Text->ToString();
    String^ Price = RequestForm::maskedTextBoxPrice->Text->ToString();
    Convert_String_to_string(Name, name);
    Convert_String_to_string(Country, country);
    Convert_String_to_string(Date, date);
    Convert_String_to_string(Number, number);
    Convert_String_to_string(Price, price);
    bool PriceLess = RequestForm::radioButtonPriceLess->Checked;
    bool PriceMore = RequestForm::radioButtonPriceMore->Checked;
    std::string gridName, gridCountry, gridDate, gridNumber1, gridNumber2, gridNumber3, gridNumber4, gridNumber5, gridPrice;
    
    char* char_gridCountry, * char_country; 
    char * char_gridDate, * char_date;
    int int_gridPrice, int_price;

    String^ GridName;
    String^ GridCountry;
    String^ GridDate;
    String^ GridNumber1;
    String^ GridNumber2;
    String^ GridNumber3;
    String^ GridNumber4;
    String^ GridNumber5;
    String^ GridPrice;
    //MessageBox::Show("_" + Name + "_" + Country + "_" + Date + "_" + Number + "_" + Price + "_");
    if (name == "" && country == "" && date == "    .  ." && number == "" && price == "") {
        MessageBox::Show("�� ������ ������� �� ������, �������� ��� ������");
        return System::Void();
    }
    bool row_is_true;
    for (int row = 0; row < count_row; row++) {
        row_is_true = true;
        GridName = Convert::ToString(dataGridViewRequest->Rows[row]->Cells[1]->Value);
        GridCountry = Convert::ToString(dataGridViewRequest->Rows[row]->Cells[2]->Value);
        GridDate = Convert::ToString(dataGridViewRequest->Rows[row]->Cells[3]->Value);
        GridNumber1 = Convert::ToString(dataGridViewRequest->Rows[row]->Cells[4]->Value);
        GridNumber2 = Convert::ToString(dataGridViewRequest->Rows[row]->Cells[5]->Value);
        GridNumber3 = Convert::ToString(dataGridViewRequest->Rows[row]->Cells[6]->Value);
        GridNumber4 = Convert::ToString(dataGridViewRequest->Rows[row]->Cells[7]->Value);
        GridNumber5 = Convert::ToString(dataGridViewRequest->Rows[row]->Cells[8]->Value);
        GridPrice = Convert::ToString(dataGridViewRequest->Rows[row]->Cells[9]->Value);
        Convert_String_to_string(GridName, gridName);
        Convert_String_to_string(GridCountry, gridCountry);
        char_gridCountry = Convert_String_to_char(GridCountry);
        char_country = Convert_String_to_char(Country);
        Convert_String_to_string(GridDate, gridDate);
        char_gridDate = Convert_String_to_char(GridDate);
        char_date = Convert_String_to_char(Date);
        Convert_String_to_string(GridNumber1, gridNumber1);
        Convert_String_to_string(GridNumber2, gridNumber2);
        Convert_String_to_string(GridNumber3, gridNumber3);
        Convert_String_to_string(GridNumber4, gridNumber4);
        Convert_String_to_string(GridNumber5, gridNumber5);
        Convert_String_to_string(GridPrice, gridPrice);
       

        if(name != ""){
            if (gridName.find(name) == -1) row_is_true = false;
        }
        if (country != "") {
            if (strcmp(char_gridCountry, char_country) != 0) row_is_true = false;
        }
        if (date != "") {
            if (strcmp(char_gridDate, char_date) <= 0) row_is_true = false;
        }
        if (number != "") {
            if (number != gridNumber1 && number != gridNumber2 && number != gridNumber3 && number != gridNumber4 && number != gridNumber5) row_is_true = false;
        }

        if (price != "") {
            int_gridPrice = std::stoi(gridPrice);
            int_price = std::stoi(price);
            if (PriceLess){
                if (int_gridPrice >= int_price) row_is_true = false;
            }
            else if (PriceMore) {
                if (int_gridPrice <= int_price) row_is_true = false;
            }
        }
        if (!row_is_true) {
            dataGridViewRequest->Rows->Remove(dataGridViewRequest->Rows[row]);
            count_row--;
            row--;
        }
    }
    dataGridViewRequest->Refresh();
    // dataGridViewRequest->Rows->Remove(dataGridViewRequest->Rows[1]);
    // dataGridViewRequest->Refresh();
    return System::Void();
}
System::Void PharmacyDB::RequestForm::RequestForm_Load(System::Object^ sender, System::EventArgs^ e)
{
    char fileName[] = "medicines.txt"; //�������� ����
    int countData = get_count_data(fileName);//������� ���-�� ��������
    Header();
    //MessageBox::Show(Convert_string_to_String(std::to_string(countData)));
    Show_meds(countData);
    return System::Void();
}
System::Void PharmacyDB::RequestForm::�����ToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)
{
    MessageBoxButtons buttons = MessageBoxButtons::YesNo;
    if (MessageBox::Show("�� ����� ������ ����� �� ���������?", "�����������", buttons) == System::Windows::Forms::DialogResult::Yes) {
        Application::Exit();
    }
    return System::Void();
}
System::Void PharmacyDB::RequestForm::�����ToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)
{
    MainForm^ mainForm = gcnew MainForm();//�������� �����
    this->Hide();//������� �������� �����
    mainForm->Show();//�������� ������� �����
    return System::Void();
}

System::Void PharmacyDB::RequestForm::�������ToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)
{
    MessageBox::Show("�� ������ ����� ���������, ����� �������.\n�� ����� ���� �������, ������� ����� ��� ��� ����� ���������.\n����� �� �������� �������������� �� ������ ������ � ������.\n������-������������� - �� ������� ����������.\n���� - ����������� ���� ������������ ���������.\n����� ������ - �� ������� ���������� � ����� �� ���� �����.\n���� ������������ �������� ������.", "�������");
    return System::Void();
}

