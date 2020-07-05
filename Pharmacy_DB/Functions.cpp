#include "Functions.h"

/*
int get_count_data(char* fileName_) {
	file = fopen(fileName_, "a");//�������� ����� �� ������, ���� �� �� ������
fclose(file);
file = fopen(fileName_, "r+");//������ ���-�� ������� ��� ������ ���� ��� �� ����������
if (file == NULL)
MessageBox::Show("���� �� ��������", "������");// ���� �� �������� 
rewind(file);
fscanf(file, "%5d", &countData);
if (countData == NULL) fprintf(file, "%5d\n", countData); //���������� 0 (���-�� �������) � ������
else {
	rewind(file);
	fscanf(file, "%5d", &countData);
}
fclose(file);

MessageBox::Show("f", "�������������� ");
return countData;
}
*/


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
