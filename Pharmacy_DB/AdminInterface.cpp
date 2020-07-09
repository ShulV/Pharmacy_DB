#include "AdminInterface.h"
#include "MainForm.h"
#include "Functions.h"
#include "AddForm.h"
#include "EditForm.h"

System::Void PharmacyDB::AdminInterface::выйтиИзПрограммыToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)
{
    Application::Exit();
    return System::Void();
}
System::Void PharmacyDB::AdminInterface::вернутьсяНазадToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)
{
    MainForm^ mainForm = gcnew MainForm();//создание формы
    this->Hide();//скрытие текующей формы
    mainForm->Show();//открытие главной формы
    return System::Void();
}
void PharmacyDB::AdminInterface::Header()
{
    DataGridViewTextBoxColumn^ c1 = gcnew DataGridViewTextBoxColumn();
    c1->Name = "Id";
    c1->HeaderText = "id";
    c1->Width = 150;
    dataGridViewAdmin->Columns->Add(c1);

    DataGridViewTextBoxColumn^ c2 = gcnew DataGridViewTextBoxColumn();
    c2->Name = "Name";
    c2->HeaderText = "Название";
    c2->Width = 450;
    dataGridViewAdmin->Columns->Add(c2);

    DataGridViewTextBoxColumn^ c3 = gcnew DataGridViewTextBoxColumn();
    c3->Name = "Country";
    c3->HeaderText = "Страна-производитель";
    c3->Width = 150;
    dataGridViewAdmin->Columns->Add(c3);
    DataGridViewTextBoxColumn^ c4 = gcnew DataGridViewTextBoxColumn();
    c4->Name = "Date";
    c4->HeaderText = "Дата производства";
    c4->Width = 150;
    dataGridViewAdmin->Columns->Add(c4);

    DataGridViewTextBoxColumn^ c5 = gcnew DataGridViewTextBoxColumn();
    c5->Name = "PharmacyNumbers";
    c5->HeaderText = "аптека 1";
    c5->Width = 50;
    dataGridViewAdmin->Columns->Add(c5);

    DataGridViewTextBoxColumn^ c6 = gcnew DataGridViewTextBoxColumn();
    c6->Name = "PharmacyNumbers";
    c6->HeaderText = "аптека 2";
    c6->Width = 50;
    dataGridViewAdmin->Columns->Add(c6);

    DataGridViewTextBoxColumn^ c7 = gcnew DataGridViewTextBoxColumn();
    c7->Name = "PharmacyNumbers";
    c7->HeaderText = "аптека 3";
    c7->Width = 50;
    dataGridViewAdmin->Columns->Add(c7);

    DataGridViewTextBoxColumn^ c8 = gcnew DataGridViewTextBoxColumn();
    c8->Name = "PharmacyNumbers";
    c8->HeaderText = "аптека 4";
    c8->Width = 50;
    dataGridViewAdmin->Columns->Add(c8);

    DataGridViewTextBoxColumn^ c9 = gcnew DataGridViewTextBoxColumn();
    c9->Name = "PharmacyNumbers";
    c9->HeaderText = "аптека 5";
    c9->Width = 50;
    dataGridViewAdmin->Columns->Add(c9);

    DataGridViewTextBoxColumn^ c10 = gcnew DataGridViewTextBoxColumn();
    c10->Name = "Price";
    c10->HeaderText = "Цена";
    c10->Width = 150;
    dataGridViewAdmin->Columns->Add(c10);

    dataGridViewAdmin->AutoResizeColumns();
    dataGridViewAdmin->TopLeftHeaderCell->Value = "Данные";
}
int countData = 0;//текущее кол-во лекарств
char fileName[] = "medicines.txt"; //основной файл
FILE* file;//основной файл
#define MAX_MEDICAMENTS 100 //максимальное количество лекарств
#define MAX_LENGTH 50 //максимальная длина текста
#define MAX_PHARMACIES 5 //максимальное кол-во аптек, имеющих в наличии лекраство
#define NUM_KEYS_TABLE 6 //кол-во ключей таблицы (заголовков столбцов)
#define NUM_SORT_FIELDS 5 //кол-во сортируемых столбцов
#define NUM_EDIT_FIELDS 5 //кол-во редактируемых столбцов
#define LENGTH_DATE 10 //длина даты (2000.09.14)
////////////////////////////////////////////////////////////////////////////////////////////////////
struct {
	int id; //ключ
	std::string name, //название
		country, //страна-производитель
		date; //дата производства
	int pharmacy_number[MAX_PHARMACIES]; //номера аптек
	int price; //максимальная цена
} med;
/**/
void PharmacyDB::AdminInterface::Show_meds(int _countData)
{
		if (_countData == 0)
		{
			MessageBox::Show("Записей в файле нет", "Предупреждение");
		}
		else {
            dataGridViewAdmin->RowCount = countData + 1;
            dataGridViewAdmin->ColumnCount = 10;
			std::string line;
			std::ifstream in(fileName); // окрываем файл для чтения
            int cell_num = 0, count_row = 0;
			if (in.is_open())
			{
				getline(in, line);
				//MessageBox::Show(Convert_string_to_String(line), "КОЛ_ВО");
				while (getline(in, line, ';'))
				{
					
                    if (cell_num > 9) {
                        cell_num = 0;
                        count_row++;
                    }
                    dataGridViewAdmin->Rows[count_row]->Cells[cell_num]->Value = Convert_string_to_String(line);
                    /*	try {
						std::cout << line << std::endl;
						MessageBox::Show(Convert_string_to_String(line), "ДАННЫЕ");
					}
					catch (int exception) {
						in.close();
					}*/
					
                    cell_num++;
				}
			}
			else
				MessageBox::Show("Файл не открылся", "Ошибка");//Файл не открылся 
			in.close();     // закрываем файл
		}
		return;
}
void PharmacyDB::AdminInterface::Save_data_grid_in_file(char* fileName)
{
    if (AdminInterface::dataGridViewAdmin->Rows->Count == 0)
    {
        MessageBox::Show("Записей в файле нет", "Предупреждение");
    }
    else {
        countData = dataGridViewAdmin->RowCount - 1;
        std::ofstream file(fileName);
        std::string cell_data;
        if (file) {
            file << countData << std::endl;
            
            for (int row = 0; row < countData; row++)
                for (int cell = 0; cell < 10; cell++)
                {
                    //MessageBox::Show(dataGridViewAdmin->Rows[row]->Cells[cell]->Value->ToString(), "LLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLL");
                    Convert_String_to_string(dataGridViewAdmin->Rows[row]->Cells[cell]->Value->ToString(), cell_data);
                    file << cell_data << ";";
                }
            
            
            file << std::endl;
        }
        else
            MessageBox::Show("Файл не открылся", "Ошибка");//Файл не открылся 
        file.close();     // закрываем файл
    }        
}
System::Void PharmacyDB::AdminInterface::AdminInterface_Shown(System::Object^ sender, System::EventArgs^ e)
{
    std::string add_fileName = "AddRecord.txt";
    std::string edit_fileName = "EditRecord.txt";
    std::string fileName_ = "medicines.txt";
    Header();
    Show_meds(countData = get_count_data(fileName));
    if (!file_is_empty(edit_fileName)) {
        MessageBox::Show("file_is__not_empty", "Предупреждение");
        std::string line;
        std::ifstream in(edit_fileName); // окрываем файл для чтения
        if (in.is_open())
        {
            std::string row;
            getline(in, row, ';');
            int cell = 0;
            while (getline(in, line, ';')&&cell<9)
            {
                cell++;
                dataGridViewAdmin->Rows[atoi(row.c_str())]->Cells[cell]->Value = Convert_string_to_String(line);
                MessageBox::Show(Convert_string_to_String(line)+" "+cell, "Предупреждение");
            }
        }
        Save_data_grid_in_file(fileName);
    }

    ClearFile(add_fileName);
    ClearFile(edit_fileName);
    //MessageBox::Show("SHOWN", "Предупреждение");
   
    //int row_count = this->dataGridViewAdmin->Rows->Count - 2;
    //AdminInterface::numericUpDownRecordId->Maximum = row_count;
    return System::Void();
}
System::Void PharmacyDB::AdminInterface::добавитьДанныеToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)
{
    return System::Void();
}
System::Void PharmacyDB::AdminInterface::buttonAddLine_Click(System::Object^ sender, System::EventArgs^ e)
{
    AddForm^ addForm = gcnew AddForm();//создание формы
    this->Hide();//скрытие текующей формы
    addForm->Show();//открытие главной формы
    return System::Void();
}
System::Void PharmacyDB::AdminInterface::buttonEditLine_Click(System::Object^ sender, System::EventArgs^ e)
{
    std::string edit_fileName = "EditRecord.txt";


    String^ Id = Convert::ToString(dataGridViewAdmin->CurrentRow->Cells[0]->Value);
    String^ Name = Convert::ToString(dataGridViewAdmin->CurrentRow->Cells[1]->Value);
    String^ Country = Convert::ToString(dataGridViewAdmin->CurrentRow->Cells[2]->Value);
    String^ Date = Convert::ToString(dataGridViewAdmin->CurrentRow->Cells[3]->Value);
    String^ Pharmacy_number1 = Convert::ToString(dataGridViewAdmin->CurrentRow->Cells[4]->Value);
    String^ Pharmacy_number2 = Convert::ToString(dataGridViewAdmin->CurrentRow->Cells[5]->Value);
    String^ Pharmacy_number3 = Convert::ToString(dataGridViewAdmin->CurrentRow->Cells[6]->Value);
    String^ Pharmacy_number4 = Convert::ToString(dataGridViewAdmin->CurrentRow->Cells[7]->Value);
    String^ Pharmacy_number5 = Convert::ToString(dataGridViewAdmin->CurrentRow->Cells[8]->Value);
    String^ Price = Convert::ToString(dataGridViewAdmin->CurrentRow->Cells[9]->Value);
    std::string id;
    Convert_String_to_string(Id, id);
    std::string name;
    Convert_String_to_string(Name, name);
    std::string country;
    Convert_String_to_string(Country, country);
    std::string date;
    Convert_String_to_string(Date, date);
    std::string pharmacy_number[MAX_PHARMACIES];
    Convert_String_to_string(Pharmacy_number1, pharmacy_number[0]);
    Convert_String_to_string(Pharmacy_number2, pharmacy_number[1]);
    Convert_String_to_string(Pharmacy_number3, pharmacy_number[2]);
    Convert_String_to_string(Pharmacy_number4, pharmacy_number[3]);
    Convert_String_to_string(Pharmacy_number5, pharmacy_number[4]);
    std::string price;
    Convert_String_to_string(Price, price);
   

    save_meds_line_in_adititional_file(id, name, country, date, pharmacy_number, price, edit_fileName);
   
    EditForm^ editForm = gcnew  EditForm();//создание формы
    this->Hide();//скрытие текующей формы
    editForm->Show();//открытие главной формы
    return System::Void();
}
System::Void PharmacyDB::AdminInterface::buttonSaveData_Click(System::Object^ sender, System::EventArgs^ e)
{
    Save_data_grid_in_file(fileName);
    return System::Void();
}
System::Void PharmacyDB::AdminInterface::AdminInterface_Load(System::Object^ sender, System::EventArgs^ e)
{
    return System::Void();
}
System::Void PharmacyDB::AdminInterface::buttonDownload_Click(System::Object^ sender, System::EventArgs^ e)
{
    
    return System::Void();
}


