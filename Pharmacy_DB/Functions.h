#pragma once

#include <string>

using namespace System;
using namespace System::Windows::Forms;

/* Прототипы функций конвертирования */
std::string& Convert_String_to_string(String^ s, std::string& os);//Конвертируем System::string ^ в std::string
std::string& Convert_String_to_string(String^ s);//Конвертируем std::string в System::string^
String^ Convert_string_to_String(std::string& os, String^ s);//Конвертируем std::string в System::string^
String^ Convert_string_to_String(std::string& os);//Конвертируем std::string в System::string^
System::String^ Convert_char_to_String(char* ch);//Конвертируем char* в System::String^
char* Convert_String_to_char(System::String^ string);//конвертируем System::String^ в char*
