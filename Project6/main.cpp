#include <iostream>

using namespace std;

int main() {
	float R1, R2, R3;

	cout << "Enter the value of R1: ";
	cin >> R1;
	cout << "Enter the value of R2: ";
	cin >> R2;
	cout << "Enter the value of R3: ";
	cin >> R3;

	float R0 = 0;

	R0 = 1/R1 + 1/R2 + 1/R3;

	cout << "The total resistance is: " << R0 << endl;
}