#include <iostream>
#include <cmath>
// Function to calculate the power of a number
double power(double base, double exponent)
{
    // Initialize the result to 1
    int result = 1;
    // Handle the case where the exponent is zero
    if (exponent == 0)
        return result;
    else
    {
        for (int i = 0; i < std::abs(exponent); i++)
        {
            result *= base;
        }
        // Handle the case where the exponent is negative
        if (exponent < 0)
        {
            return 1.0 / result;
        }
        return result;
    }
}
// Main function
int main()
{
    // Declare variables to store the base and exponent
    double base, exponent;
    // Prompt the user to enter the base and exponent
    std::cout << "Enter the base: ";
    std::cin >> base;
    std::cout << "Enter the exponent: ";
    std::cin >> exponent;
    // Calculate and display the result of the power operation
    std::cout << base << " raised to the power of " << exponent << " is: " << power(base, exponent) << std::endl;
    // Return 0 to indicate successful completion
    return 0;
}