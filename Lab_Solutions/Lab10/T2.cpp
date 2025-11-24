#include <iostream>
using namespace std;
int main()
{
    // A simple array of floats.
    float arr[5] = {1.1, 2.2, 3.3, 4.4, 5.5};
    // Pointer to first element.
    float *p = arr; // same as &arr[0]
    // Traverse using pointer arithmetic.
    for (int i = 0; i < 5; i++)
    {
        cout << "arr[" << i << "] = " << *(p + i)
             << " (address = " << (p + i) << ")\n";
    }
    return 0;
}