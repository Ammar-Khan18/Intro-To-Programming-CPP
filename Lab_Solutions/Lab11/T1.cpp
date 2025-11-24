#include <iostream>
using namespace std;

void printArray(int *arr, int size)
{
    cout << "Array elements: ";
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main()
{
    int n;
    cout << "Enter number of elements: ";
    cin >> n;

    // allocate memory
    int *arr = new int[n];

    // input
    for (int i = 0; i < n; i++)
    {
        cout << "Enter element " << i + 1 << ": ";
        cin >> arr[i];
    }

    printArray(arr, n);

    // release memory
    delete[] arr;

    return 0;
}
