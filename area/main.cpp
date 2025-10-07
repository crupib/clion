#include <iostream>
int main()
{
    const double PI = 3.1415;
    double radius, height, base;
    double circleArea, triangleArea;
    std::cout << "Enter the radius of the circle: ";
    std::cin >> radius;
    std::cout << "Enter the height of the triangle: ";
    std::cin >> height;
    std::cout << "Enter the base of the triangle: ";
    std::cin >> base;
    circleArea = PI * radius * radius;
    triangleArea = 0.5 * base * height;
    std::cout << "Area of the circle: " << circleArea << std::endl;
    std::cout << "Area of the triangle: " << triangleArea << std::endl;
    return 0;
}

