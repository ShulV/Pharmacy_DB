#include "AdminInterface.h"
#include "MainForm.h"
#include "Functions.h"
#include "AddForm.h"

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
void PharmacyDB::AdminInterface::Show()
{
    FILE* file;//основной файл
   
    char fileName[] = "medicines.txt"; //основной файл
    countData = get_count_data(fileName);
   //MessageBox::Show(Convert::ToString(countData),"window");
    //show_meds(countData);
}
// ФУНКЦИЯ ВЫВОДА ВСЕХ ЛЕКАРСТВ
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
/*med - структура для добавления записи, редактирования записи new_med - для записи данных при редактировании*/
struct {
	int id; //ключ
	std::string name, //название
		country, //страна-производитель
		date; //дата производства
	int pharmacy_number[MAX_PHARMACIES]; //номера аптек
	int price; //максимальная цена
} med, new_med;

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
						try {
						std::cout << line << std::endl;
						//MessageBox::Show(Convert_string_to_String(line), "ДАННЫЕ");
					}
					catch (int exception) {
						in.close();
					}
                    cell_num++;
				}
			}
			else
				MessageBox::Show("Файл не открылся", "Ошибка");//Файл не открылся 
			in.close();     // закрываем файл
		}
		return;
}



System::Void PharmacyDB::AdminInterface::AdminInterface_Shown(System::Object^ sender, System::EventArgs^ e)
{
    Header();
    Show();
    Show_meds(countData);
    return System::Void();
}

System::Void PharmacyDB::AdminInterface::добавитьДанныеToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)
{
    return System::Void();
}

System::Void PharmacyDB::AdminInterface::buttonAddLine_Click(System::Object^ sender, System::EventArgs^ e)
{
    AddForm^ addForm = gcnew AddForm();//создание формы
    //this->Hide();//скрытие текующей формы
    addForm->Show();//открытие главной формы
    return System::Void();
}


