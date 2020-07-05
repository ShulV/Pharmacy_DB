#include "Functions.h"

/*
int get_count_data(char* fileName_) {
	file = fopen(fileName_, "a");//Создание файла на случай, если он не создан
fclose(file);
file = fopen(fileName_, "r+");//чтение кол-ва записей или запись нуля при их отсутствии
if (file == NULL)
MessageBox::Show("Файл не открылся", "Ошибка");// Файл не открылся 
rewind(file);
fscanf(file, "%5d", &countData);
if (countData == NULL) fprintf(file, "%5d\n", countData); //записываем 0 (кол-во записей) в начало
else {
	rewind(file);
	fscanf(file, "%5d", &countData);
}
fclose(file);

MessageBox::Show("f", "Предупреждение ");
return countData;
}
*/


/////////////////////////////////////////////////////////////////////////////////////
/*Реализация функций*/
/*Конвертируем System::string ^ в std::string*/
std::string& Convert_String_to_string(String^ s, std::string& os) {
	using namespace Runtime::InteropServices;
	const char* chars = (const char*)(Marshal::StringToHGlobalAnsi(s)).ToPointer();
	os = chars;
	Marshal::FreeHGlobal(IntPtr((void*)chars));

	return os;
}
/*Конвертируем std::string в System::string^*/
std::string& Convert_String_to_string(String^ s) {
	std::string os;
	using namespace Runtime::InteropServices;
	const char* chars = (const char*)(Marshal::StringToHGlobalAnsi(s)).ToPointer();
	os = chars;
	Marshal::FreeHGlobal(IntPtr((void*)chars));
	return os;
}
/*Конвертируем std::string в System::string^*/
String^ Convert_string_to_String(std::string& os, String^ s) {
	s = gcnew String(os.c_str()); //конвертируем
	return s;
}
/*Конвертируем std::string в System::string^*/
String^ Convert_string_to_String(std::string& os) {
	String^ s = gcnew String(os.c_str());//ковертируем
	return s;
}
/*Конвертируем char* в System::String^*/
String^ Convert_char_to_String(char ch) {
	char* chr = new char();
	chr[0] = ch;
	String^ str;
	for (int i = 0; chr[i] != '\0'; i++) {
		str += wchar_t(ch);
	}
	return str;
}
/*Конвертируем char* в System::String^*/
String^ Convert_char_to_String(char* ch) {
	char* chr = new char();
	chr = ch;
	String^ str;
	for (int i = 0; chr[i] != '\0'; i++) {
		str += wchar_t(ch);
	}
	return str;
}
/*конвертируем System::String^ в char**/
char* Convert_String_to_char(String^ string) {
	using namespace Runtime::InteropServices;
	return (char*)(void*)Marshal::StringToHGlobalAnsi(string);
}
