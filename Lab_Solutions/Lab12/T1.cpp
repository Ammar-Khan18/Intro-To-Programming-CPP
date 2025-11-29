#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

struct Circle
{
    double radius;
};

double calculateArea(Circle c)
{
    const double PI = 3.14159;
    return PI * c.radius * c.radius;
}

int main()
{
    cout << "\n===== TASK 1: Circle Area =====\n";
    Circle myCircle;
    myCircle.radius = 5.0;

    cout << fixed << setprecision(2);
    cout << "Circle with radius " << myCircle.radius
         << " has area: " << calculateArea(myCircle) << endl;
}