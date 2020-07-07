#include "Functions.h"
#include "AdminInterface.h"


#define MAX_MEDICAMENTS 100 //������������ ���������� ��������
#define MAX_LENGTH 50 //������������ ����� ������
#define MAX_PHARMACIES 5 //������������ ���-�� �����, ������� � ������� ���������
#define NUM_KEYS_TABLE 6 //���-�� ������ ������� (���������� ��������)
#define NUM_SORT_FIELDS 5 //���-�� ����������� ��������
#define NUM_EDIT_FIELDS 5 //���-�� ������������� ��������
#define LENGTH_DATE 10 //����� ���� (2000.09.14)
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

////////////////////////////////////////////////////////////////////////////////////////////////////
	/*med - ��������� ��� ���������� ������, �������������� ������ new_med - ��� ������ ������ ��� ��������������*/
	std::string name;
	struct {
		int id; //����
		std::string name, //��������
		country, //������-�������������
		date; //���� ������������
		int pharmacy_number[MAX_PHARMACIES]; //������ �����
		int price; //������������ ����
	} med, new_med;
	if (_countData == 0)
	{
		MessageBox::Show("������� � ����� ���", "��������������");
	}
	else {
		std::string line;
		std::ifstream in(fileName); // �������� ���� ��� ������
		int cell_num=0;
		if (in.is_open())
		{
			getline(in, line);
			//MessageBox::Show(Convert_string_to_String(line), "���_��");
			while (getline(in, line, ' '))
			{
				cell_num++;
				//dataGridViewAdmin->
				try{
					std::cout << line << std::endl;
					MessageBox::Show(Convert_string_to_String(line), "������");
				}
				catch (int exception){
					in.close();
				}

			}
		}
		else
			MessageBox::Show("���� �� ��������", "������");//���� �� �������� 
		in.close();     // ��������� ����
		/*file = fopen(fileName, "r+");
		if (file == NULL)
			MessageBox::Show("���� �� ��������", "������");//���� �� �������� 
		fseek(file, 0L, SEEK_SET);
		fscanf(file, "%5d", &_countData);
		DataGridView^ dataGridView1 = gcnew DataGridView();
		for (int i = 0; i < _countData; i++) {
fscanf(file, "%5d", &med.id);
			//������ ����� ��� ������
			
			fscanf(file, "%25s", &name);
			printf("\n\n\n\n\n\n\n\n\n%d\n\n\n\n\n\n\n\n\n\n\n\n", name);
			fscanf(file, "%25s", &med.country);
			fscanf(file, "%25s", &med.date);
			MessageBox::Show(Convert::ToString(med.id) + " " + Convert_string_to_String(name) + " " + Convert_string_to_String(med.country) + " " + Convert_string_to_String(med.date), Convert::ToString(i));
			for (int j = 0; j < MAX_PHARMACIES; j++)
				fscanf(file, "%5d", &med.pharmacy_number[j]);
			fscanf(file, "%10d\n", &med.price);

			
		}*/
		//fclose(file);
	}
	return 0;
}
int save_meds_line(int id, std::string name, std::string country, std::string date, int pharmacy_number[MAX_PHARMACIES], int price) {
	std::string fileName = "AddRecord.txt";
	//������� ����� ��� ������ � ����
	std::ofstream record(fileName);

	if (record) {
		record << id << ";";
		record << name << ";";
		record << country << ";";
		record << date << ";";
		record << pharmacy_number[0] << ";";
		record << pharmacy_number[1] << ";";
		record << pharmacy_number[2] << ";";
		record << pharmacy_number[3] << ";";
		record << pharmacy_number[4] << ";";
		record << price << ";";
		record << std::endl;
	}
	else
		MessageBox::Show("������ �������� �����", "������");
	MessageBox::Show("������ ��������� � ����", "�������");

	record.close();
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
