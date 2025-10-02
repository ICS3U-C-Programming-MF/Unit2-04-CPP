// Copyright
#include <cmath>
#include <iomanip>
#include <iostream>

int main() {
    // Input the radius
    std::cout << "Enter the radius in cm: ";
    double radius;
    std::cin >> radius;

    // Calculations circumference & area
    double circumference = 2 * M_PI * radius;
    double area = M_PI * radius * radius;

    // display circumference and the area
    std::cout << std::fixed << std::setprecision(2);
    std::cout << "circumference = " << circumference << std::endl;
    std::cout << "area = : " << area << std::endl;

 
}
