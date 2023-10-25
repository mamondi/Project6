#include <iostream>
#include <Windows.h>

using namespace std;

int main()
{
	system("chcp 1251");
	HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
	int lenth, width, height, result;
	SetConsoleTextAttribute(hConsole, 14);

	cout << "ќбчисленн€ об'Їму пралелеп≥педа" << endl;
	cout << "¬вед≥ть вих≥дн≥ дан≥" << endl;

	cout << "¬вед≥ть довжину: ";
	cin >> lenth;

	cout << "¬вед≥ть ширину: ";
	cin >> width;

	cout << "¬вед≥ть висоту: ";
	cin >> height;

	result = lenth * width * height;

	cout << "ќб'Їм пралелеп≥педа = ";
	SetConsoleTextAttribute(hConsole, 10);
	cout << result << endl;

	return 0;
}
