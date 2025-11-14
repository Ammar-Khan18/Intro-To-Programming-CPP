#include <iostream>
#include <vector>
using namespace std;

int main(void)
{
    int n, r;
    cout << "Enter number of integers: ";
    cin >> n;

    cout << "Enter " << n << " integers: ";
    vector<int> numbers(n);
    for (int i = 0; i < n; i++)
    {
        cin >> numbers[i];
    }

    cout << "Enter number of rows: ";
    cin >> r;

    // Distribute numbers across rows using round-robin
    for (int row = 0; row < r; row++)
    {
        for (int i = row; i < n; i += r)
        {
            cout << numbers[i];
            if (i + r < n)
                cout << " ";
        }
        cout << endl;
    }
}