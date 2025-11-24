#include <iostream>
using namespace std;
void foo(int a)
{ // pass-by-value
    cout << "foo: a=" << a << ", address=" << &a << endl;
}
void bar(int &a)
{ // pass-by-reference
    cout << "bar: a=" << a << ", address=" << &a << endl;
}
void fooRec(int a)
{
    cout << "fooRec: a=" << a << ", address=" << &a << endl;
    if (a > 0)
        fooRec(a - 1);
}
void barRec(int &a, int depth)
{
    cout << "barRec depth=" << depth << ", address=" << &a
         << ", a=" << a << endl;
    if (depth > 0)
        barRec(a, depth - 1);
}
int main()
{
    int x = 3;
    cout << "main: x address = " << &x << endl
         << endl;
    foo(x);
    cout << endl;
    bar(x);
    cout << endl;
    fooRec(x);
    cout << endl;
    barRec(x, 3);
    return 0;
}