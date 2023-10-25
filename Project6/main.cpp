#include <iostream>
#include <Windows.h>

int main() {
    system("chcp 1251");
    int scale;   
    int distanceInCentimeters;

    std::cout << "Обчислення відстані між населеними пунктами." << std::endl;
    std::cout << "Введіть масштаб карти (кількість кілометрів в одному сантиметрі): ";
    std::cin >> scale;

    std::cout << "Введіть відстань між точками, що зображують населені пункти (см): ";
    std::cin >> distanceInCentimeters;

    int distanceInKilometers = distanceInCentimeters / 100 / scale;

    std::cout << "Відстань між населеними пунктами " << distanceInKilometers << " км." << std::endl;

    return 0;
}