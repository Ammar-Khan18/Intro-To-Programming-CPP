#include <iostream>
using namespace std;

int main(void)
{
    int arr[10];
    char direction;
    int rotations;

    cout << "Enter 10 integers: ";
    for (int i = 0; i < 10; i++)
    {
        cin >> arr[i];
    }

    cout << "Enter rotation direction (L/R): ";
    cin >> direction;

    cout << "Enter number of rotations: ";
    cin >> rotations;

    // Normalize rotations (in case rotations > 10)
    rotations = rotations % 10;

    if (direction == 'L' || direction == 'l')
    {
        // Left rotation
        for (int r = 0; r < rotations; r++)
        {
            int temp = arr[0];
            for (int i = 0; i < 9; i++)
            {
                arr[i] = arr[i + 1];
            }
            arr[9] = temp;
        }
        cout << "Array after " << rotations << " left rotations:" << endl;
    }
    else if (direction == 'R' || direction == 'r')
    {
        // Right rotation
        for (int r = 0; r < rotations; r++)
        {
            int temp = arr[9];
            for (int i = 9; i > 0; i--)
            {
                arr[i] = arr[i - 1];
            }
            arr[0] = temp;
        }
        cout << "Array after " << rotations << " right rotations:" << endl;
    }
    else
    {
        cout << "Invalid direction!" << endl;
        return 0;
    }

    // Print result
    for (int i = 0; i < 10; i++)
    {
        cout << arr[i];
        if (i < 9)
            cout << " ";
    }
    cout << endl;
}
