#include <iostream>
using namespace std;
int main()
{
    // Define an array of 5 integers (stored contiguously in memory).
    int arr[5] = {10, 20, 30, 40, 50};
    // Define an array of 5 integer pointers.
    int *ptrs[5];
    // Assign each pointer to point to the corresponding element of arr.
    for (int i = 0; i < 5; i++)
    {
        ptrs[i] = &arr[i]; // store address of arr[i]
    }
    // Print elements using the pointer array.
    for (int i = 0; i < 5; i++)
    {
        cout << "arr[" << i << "] = " << *ptrs[i]
             << " (address = " << ptrs[i] << ")\n";
    }
    return 0;
}