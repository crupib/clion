#include <iostream>
#include <cmath>
int main() 
{
    double radius, base, height;
    const double pi = 3.14159;
    std::cout << "Enter the radius of the circle: ";
    std::cin >> radius;
    double circle_area = pi * pow(radius, 2);
    std::cout << "The area of the circle is: " << circle_area << std::endl;
    std::cout << "Enter the base and height of the triangle, separated by a space: ";
    std::cin >> base >> height;
    double triangle_area = 0.5 * base * height;
    std::cout << "The area of the triangle is: " << triangle_area << std::endl;
    return 0;
}