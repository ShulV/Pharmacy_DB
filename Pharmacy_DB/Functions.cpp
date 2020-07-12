#include "Functions.h"
#include "AdminInterface.h"


#define MAX_MEDICAMENTS 100 //максимальное количество лекарств
#define MAX_LENGTH 50 //максимальная длина текста
#define NUM_KEYS_TABLE 6 //кол-во ключей таблицы (заголовков столбцов)
#define NUM_SORT_FIELDS 5 //кол-во сортируемых столбцов
#define NUM_EDIT_FIELDS 5 //кол-во редактируемых столбцов
#define LENGTH_DATE 10 //длина даты (2000.09.14)
int get_count_data(char* fileName_) { // ФУНКЦИЯ ПОЛУЧЕНИЯ КОЛ-ВА ЗАПИСЕЙ
FILE* file;//основной файл
int countData_= 0;//текущее кол-во лекарств
//MessageBox::Show(Convert::ToString(countData_), "1");
file = fopen(fileName_, "a");//Создание файла на случай, если он не создан
fclose(file);
file = fopen(fileName_, "r+");//чтение кол-ва записей или запись нуля при их отсутствии
	if (file == NULL)
		MessageBox::Show("Файл не открылся", "Ошибка");// Файл не открылся 
	rewind(file);
	fscanf(file, "%d", &countData_);
	if (countData_ == NULL) fprintf(file, "%d\n", 0); //записываем 0 (кол-во записей) в начало
	else {
		rewind(file);
		fscanf(file, "%d", &countData_);
	}
fclose(file);
return countData_;
}
int show_meds(int _countData) { // ФУНКЦИЯ ВЫВОДА ВСЕХ ЛЕКАРСТВ
	char fileName[] = "medicines.txt"; //основной файл
////////////////////////////////////////////////////////////////////////////////////////////////////
	/*med - структура для добавления записи, редактирования записи new_med - для записи данных при редактировании*/
	std::string name;
	struct {
		int id; //ключ
		std::string name, //название
		country, //страна-производитель
		date; //дата производства
		int pharmacy_number[MAX_PHARMACIES]; //номера аптек
		int price; //максимальная цена
	} med, new_med;
	if (_countData == 0)
	{
		MessageBox::Show("Записей в файле нет", "Предупреждение");
	}
	else {
		std::string line;
		std::ifstream in(fileName); // окрываем файл для чтения
		int cell_num=0;
		if (in.is_open())
		{
			getline(in, line);
			//MessageBox::Show(Convert_string_to_String(line), "КОЛ_ВО");
			while (getline(in, line, ' '))
			{
				cell_num++;
			}
		}
		else
			MessageBox::Show("Файл не открылся", "Ошибка");//Файл не открылся 
		in.close();     // закрываем файл
	}
	return 0;
}
int save_meds_line_in_adititional_file(std::string id, std::string name, std::string country, std::string date, std::string pharmacy_number[MAX_PHARMACIES], std::string price, std::string fileName) {//ФУНКЦИЯ СОХРАНЕНИЯ ДАННЫХ ОДНОЙ ЗАПИСИ В ФАЙЛ
	//создать поток для записи в файл
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
		MessageBox::Show("Ошибка открытия файла", "Ошибка");
	//MessageBox::Show("Данные сохранены в файл", "Успешно");

	record.close();
	return 0;
}
int add_line_from_adititional_file_to_main_file(char* fileNameFrom, char* fileNameTo)
{
	//чтение новой записи
	std::string fileName = fileNameFrom;
	//создать поток для чтения из файла
	std::ifstream fileRecord(fileName, std::ifstream::in);
	std::string line;
	if (fileRecord) {
		
		getline(fileRecord, line);
	}
	else {
		MessageBox::Show("Ошибка открытия файла", "Ошибка");
		return 1;
	}
	
	fileRecord.close();

	int CountData = get_count_data(fileNameTo);
	//запись новой записи в конец
	std::ofstream file (fileNameTo, std::ios::app);
	if (file)
	{
		file << line << std::endl;
	}	
	else
	{
		MessageBox::Show("Ошибка открытия файла", "Ошибка");
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
		MessageBox::Show("Ошибка открытия файла", "Ошибка");
		return 1;
	}
	file_.close();
	MessageBox::Show("Данные добавлены", "Успешно");

	return 0;
}
void ClearFile(std::string filename) {//очистка файла
	std::ofstream file(filename, std::ios::out | std::ios::trunc);
	file.close();
}
bool file_is_empty(std::string fileName) {
	std::fstream file(fileName);
	if (!file.is_open())
		MessageBox::Show("Файл не открылся", "Ошибка");
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


