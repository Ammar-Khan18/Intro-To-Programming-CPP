#include <iostream>
using namespace std;

int *generateSquares(int n)
{
    int *arr = new int[n];

    for (int i = 0; i < n; i++)
        arr[i] = i * i;

    return arr; // return pointer
}

int main()
{
    int n;
    cout << "Enter n: ";
    cin >> n;

    int *squares = generateSquares(n);

    cout << "Squares: ";
    for (int i = 0; i < n; i++)
        cout << squares[i] << " ";
    cout << endl;

    delete[] squares; // free memory

    return 0;
}
