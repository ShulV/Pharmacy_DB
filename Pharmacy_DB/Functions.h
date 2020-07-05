#pragma once

#include <stdio.h>
#include <string>
#include <iostream>
#include <fstream>

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
/* Прототипы функций конвертирования */
std::string& Convert_String_to_string(String^ s, std::string& os);//Конвертируем System::string ^ в std::string
std::string& Convert_String_to_string(String^ s);//Конвертируем std::string в System::string^
String^ Convert_string_to_String(std::string& os, String^ s);//Конвертируем std::string в System::string^
String^ Convert_string_to_String(std::string& os);//Конвертируем std::string в System::string^
System::String^ Convert_char_to_String(char* ch);//Конвертируем char* в System::String^
char* Convert_String_to_char(System::String^ string);//конвертируем System::String^ в char*
