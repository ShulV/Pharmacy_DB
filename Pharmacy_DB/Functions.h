#pragma once

#include <stdio.h>
#include <string>
#include <string.h>
#include <iostream>
#include <fstream>
#include <algorithm>
#include <ctype.h>
//#include <windows.h>

#define MAX_PHARMACIES 5 //������������ ���-�� �����, ������� � ������� ���������

using namespace System;
using namespace System::Windows::Forms;

/*
FILE* file;//�������� ����
FILE* file2;//��������������� ����
int countData = 0;//������� ���-�� ��������
char fileName[] = "medicines.txt"; //�������� ����
char fileName2[] = "rewrite.txt"; //��� ������������� ��� ��������������, ��������
*/



int get_count_data(char* fileName_); // ������� ��������� ���-�� �������
int show_meds(int _countData); // ������� ������ ���� ��������
int save_meds_line_in_adititional_file(std::string id, std::string name, std::string country, std::string date, std::string pharmacy_number[MAX_PHARMACIES], std::string price, std::string fileName);//������� ���������� ������ ����� ������ � ����
int add_line_from_adititional_file_to_main_file(char* fileNameFrom, char* fileNameTo);
void ClearFile(std::string filename);//������� �����
bool file_is_empty(std::string fileName);//�������� �� ������� �����
/* ��������� ������� ��������������� */
std::string& Convert_String_to_string(String^ s, std::string& os);//������������ System::string ^ � std::string
std::string& Convert_String_to_string(String^ s);//������������ std::string � System::string^
String^ Convert_string_to_String(std::string& os, String^ s);//������������ std::string � System::string^
String^ Convert_string_to_String(std::string& os);//������������ std::string � System::string^
System::String^ Convert_char_to_String(char* ch);//������������ char* � System::String^
char* Convert_String_to_char(System::String^ string);//������������ System::String^ � char*

bool is_positive_number(const std::string& s);//�������: �������� �� ������ ������������� ������ ��� ����
bool date_is_true(const std::string& s);//�������: �������� �� ���� ����� ���������