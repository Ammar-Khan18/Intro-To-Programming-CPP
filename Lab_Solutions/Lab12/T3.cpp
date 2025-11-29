#include <iostream>
using namespace std;

// TASK 3: Fraction Display with Overloaded << Operator

struct Fraction
{
    int numerator;
    int denominator;

    // Overload << operator
    friend ostream &operator<<(ostream &os, const Fraction &f)
    {
        os << f.numerator << "/" << f.denominator;
        return os;
    }
};

int main()
{
    Fraction f;
    f.numerator = 3;
    f.denominator = 4;

    cout << "Fraction: " << f << endl;

    return 0;
}