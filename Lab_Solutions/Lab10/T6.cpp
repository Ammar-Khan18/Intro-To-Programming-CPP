#include <iostream>
using namespace std;
int main()
{
    cout << "1) Dereferencing int i = 2 is invalid.\n";
    cout << " int i = 2;\n";
    cout << " *i; // ERROR: i is NOT a pointer.\n\n";
    int arr[3] = {7, 8, 9};
    cout << "2) Address of array (&arr): " << &arr << endl;
    cout << " Address of arr[0]: " << &arr[0] << endl;
    cout << "\nEven though numeric addresses look the same:\n";
    cout << "&arr → type = int (*)[3] (pointer to entire array)\n";
    cout << "&arr[0] → type = int* (pointer to first element)\n\n";
    cout << "Pointer arithmetic differs:\n";
    cout << "(&arr + 1) jumps by 3 * sizeof(int)\n";
    cout << "(&arr[0] + 1) jumps by sizeof(int)\n";
    return 0;
}