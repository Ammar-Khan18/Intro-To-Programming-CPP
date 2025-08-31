#include <iostream>
#include <cmath> // for M_PI and pow

int main()
{
    int radius = 5.0;
    int area = M_PI * pow(radius, 2);

    std::cout << "Radius: " << radius << std::endl;
    std::cout << "Area of Circle: " << area << std::endl;

    return 0;
}
