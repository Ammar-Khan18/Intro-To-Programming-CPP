#include <iostream>
using namespace std;

// TASK 4: Fraction Addition with Overloaded + Operator

struct Fraction
{
    int numerator;
    int denominator;

    // Overload << operator for display
    friend ostream &operator<<(ostream &os, const Fraction &f)
    {
        os << f.numerator << "/" << f.denominator;
        return os;
    }

    // Overload + operator for addition
    Fraction operator+(const Fraction &other) const
    {
        Fraction result;
        // a/b + c/d = (ad + bc)/(bd)
        result.numerator = (numerator * other.denominator) +
                           (other.numerator * denominator);
        result.denominator = denominator * other.denominator;
        return result;
    }
};

int main()
{
    Fraction f1, f2, result;

    f1.numerator = 1;
    f1.denominator = 2;

    f2.numerator = 1;
    f2.denominator = 3;

    result = f1 + f2;

    cout << f1 << " + " << f2 << " = " << result << endl;

    return 0;
}