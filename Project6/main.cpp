#include <iostream>
#include <Windows.h>

using namespace std;

int main()
{
	system("chcp 1251");
	HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
	int lenth, width, height, result;
	SetConsoleTextAttribute(hConsole, 14);

	cout << "���������� ��'��� ������������" << endl;
	cout << "������ ������ ���" << endl;

	cout << "������ �������: ";
	cin >> lenth;

	cout << "������ ������: ";
	cin >> width;

	cout << "������ ������: ";
	cin >> height;

	result = lenth * width * height;

	cout << "��'�� ������������ = ";
	SetConsoleTextAttribute(hConsole, 10);
	cout << result << endl;

	return 0;
}
