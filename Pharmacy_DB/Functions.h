#pragma once

#include <stdio.h>
#include <string>
#include <string.h>
#include <iostream>
#include <fstream>
#include <algorithm>
#include <ctype.h>
//#include <windows.h>

#define MAX_PHARMACIES 5 //максимальное кол-во аптек, имеющих в наличии лекраство

using namespace System;
using namespace System::Windows::Forms;

/*
FILE* file;//основной файл
FILE* file2;//вспомогательный файл
int countData = 0;//текущее кол-во лекарств
char fileName[] = "medicines.txt"; //основной файл
char fileName2[] = "rewrite.txt"; //для переписывания при редактировании, удалении
*/



int get_count_data(char* fileName_); // ФУНКЦИЯ ПОЛУЧЕНИЯ КОЛ-ВА ЗАПИСЕЙ
int show_meds(int _countData); // ФУНКЦИЯ ВЫВОДА ВСЕХ ЛЕКАРСТВ
int save_meds_line_in_adititional_file(std::string id, std::string name, std::string country, std::string date, std::string pharmacy_number[MAX_PHARMACIES], std::string price, std::string fileName);//ФУНКЦИЯ СОХРАНЕНИЯ ДАННЫХ ОДНОЙ ЗАПИСИ В ФАЙЛ
int add_line_from_adititional_file_to_main_file(char* fileNameFrom, char* fileNameTo);
void ClearFile(std::string filename);//очистка файла
bool file_is_empty(std::string fileName);//проверка на пустоту файла
/* Прототипы функций конвертирования */
std::string& Convert_String_to_string(String^ s, std::string& os);//Конвертируем System::string ^ в std::string
std::string& Convert_String_to_string(String^ s);//Конвертируем std::string в System::string^
String^ Convert_string_to_String(std::string& os, String^ s);//Конвертируем std::string в System::string^
String^ Convert_string_to_String(std::string& os);//Конвертируем std::string в System::string^
System::String^ Convert_char_to_String(char* ch);//Конвертируем char* в System::String^
char* Convert_String_to_char(System::String^ string);//конвертируем System::String^ в char*

bool is_positive_number(const std::string& s);//функция: является ли строка положительным числом или нулём
bool date_is_true(const std::string& s);//функция: является ли дата верно введенной