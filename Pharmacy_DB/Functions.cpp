#include "Functions.h"




int get_count_data(char* fileName_) { // ������� ��������� ���-�� �������
FILE* file;//�������� ����
int countData_= 0;//������� ���-�� ��������
//MessageBox::Show(Convert::ToString(countData_), "1");
file = fopen(fileName_, "a");//�������� ����� �� ������, ���� �� �� ������
fclose(file);
file = fopen(fileName_, "r+");//������ ���-�� ������� ��� ������ ���� ��� �� ����������
	if (file == NULL)
		MessageBox::Show("���� �� ��������", "������");// ���� �� �������� 
	rewind(file);
	fscanf(file, "%5d", &countData_);
	if (countData_ == NULL) fprintf(file, "%5d\n", 0); //���������� 0 (���-�� �������) � ������
	else {
		rewind(file);
		fscanf(file, "%5d", &countData_);
	}
fclose(file);
return countData_;
}
int show_meds(int _countData) { // ������� ������ ���� ��������
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
		std::string name; //��������
		char country[MAX_LENGTH]; //������-�������������
		char date[MAX_LENGTH]; //���� ������������
		int pharmacy_number[MAX_PHARMACIES]; //������ �����
		int price; //������������ ����
	} med, new_med;
	if (_countData == 0)
	{
		MessageBox::Show("������� � ����� ���", "��������������");
	}
	else {
		file = fopen(fileName, "r+");
		if (file == NULL)
			MessageBox::Show("���� �� ��������", "������");/* ���� �� �������� */
		fseek(file, 0L, SEEK_SET);
		fscanf(file, "%5d", &_countData);
		DataGridView^ dataGridView1 = gcnew DataGridView();

		for (int i = 0; i < _countData; i++) {
			//dataGridView1->RowContextMenuStripChanged[i]->Value = Convert::ToString(med.id);
			fscanf(file, "%5d", &med.id);
			MessageBox::Show(Convert::ToString(med.id), Convert::ToString(i));
			fscanf(file, "%25s", &med.name);
			MessageBox::Show(Convert_string_to_String(med.name), Convert::ToString(i));
			fscanf(file, "%25s", &med.country);
			fscanf(file, "%25s", &med.date);
			for (int j = 0; j < MAX_PHARMACIES; j++)
				fscanf(file, "%5d", &med.pharmacy_number[j]);
			fscanf(file, "%10d\n", &med.price);
		}
		fclose(file);
	}
	return 0;
}


/////////////////////////////////////////////////////////////////////////////////////
/*���������� �������*/
/*������������ System::string ^ � std::string*/
std::string& Convert_String_to_string(String^ s, std::string& os) {
	using namespace Runtime::InteropServices;
	const char* chars = (const char*)(Marshal::StringToHGlobalAnsi(s)).ToPointer();
	os = chars;
	Marshal::FreeHGlobal(IntPtr((void*)chars));

	return os;
}
/*������������ std::string � System::string^*/
std::string& Convert_String_to_string(String^ s) {
	std::string os;
	using namespace Runtime::InteropServices;
	const char* chars = (const char*)(Marshal::StringToHGlobalAnsi(s)).ToPointer();
	os = chars;
	Marshal::FreeHGlobal(IntPtr((void*)chars));
	return os;
}
/*������������ std::string � System::string^*/
String^ Convert_string_to_String(std::string& os, String^ s) {
	s = gcnew String(os.c_str()); //������������
	return s;
}
/*������������ std::string � System::string^*/
String^ Convert_string_to_String(std::string& os) {
	String^ s = gcnew String(os.c_str());//�����������
	return s;
}
/*������������ char* � System::String^*/
String^ Convert_char_to_String(char ch) {
	char* chr = new char();
	chr[0] = ch;
	String^ str;
	for (int i = 0; chr[i] != '\0'; i++) {
		str += wchar_t(ch);
	}
	return str;
}
/*������������ char* � System::String^*/
String^ Convert_char_to_String(char* ch) {
	char* chr = new char();
	chr = ch;
	String^ str;
	for (int i = 0; chr[i] != '\0'; i++) {
		str += wchar_t(ch);
	}
	return str;
}
/*������������ System::String^ � char**/
char* Convert_String_to_char(String^ string) {
	using namespace Runtime::InteropServices;
	return (char*)(void*)Marshal::StringToHGlobalAnsi(string);
}
