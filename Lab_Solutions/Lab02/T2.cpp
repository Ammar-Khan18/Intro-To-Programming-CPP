#include <iostream>
#include <string>
using namespace std;

int main()
{
    string fullname;
    int age;

    cout << "Enter your full name: ";
    getline(cin, fullname); // use getline for names with spaces

    cout << "Enter your age: ";
    cin >> age;

    cout << "\nHello, " << fullname << "! You are " << age << " years old." << endl;

    return 0;
}
