#pragma once
#define MAX_MEDICAMENTS 100 //максимальное количество лекарств
#define MAX_LENGTH 50 //максимальная длина текста
#define MAX_PHARMACIES 5 //максимальное кол-во аптек, имеющих в наличии лекраство
#define NUM_KEYS_TABLE 6 //кол-во ключей таблицы (заголовков столбцов)
#define NUM_SORT_FIELDS 5 //кол-во сортируемых столбцов
#define NUM_EDIT_FIELDS 5 //кол-во редактируемых столбцов
#define LENGTH_DATE 10 //длина даты (2000.09.14)
////////////////////////////////////////////////////////////////////////////////////////////////////
char fileName[] = "medicines.txt"; //основной файл
char fileName2[] = "rewrite.txt"; //для переписывания при редактировании, удалении
/*med - структура для добавления записи, редактирования записи new_med - для записи данных при редактировании*/
struct {
	int id; //ключ
	char name[MAX_LENGTH]; //название
	char country[MAX_LENGTH]; //страна-производитель
	char date[MAX_LENGTH]; //дата производства
	int pharmacy_number[MAX_PHARMACIES]; //номера аптек
	int price; //максимальная цена
} med, new_med;