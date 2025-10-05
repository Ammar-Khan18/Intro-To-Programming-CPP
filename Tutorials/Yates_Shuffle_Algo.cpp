#include <iostream>
#include <cstdlib>   // rand(), srand()
#include <ctime>     // time()
#include <algorithm> // std::swap
using namespace std;

int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int n = sizeof(arr) / sizeof(arr[0]);

    srand((time(0)));

    cout << "Original array: ";
    for (int i = 0; i < n; ++i)
        cout << arr[i] << " ";
    cout << "\n";

    // Reverse Fisher–Yates (start from last element)
    for (int i = n - 1; i > 0; --i)
    {
        int r = rand() % (i + 1); // random index in [0, i]
        swap(arr[i], arr[r]);

        for (int j = 0; j < n; ++j)
            cout << arr[j] << " ";
        cout << "\n";
    }

    cout << "\nFinal shuffled array: ";
    for (int i = 0; i < n; ++i)
        cout << arr[i] << " ";
    cout << "\n";
    return 0;
}
