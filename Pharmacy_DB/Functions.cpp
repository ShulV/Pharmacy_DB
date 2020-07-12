#include "Functions.h"
#include "AdminInterface.h"


#define MAX_MEDICAMENTS 100 //������������ ���������� ��������
#define MAX_LENGTH 50 //������������ ����� ������
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
	fscanf(file, "%d", &countData_);
	if (countData_ == NULL) fprintf(file, "%d\n", 0); //���������� 0 (���-�� �������) � ������
	else {
		rewind(file);
		fscanf(file, "%d", &countData_);
	}
fclose(file);
return countData_;
}
int show_meds(int _countData) { // ������� ������ ���� ��������
	char fileName[] = "medicines.txt"; //�������� ����
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
			}
		}
		else
			MessageBox::Show("���� �� ��������", "������");//���� �� �������� 
		in.close();     // ��������� ����
	}
	return 0;
}
int save_meds_line_in_adititional_file(std::string id, std::string name, std::string country, std::string date, std::string pharmacy_number[MAX_PHARMACIES], std::string price, std::string fileName) {//������� ���������� ������ ����� ������ � ����
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
	//MessageBox::Show("������ ��������� � ����", "�������");

	record.close();
	return 0;
}
int add_line_from_adititional_file_to_main_file(char* fileNameFrom, char* fileNameTo)
{
	//������ ����� ������
	std::string fileName = fileNameFrom;
	//������� ����� ��� ������ �� �����
	std::ifstream fileRecord(fileName, std::ifstream::in);
	std::string line;
	if (fileRecord) {
		
		getline(fileRecord, line);
	}
	else {
		MessageBox::Show("������ �������� �����", "������");
		return 1;
	}
	
	fileRecord.close();

	int CountData = get_count_data(fileNameTo);
	//������ ����� ������ � �����
	std::ofstream file (fileNameTo, std::ios::app);
	if (file)
	{
		file << line << std::endl;
	}	
	else
	{
		MessageBox::Show("������ �������� �����", "������");
		return 1;
	}
	file.close();
	std::ofstream file_(fileNameTo, std::ios_base::in | std::ios_base::out);
	if (file_)
	{
		file_.seekp(0, std::ios::beg);
		file_ << ++CountData << std::endl;
	}
	else
	{
		MessageBox::Show("������ �������� �����", "������");
		return 1;
	}
	file_.close();
	MessageBox::Show("������ ���������", "�������");

	return 0;
}
void ClearFile(std::string filename) {//������� �����
	std::ofstream file(filename, std::ios::out | std::ios::trunc);
	file.close();
}
bool file_is_empty(std::string fileName) {
	std::fstream file(fileName);
	if (!file.is_open())
		MessageBox::Show("���� �� ��������", "������");
	else
		if (file.peek() == EOF) return true;
		else return false;
	

}
bool is_positive_number(const std::string& s)
{
	std::string::const_iterator it = s.begin();
	while (it != s.end() && std::isdigit(*it) && *it >= 0) ++it;
	return !s.empty() && it == s.end();
}
bool date_is_true(const std::string& s) {
	if (s.length() != 10) return false;
	std::string::const_iterator it = s.begin();
	while (it != s.end() && (std::isdigit(*it) || *it == '.' || *it == ',')) ++it;
	return !s.empty() && it == s.end();
}


//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
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


