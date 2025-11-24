#include <iostream>
using namespace std;

void input2D(int arr[][4], int rows)
{
    cout << "Enter 2D array values:\n";
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            cin >> arr[i][j];
        }
    }
}

void print2D(int arr[][4], int rows)
{
    cout << "\nMatrix:\n";
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            cout << arr[i][j] << "\t";
        }
        cout << endl;
    }
}

int main()
{
    int arr[3][4];

    input2D(arr, 3);
    print2D(arr, 3);

    return 0;
}
