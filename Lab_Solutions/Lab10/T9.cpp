#include <iostream>
using namespace std;
int *isGreater(int &a, int &b)
{
    if (a > b)
        return &a; // safe to return
    return nullptr;
}
int main()
{
    int a = 10, b = 5;
    int *result = isGreater(a, b);
    cout << "When a > b, returned address: " << result << endl;
    a = 2;
    b = 7;
    result = isGreater(a, b);
    cout << "When a <= b, returned address: " << result << endl;
    return 0;
}