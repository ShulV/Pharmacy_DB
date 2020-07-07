#include "AdminInterface.h"
#include "MainForm.h"
#include "Functions.h"
#include "AddForm.h"

System::Void PharmacyDB::AdminInterface::����������������ToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)
{
    Application::Exit();
    return System::Void();
}

System::Void PharmacyDB::AdminInterface::��������������ToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)
{
    MainForm^ mainForm = gcnew MainForm();//�������� �����
    this->Hide();//������� �������� �����
    mainForm->Show();//�������� ������� �����
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
    c2->HeaderText = "��������";
    c2->Width = 450;
    dataGridViewAdmin->Columns->Add(c2);

    DataGridViewTextBoxColumn^ c3 = gcnew DataGridViewTextBoxColumn();
    c3->Name = "Country";
    c3->HeaderText = "������-�������������";
    c3->Width = 150;
    dataGridViewAdmin->Columns->Add(c3);
    DataGridViewTextBoxColumn^ c4 = gcnew DataGridViewTextBoxColumn();
    c4->Name = "Date";
    c4->HeaderText = "���� ������������";
    c4->Width = 150;
    dataGridViewAdmin->Columns->Add(c4);

    DataGridViewTextBoxColumn^ c5 = gcnew DataGridViewTextBoxColumn();
    c5->Name = "PharmacyNumbers";
    c5->HeaderText = "������ 1";
    c5->Width = 50;
    dataGridViewAdmin->Columns->Add(c5);

    DataGridViewTextBoxColumn^ c6 = gcnew DataGridViewTextBoxColumn();
    c6->Name = "PharmacyNumbers";
    c6->HeaderText = "������ 2";
    c6->Width = 50;
    dataGridViewAdmin->Columns->Add(c6);

    DataGridViewTextBoxColumn^ c7 = gcnew DataGridViewTextBoxColumn();
    c7->Name = "PharmacyNumbers";
    c7->HeaderText = "������ 3";
    c7->Width = 50;
    dataGridViewAdmin->Columns->Add(c7);

    DataGridViewTextBoxColumn^ c8 = gcnew DataGridViewTextBoxColumn();
    c8->Name = "PharmacyNumbers";
    c8->HeaderText = "������ 4";
    c8->Width = 50;
    dataGridViewAdmin->Columns->Add(c8);

    DataGridViewTextBoxColumn^ c9 = gcnew DataGridViewTextBoxColumn();
    c9->Name = "PharmacyNumbers";
    c9->HeaderText = "������ 5";
    c9->Width = 50;
    dataGridViewAdmin->Columns->Add(c9);

    DataGridViewTextBoxColumn^ c10 = gcnew DataGridViewTextBoxColumn();
    c10->Name = "Price";
    c10->HeaderText = "����";
    c10->Width = 150;
    dataGridViewAdmin->Columns->Add(c10);

    dataGridViewAdmin->AutoResizeColumns();
    dataGridViewAdmin->TopLeftHeaderCell->Value = "������";
}
int countData = 0;//������� ���-�� ��������
void PharmacyDB::AdminInterface::Show()
{
    FILE* file;//�������� ����
   
    char fileName[] = "medicines.txt"; //�������� ����
    countData = get_count_data(fileName);
   //MessageBox::Show(Convert::ToString(countData),"window");
    //show_meds(countData);
}
// ������� ������ ���� ��������
char fileName[] = "medicines.txt"; //�������� ����
FILE* file;//�������� ����
#define MAX_MEDICAMENTS 100 //������������ ���������� ��������
#define MAX_LENGTH 50 //������������ ����� ������
#define MAX_PHARMACIES 5 //������������ ���-�� �����, ������� � ������� ���������
#define NUM_KEYS_TABLE 6 //���-�� ������ ������� (���������� ��������)
#define NUM_SORT_FIELDS 5 //���-�� ����������� ��������
#define NUM_EDIT_FIELDS 5 //���-�� ������������� ��������
#define LENGTH_DATE 10 //����� ���� (2000.09.14)
////////////////////////////////////////////////////////////////////////////////////////////////////
/*med - ��������� ��� ���������� ������, �������������� ������ new_med - ��� ������ ������ ��� ��������������*/
struct {
	int id; //����
	std::string name, //��������
		country, //������-�������������
		date; //���� ������������
	int pharmacy_number[MAX_PHARMACIES]; //������ �����
	int price; //������������ ����
} med, new_med;

void PharmacyDB::AdminInterface::Show_meds(int _countData)
{
		if (_countData == 0)
		{
			MessageBox::Show("������� � ����� ���", "��������������");
		}
		else {
            dataGridViewAdmin->RowCount = countData + 1;
            dataGridViewAdmin->ColumnCount = 10;
			std::string line;
			std::ifstream in(fileName); // �������� ���� ��� ������
            int cell_num = 0, count_row = 0;
			if (in.is_open())
			{
				getline(in, line);
				//MessageBox::Show(Convert_string_to_String(line), "���_��");
				while (getline(in, line, ';'))
				{
					
                    if (cell_num > 9) {
                        cell_num = 0;
                        count_row++;
                    }
                    dataGridViewAdmin->Rows[count_row]->Cells[cell_num]->Value = Convert_string_to_String(line);
						try {
						std::cout << line << std::endl;
						//MessageBox::Show(Convert_string_to_String(line), "������");
					}
					catch (int exception) {
						in.close();
					}
                    cell_num++;
				}
			}
			else
				MessageBox::Show("���� �� ��������", "������");//���� �� �������� 
			in.close();     // ��������� ����
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

System::Void PharmacyDB::AdminInterface::��������������ToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)
{
    return System::Void();
}

System::Void PharmacyDB::AdminInterface::buttonAddLine_Click(System::Object^ sender, System::EventArgs^ e)
{
    AddForm^ addForm = gcnew AddForm();//�������� �����
    //this->Hide();//������� �������� �����
    addForm->Show();//�������� ������� �����
    return System::Void();
}


