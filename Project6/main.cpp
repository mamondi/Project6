#include <iostream>

int main() {
    int v; 
    int t; 
    int a; 
    int distance;
 
    std::cout << "Enter the velocity (v): ";
    std::cin >> v;

    std::cout << "Enter the time (t): ";
    std::cin >> t;

    std::cout << "Enter the acceleration (a): ";
    std::cin >> a;

    distance = v * t + (a * t * t) / 2;

    std::cout << "The distance traveled is: " << distance << " units." << std::endl;

    return 0;
}