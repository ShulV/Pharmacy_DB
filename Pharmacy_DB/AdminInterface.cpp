#include "AdminInterface.h"
#include "MainForm.h"
#include "Functions.h"

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
    c5->HeaderText = "������ �����";
    c5->Width = 250;
    dataGridViewAdmin->Columns->Add(c5);

    DataGridViewTextBoxColumn^ c6 = gcnew DataGridViewTextBoxColumn();
    c6->Name = "Price";
    c6->HeaderText = "����";
    c6->Width = 150;
    dataGridViewAdmin->Columns->Add(c6);

    dataGridViewAdmin->AutoResizeColumns();
    dataGridViewAdmin->TopLeftHeaderCell->Value = "������";
}

void PharmacyDB::AdminInterface::Show()
{
    throw gcnew System::NotImplementedException();
}

System::Void PharmacyDB::AdminInterface::AdminInterface_Shown(System::Object^ sender, System::EventArgs^ e)
{
   // countData = get_count_data(fileName);
    //MessageBox::Show(Convert::ToString(countData),"window");
    return System::Void();
}
