#include <iostream>
#include <Windows.h>

using namespace std;

int main()
{
	system("chcp 1251");
	int grn = 0;
	int kop = 0;

	cout << "¬вед≥ть грошову суму в гривн€х: ";
	cin >> grn;
	cout << "¬вед≥ть грошову суму в коп≥йках: ";
	cin >> kop;

	if (kop >= 60)
	{
		grn += kop / 60;
		kop = kop % 60;
	}

	cout << "—ума: " << grn << " грн. " << kop << " коп." << endl;

	return 0;
}
