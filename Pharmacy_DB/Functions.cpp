#include "Functions.h"




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
	fscanf(file, "%5d", &countData_);
	if (countData_ == NULL) fprintf(file, "%5d\n", 0); //записываем 0 (кол-во записей) в начало
	else {
		rewind(file);
		fscanf(file, "%5d", &countData_);
	}
fclose(file);
return countData_;
}
int show_meds(int _countData) { // ФУНКЦИЯ ВЫВОДА ВСЕХ ЛЕКАРСТВ
	char fileName[] = "medicines.txt"; //основной файл
	FILE* file;//основной файл
#define MAX_MEDICAMENTS 100 //максимальное количество лекарств
#define MAX_LENGTH 50 //максимальная длина текста
#define MAX_PHARMACIES 5 //максимальное кол-во аптек, имеющих в наличии лекраство
#define NUM_KEYS_TABLE 6 //кол-во ключей таблицы (заголовков столбцов)
#define NUM_SORT_FIELDS 5 //кол-во сортируемых столбцов
#define NUM_EDIT_FIELDS 5 //кол-во редактируемых столбцов
#define LENGTH_DATE 10 //длина даты (2000.09.14)
////////////////////////////////////////////////////////////////////////////////////////////////////
	/*med - структура для добавления записи, редактирования записи new_med - для записи данных при редактировании*/
	struct {
		int id; //ключ
		std::string name; //название
		char country[MAX_LENGTH]; //страна-производитель
		char date[MAX_LENGTH]; //дата производства
		int pharmacy_number[MAX_PHARMACIES]; //номера аптек
		int price; //максимальная цена
	} med, new_med;
	if (_countData == 0)
	{
		MessageBox::Show("Записей в файле нет", "Предупреждение");
	}
	else {
		file = fopen(fileName, "r+");
		if (file == NULL)
			MessageBox::Show("Файл не открылся", "Ошибка");/* Файл не открылся */
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
