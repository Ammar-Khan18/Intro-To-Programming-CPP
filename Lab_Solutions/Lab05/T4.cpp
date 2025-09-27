#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "How many numbers will you enter? ";
    cin >> n;

    // Make an array of size n
    int *arr = new int[n];

    cout << "Enter " << n << " integers:\n";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int target;
    cout << "Enter the number to count occurrences of: ";
    cin >> target;

    int count = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == target)
        {
            count++;
        }
    }

    cout << "The number " << target << " appears " << count << " times in the array.\n";

    delete[] arr;
    return 0;
}
