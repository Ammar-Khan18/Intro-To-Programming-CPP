#include <iostream>

int main()
{
    int num = 50;
    int *ptr = &num;   // pointer to num
    int **ptr2 = &ptr; // pointer to pointer

    std::cout << "Value of num: " << num << "\n";
    std::cout << "Value via ptr: " << *ptr << "\n";
    std::cout << "Value via ptr2: " << **ptr2 << "\n";

    return 0;
}
