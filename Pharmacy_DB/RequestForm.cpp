#include "RequestForm.h"
#include "Functions.h"




void PharmacyDB::RequestForm::Header()
{
    DataGridViewTextBoxColumn^ c1 = gcnew DataGridViewTextBoxColumn();
    c1->Name = "Id";
    c1->HeaderText = "id";
    c1->Width = 150;
    dataGridViewRequest->Columns->Add(c1);

    DataGridViewTextBoxColumn^ c2 = gcnew DataGridViewTextBoxColumn();
    c2->Name = "Name";
    c2->HeaderText = "Название";
    c2->Width = 450;
    dataGridViewRequest->Columns->Add(c2);

    DataGridViewTextBoxColumn^ c3 = gcnew DataGridViewTextBoxColumn();
    c3->Name = "Country";
    c3->HeaderText = "Страна-производитель";
    c3->Width = 150;
    dataGridViewRequest->Columns->Add(c3);
    DataGridViewTextBoxColumn^ c4 = gcnew DataGridViewTextBoxColumn();
    c4->Name = "Date";
    c4->HeaderText = "Дата производства";
    c4->Width = 150;
    dataGridViewRequest->Columns->Add(c4);

    DataGridViewTextBoxColumn^ c5 = gcnew DataGridViewTextBoxColumn();
    c5->Name = "PharmacyNumbers";
    c5->HeaderText = "аптека 1";
    c5->Width = 50;
    dataGridViewRequest->Columns->Add(c5);

    DataGridViewTextBoxColumn^ c6 = gcnew DataGridViewTextBoxColumn();
    c6->Name = "PharmacyNumbers";
    c6->HeaderText = "аптека 2";
    c6->Width = 50;
    dataGridViewRequest->Columns->Add(c6);

    DataGridViewTextBoxColumn^ c7 = gcnew DataGridViewTextBoxColumn();
    c7->Name = "PharmacyNumbers";
    c7->HeaderText = "аптека 3";
    c7->Width = 50;
    dataGridViewRequest->Columns->Add(c7);

    DataGridViewTextBoxColumn^ c8 = gcnew DataGridViewTextBoxColumn();
    c8->Name = "PharmacyNumbers";
    c8->HeaderText = "аптека 4";
    c8->Width = 50;
    dataGridViewRequest->Columns->Add(c8);

    DataGridViewTextBoxColumn^ c9 = gcnew DataGridViewTextBoxColumn();
    c9->Name = "PharmacyNumbers";
    c9->HeaderText = "аптека 5";
    c9->Width = 50;
    dataGridViewRequest->Columns->Add(c9);

    DataGridViewTextBoxColumn^ c10 = gcnew DataGridViewTextBoxColumn();
    c10->Name = "Price";
    c10->HeaderText = "Цена";
    c10->Width = 150;
    dataGridViewRequest->Columns->Add(c10);

    dataGridViewRequest->AutoResizeColumns();
    dataGridViewRequest->TopLeftHeaderCell->Value = "Данные по запросу";
}
void PharmacyDB::RequestForm::Show_meds(int _countData)
{
    int countData = 0;//текущее кол-во лекарств
    char fileName[] = "medicines.txt"; //основной файл
    if (_countData == 0)
    {
        MessageBox::Show("Записей в файле нет", "Предупреждение");
    }
    else {
        dataGridViewRequest->RowCount = _countData + 1;
        dataGridViewRequest->ColumnCount = 10;
        std::string line;
        std::ifstream in(fileName); // окрываем файл для чтения
       //int count_row = 0;
       //int cell_num = 0;
        if (in.is_open())
        {
            getline(in, line);
            for (int row = 0; row < _countData; row++) {
                for (int cell = 0; cell < 10; cell++) {
                    getline(in, line, ';');
                    dataGridViewRequest->Rows[row]->Cells[cell]->Value = Convert_string_to_String(line);
                }
            }
        }
        else
            MessageBox::Show("Файл не открылся", "Ошибка");//Файл не открылся 
        in.close();     // закрываем файл
    }
    return;
}

System::Void PharmacyDB::RequestForm::RequestForm_Shown(System::Object^ sender, System::EventArgs^ e)
{
    char fileName[] = "medicines.txt"; //основной файл


    int countData = get_count_data(fileName);//текущее кол-во лекарств

   
    Header();
    //MessageBox::Show(Convert_string_to_String(std::to_string(countData)));
    Show_meds(countData);
    return System::Void();
}

System::Void PharmacyDB::RequestForm::buttonShowDataRequest_Click(System::Object^ sender, System::EventArgs^ e)
{
    return System::Void();
}

