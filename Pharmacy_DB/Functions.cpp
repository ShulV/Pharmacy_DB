#include "Functions.h"


int get_count_data(char* fileName_) {
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
