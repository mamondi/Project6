#include <iostream>
#include <cmath>

using namespace std;

int main() {
    int lenth; 
    int radius; 
    int area; 
    int pi = 3.14159;

    cout << "Enter the circumference of the circle: ";
    cin >> lenth;

    radius = lenth / (2 * pi);

    area = pi * pow(radius, 2);


    cout << "The radius of the circle is " << radius << " units." << endl;
    cout << "The area of the circle is " << area << " square units." << endl;

    return 0;
}