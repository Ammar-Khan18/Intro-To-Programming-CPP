#include <iostream>
using namespace std;

int main()
{
    unsigned int rawData;
    int shift_amount;

    // Input from user
    cout << "Enter raw sensor data (unsigned int): ";
    cin >> rawData;
    cout << "Enter shift amount (int): ";
    cin >> shift_amount;

    unsigned int result;

    // Check conditions and perform shifts
    if (rawData >= 100 && rawData <= 500)
    {
        // Right shift
        result = rawData >> shift_amount;
        cout << "Normalized value (right shift): " << result << endl;
    }
    else
    {
        // Left shift
        result = rawData << shift_amount;
        cout << "Amplified value (left shift): " << result << endl;
    }

    return 0;
}
