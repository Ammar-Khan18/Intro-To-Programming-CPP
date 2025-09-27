#include <iostream>
using namespace std;

int main()
{
    const int SIZE = 10;
    int numbers[SIZE];

    cout << "Enter 10 numbers:\n";
    for (int i = 0; i < SIZE; i++)
    {
        cout << "Number " << (i + 1) << ": ";
        cin >> numbers[i];
    }

    // Initialize min and max with the first number
    int minNum = numbers[0];
    int maxNum = numbers[0];
    double sum = 0;

    for (int i = 0; i < SIZE; i++)
    {
        if (numbers[i] < minNum)
        {
            minNum = numbers[i];
        }
        if (numbers[i] > maxNum)
        {
            maxNum = numbers[i];
        }
        sum += numbers[i];
    }

    double average = sum / SIZE;

    cout << "\nResults:\n";
    cout << "Minimum: " << minNum << endl;
    cout << "Maximum: " << maxNum << endl;
    cout << "Average: " << average << endl;

    cout << "Numbers in reverse order: ";
    for (int i = SIZE - 1; i >= 0; i--)
    {
        cout << numbers[i] << " ";
    }
    cout << endl;

    return 0;
}
