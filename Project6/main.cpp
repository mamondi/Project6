#include <iostream>
#include <Windows.h>

using namespace std;

int main()
{
	system("chcp 1251");
	int grn = 0;
	int kop = 0;

	cout << "������ ������� ���� � �������: ";
	cin >> grn;
	cout << "������ ������� ���� � �������: ";
	cin >> kop;

	if (kop >= 60)
	{
		grn += kop / 60;
		kop = kop % 60;
	}

	cout << "����: " << grn << " ���. " << kop << " ���." << endl;

	return 0;
}
