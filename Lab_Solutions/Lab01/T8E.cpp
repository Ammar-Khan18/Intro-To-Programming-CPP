#include <iostream>
#include <cmath>

int main()
{
    double a = 3.0; // first side
    double b = 4.0; // second side

    // calculate hypotenuse using Pythagoras theorem
    double c = sqrt(pow(a, 2) + pow(b, 2));

    std::cout << "Side a = " << a << std::endl;
    std::cout << "Side b = " << b << std::endl;
    std::cout << "Hypotenuse = " << c << std::endl;

    return 0;
}
