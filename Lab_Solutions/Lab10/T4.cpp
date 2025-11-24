#include <iostream>
using namespace std;
// Takes an integer pointer and sets the value to 123
void setTo123(int *p)
{
    *p = 123; // modify caller’s variable using pointer
}
int main()
{
    int x = 0;
    cout << "Before: x = " << x << endl;
    setTo123(&x); // pass address
    cout << "After: x = " << x << endl;
    return 0;
}