#include <iostream>
using namespace std;
// Swap function using pointers
void swapValues(int *a, int *b)
{
    int temp = *a; // store value pointed by a
    *a = *b;       // assign value pointed by b to a
    *b = temp;     // assign old value of a to b
}
int main()
{
    int x = 4, y = 9;
    cout << "Before swap: x=" << x << ", y=" << y << endl;
    swapValues(&x, &y); // pass their addresses
    cout << "After swap: x=" << x << ", y=" << y << endl;
    return 0;
}