#include "Functions.h"


int get_count_data(char* fileName_) {
FILE* file;//основной файл
int countData_= 0;//текущее кол-во лекарств
//MessageBox::Show(Convert::ToString(countData_), "1");
file = fopen(fileName_, "a");//Создание файла на случай, если он не создан
fclose(file);
file = fopen(fileName_, "r+");//чтение кол-ва записей или запись нуля при их отсутствии
	if (file == NULL)
		MessageBox::Show("Файл не открылся", "Ошибка");// Файл не открылся 
	rewind(file);
	fscanf(file, "%5d", &countData_);
	if (countData_ == NULL) fprintf(file, "%5d\n", 0); //записываем 0 (кол-во записей) в начало
	else {
		rewind(file);
		fscanf(file, "%5d", &countData_);
	}
fclose(file);
return countData_;
}



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
