#include <iostream>
// pointer to pointer
int main()
{
    int num = 10;    // normal integer variable
    int *ptr = &num; // pointer variable storing address of num

    std::cout << "Value of num: " << num << "\n";
    std::cout << "Address of num: " << &num << "\n";
    std::cout << "Value of ptr (address stored): " << ptr << "\n";
    std::cout << "Value pointed to by ptr: " << *ptr << "\n"; // dereferencing

    // Changing value through pointer
    *ptr = 20;
    std::cout << "New value of num after changing through pointer: " << num << "\n";

    return 0;
}
