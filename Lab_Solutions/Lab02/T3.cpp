#include <iostream>
using namespace std;

int main()
{
    double temperature;

    cout << "Enter the current temperature in Celsius: ";
    cin >> temperature;

    string status = (temperature < 15)    ? "Cold"
                    : (temperature <= 25) ? "Moderate"
                                          : "Hot";

    cout << status << endl;

    return 0;
}
