#pragma once

#include <stdio.h>
#include <string>
#include <iostream>
#include <fstream>

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
/* ��������� ������� ��������������� */
std::string& Convert_String_to_string(String^ s, std::string& os);//������������ System::string ^ � std::string
std::string& Convert_String_to_string(String^ s);//������������ std::string � System::string^
String^ Convert_string_to_String(std::string& os, String^ s);//������������ std::string � System::string^
String^ Convert_string_to_String(std::string& os);//������������ std::string � System::string^
System::String^ Convert_char_to_String(char* ch);//������������ char* � System::String^
char* Convert_String_to_char(System::String^ string);//������������ System::String^ � char*
