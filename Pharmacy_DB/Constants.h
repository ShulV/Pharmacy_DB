#pragma once
#define MAX_MEDICAMENTS 100 //������������ ���������� ��������
#define MAX_LENGTH 50 //������������ ����� ������
#define MAX_PHARMACIES 5 //������������ ���-�� �����, ������� � ������� ���������
#define NUM_KEYS_TABLE 6 //���-�� ������ ������� (���������� ��������)
#define NUM_SORT_FIELDS 5 //���-�� ����������� ��������
#define NUM_EDIT_FIELDS 5 //���-�� ������������� ��������
#define LENGTH_DATE 10 //����� ���� (2000.09.14)
////////////////////////////////////////////////////////////////////////////////////////////////////
char fileName[] = "medicines.txt"; //�������� ����
char fileName2[] = "rewrite.txt"; //��� ������������� ��� ��������������, ��������
/*med - ��������� ��� ���������� ������, �������������� ������ new_med - ��� ������ ������ ��� ��������������*/
struct {
	int id; //����
	char name[MAX_LENGTH]; //��������
	char country[MAX_LENGTH]; //������-�������������
	char date[MAX_LENGTH]; //���� ������������
	int pharmacy_number[MAX_PHARMACIES]; //������ �����
	int price; //������������ ����
} med, new_med;