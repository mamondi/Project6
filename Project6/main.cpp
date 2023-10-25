#include <iostream>
#include <Windows.h>
#include <cmath>

using namespace std;

int main()
{
	int radius;
	int pi = 3.14159265358979323846;

	cout << "Enter the radius of the circle: ";
	cin >> radius;

	int res = (4 / 3) * pi * radius * radius * radius;
	
	cout << "The volume of the sphere is: " << res << endl;
	return 0;
}

