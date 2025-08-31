#include <iostream>

int main()
{
    int celsius = 25;
    int fahrenheit = (celsius * 9 / 5) + 32;

    std::cout << "Celsius: " << celsius << std::endl;
    std::cout << "Fahrenheit: " << fahrenheit << std::endl;

    return 0;
}
