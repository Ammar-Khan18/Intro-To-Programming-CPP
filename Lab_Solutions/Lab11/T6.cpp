#include <iostream>
using namespace std;
int main()
{
    cout << "This program demonstrates memory leaks.\n";
    // Loop to repeatedly allocate memory
    for (int i = 0; i < 1000; i++)
    {
        float *arr = new float[100000]; // Allocate 100,000 floats each iteration
        // Optional: do something with arr
        arr[0] = 1.23;
        arr[99999] = 4.56;
        // Memory is NOT freed (no delete[])
        // This causes memory usage to increase with each iteration
        cout << "Iteration " << i + 1 << " allocated 100,000 floats." << endl;
        // Observe memory usage in Task Manager / System Monitor
    }
    cout << "Program finished. Check memory usage." << endl;
    return 0;
}
/*
Observations:
- Each iteration allocates memory but never releases it.
- The program’s memory usage steadily increases.
- On systems with limited memory, this can lead to system slowdown or crash.
- This demonstrates the importance of always freeing dynamically allocated memory
using delete[].
*/