#include <iostream>
#include <iomanip> // for setw
using namespace std;

int main()
{
    int n;
    cout << "Enter the size of the multiplication table (n): ";
    cin >> n;

    cout << "\nMultiplication Table (" << n << " x " << n << "):\n\n";

    // Print header row
    cout << setw(4) << " ";
    for (int i = 1; i <= n; i++)
    {
        cout << setw(4) << i;
    }
    cout << endl;

    // Print separator line
    cout << "----";
    for (int i = 1; i <= n; i++)
    {
        cout << "----";
    }
    cout << endl;

    // Print table
    for (int i = 1; i <= n; i++)
    {
        cout << setw(2) << i << " |"; // Row label
        for (int j = 1; j <= n; j++)
        {
            cout << setw(4) << (i * j);
        }
        cout << endl;
    }

    return 0;
}
