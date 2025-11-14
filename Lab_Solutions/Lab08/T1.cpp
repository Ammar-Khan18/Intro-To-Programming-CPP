#include <iostream>
// Function to convert temperature from Celsius to Fahrenheit
double celsiusToFahrenheit(double celsius)
{
    return (celsius * 9 / 5) + 32;
}
int main()
{
    // Declare a variable to store the temperature in Celsius
    double celsius;
    // Prompt the user to enter a temperature in Celsius
    std::cout << "Enter a temperature in Celsius: ";
    std::cin >> celsius;
    // Convert the temperature to Fahrenheit and display the result
    std::cout << "Temperature in Fahrenheit: " << celsiusToFahrenheit(celsius) << std::endl;
    // Return 0 to indicate successful completion
    return 0;
}