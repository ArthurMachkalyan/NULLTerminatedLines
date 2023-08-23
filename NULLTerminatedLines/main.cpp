#include <iostream>
#include <Windows.h>
using namespace std;

int StringLength(const char str[]);
char* to_upper(char str[]);
char* to_lower(char str[]);
char* shrink(char str[]);
bool is_palindrome(char str[]);

void main() {
	setlocale(LC_ALL, "");

	//char str[] = { 'H', 'e', 'l', 'l', 'o', 0};
	//char str[] = "Hello";
	const int SIZE = 20;
	char str[SIZE] = {};
	cout << "������� ������: ";
	SetConsoleCP(1251);
	cin.getline(str, SIZE);
	SetConsoleCP(866);
	cout << "��������� ������: " << endl;
	cout << str << endl << endl;
	cout << "���������� �������� � ������: " << endl;
	cout << StringLength(str) << endl << endl;
	cout << "������ � ������� ��������: " << endl;
	cout << to_upper(str) << endl << endl;
	cout << "������ � ������ ��������: " << endl;
	cout << to_lower(str) << endl << endl;
	cout << "�������� ������ �������� : " << endl;
	cout << shrink(str) << endl << endl;
	cout << "��������� ��� ���: " << endl;
	if (is_palindrome(str) == true)
	{
		cout << "������ �������� �����������" << endl;
	}
	else
	{
		cout << "������ �� �������� �����������" << endl;
	}
}

int StringLength(const char str[]) {
	int counter = 0;
	for (int i = 0; i < str[counter]; i++)
	{
		counter++;
	}
	return counter;
}

char* to_upper(char str[]) {
	for (int i = 0; str[i]; i++)
	{
		if (str[i] >= 'a' && str[i] <= 'z') str[i] -= 32;
	}
	return str;
}

char* to_lower(char str[]) {
	for (int i = 0; str[i]; i++)
	{
		if (str[i] >= 'A' && str[i] <= 'Z') str[i] += 32;
	}
	return str;
}

char* shrink(char str[]) {
	for (int i = 0; str[i]; i++)
	{
		if ((str[i] == ' ') && (str[i + 1] == ' ')) str[i] = str[i+1];
	}
	return str;
}

bool is_palindrome(char str[]) {
	for (int i = 0; str[i]; i++)
	{
		if (str[i] == str[StringLength(str) - 1])
		{
			return true;
		}
		else
		{
			return false;
		}
	}
}