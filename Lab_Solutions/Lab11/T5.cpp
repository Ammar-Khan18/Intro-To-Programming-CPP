#include <iostream>
using namespace std;

int **create2D(int rows, int cols)
{
    int **arr = new int *[rows];
    for (int i = 0; i < rows; i++)
        arr[i] = new int[cols];
    return arr;
}

void input2D(int **arr, int rows, int cols)
{
    cout << "Enter matrix values:\n";
    for (int i = 0; i < rows; i++)
        for (int j = 0; j < cols; j++)
            cin >> arr[i][j];
}

void print2D(int **arr, int rows, int cols)
{
    cout << "\nMatrix:\n";
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
            cout << arr[i][j] << "\t";
        cout << endl;
    }
}

void free2D(int **arr, int rows)
{
    for (int i = 0; i < rows; i++)
        delete[] arr[i];
    delete[] arr;
}

int main()
{
    int rows, cols;
    cout << "Enter rows: ";
    cin >> rows;
    cout << "Enter cols: ";
    cin >> cols;

    int **arr = create2D(rows, cols);
    input2D(arr, rows, cols);
    print2D(arr, rows, cols);

    // Max and Min
    int maxVal = arr[0][0], minVal = arr[0][0];

    for (int i = 0; i < rows; i++)
        for (int j = 0; j < cols; j++)
        {
            if (arr[i][j] > maxVal)
                maxVal = arr[i][j];
            if (arr[i][j] < minVal)
                minVal = arr[i][j];
        }

    cout << "\nMax value: " << maxVal << endl;
    cout << "Min value: " << minVal << endl;

    // Row sums
    cout << "\nRow sums:\n";
    for (int i = 0; i < rows; i++)
    {
        int sum = 0;
        for (int j = 0; j < cols; j++)
            sum += arr[i][j];
        cout << "Row " << i << ": " << sum << endl;
    }

    // Column sums
    cout << "\nColumn sums:\n";
    for (int j = 0; j < cols; j++)
    {
        int sum = 0;
        for (int i = 0; i < rows; i++)
            sum += arr[i][j];
        cout << "Col " << j << ": " << sum << endl;
    }

    free2D(arr, rows);

    return 0;
}
