#include <iostream>
#include <Windows.h>

int main() {
    system("chcp 1251");
    int scale;   
    int distanceInCentimeters;

    std::cout << "���������� ������ �� ���������� ��������." << std::endl;
    std::cout << "������ ������� ����� (������� �������� � ������ ���������): ";
    std::cin >> scale;

    std::cout << "������ ������� �� �������, �� ���������� ������� ������ (��): ";
    std::cin >> distanceInCentimeters;

    int distanceInKilometers = distanceInCentimeters / 100 / scale;

    std::cout << "³������ �� ���������� �������� " << distanceInKilometers << " ��." << std::endl;

    return 0;
}