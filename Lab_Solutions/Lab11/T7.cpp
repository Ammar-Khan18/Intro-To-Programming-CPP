#include <iostream>
#include <string>
using namespace std;
// 1. Numeric types
void numericTypesDemo()
{
    cout << "\n--- Numeric Types Demo ---\n";
    int *intPtr = new int;          // Allocates 4 bytes (int)
    float *floatPtr = new float[5]; // Allocates 5 * 4 = 20 bytes (float)
    double *doublePtr = new double; // Allocates 8 bytes (double)
    *intPtr = 42;
    for (int i = 0; i < 5; i++)
        floatPtr[i] = i * 1.1;
    *doublePtr = 3.14159;
    cout << "Integer: " << *intPtr << endl;
    cout << "Float array: ";
    for (int i = 0; i < 5; i++)
        cout << floatPtr[i] << " ";
    cout << "\nDouble: " << *doublePtr << endl;
    // Free memory
    delete intPtr;
    delete[] floatPtr;
    delete doublePtr;
    // Total allocated memory = total deallocated memory
}
// 2. Character types
void charTypesDemo()
{
    cout << "\n--- Character Types Demo ---\n";
    char *ch = new char;                // 1 byte
    char *str = new char[6];            // 6 bytes (for "Hello" + '\0')
    string *cppStr = new string("Hi!"); // string object on heap
    *ch = 'A';
    str[0] = 'H';
    str[1] = 'e';
    str[2] = 'l';
    str[3] = 'l';
    str[4] = 'o';
    str[5] = '\0';
    cout << "Char: " << *ch << endl;
    cout << "Char array: " << str << endl;
    cout << "C++ string: " << *cppStr << endl;
    // Free memory
    delete ch;
    delete[] str;
    delete cppStr;
}
// 3. Pointer types
void pointerTypesDemo()
{
    cout << "\n--- Pointer Types Demo ---\n";
    int **ptrToIntArray = new int *[3]; // Array of 3 pointers to int
    for (int i = 0; i < 3; i++)
    {
        ptrToIntArray[i] = new int(i * 10); // Allocate individual integers
    }
    cout << "Values pointed to by ptrToIntArray: ";
    for (int i = 0; i < 3; i++)
    {
        cout << *ptrToIntArray[i] << " ";
    }
    cout << endl;
    // Free memory
    for (int i = 0; i < 3; i++)
        delete ptrToIntArray[i]; // Free each integer
    delete[] ptrToIntArray;      // Free array of pointers
}
int main()
{
    numericTypesDemo();
    charTypesDemo();
    pointerTypesDemo();
    return 0;
}
/*
Observations:
- Each function demonstrates memory allocation and deallocation for a specific
type.
- Numeric types: int, float, double arrays can be allocated dynamically.
- Char types: single char, char arrays, and string objects can be allocated.
- Pointer types: pointers to pointers show multi-level dynamic allocation.
- Proper use of delete/delete[] ensures no memory leaks.
*/