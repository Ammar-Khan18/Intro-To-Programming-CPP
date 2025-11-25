#include <iostream>
#include <cstring> // for string example

int main()
{
    std::cout << "===== POINTER TUTORIAL =====\n\n";

    // 1. Basic pointer to an integer
    std::cout << "1. Basic pointer\n";
    int num = 10;
    int *ptr = &num; // pointer storing address of num
    std::cout << "Value of num: " << num << "\n";
    std::cout << "Address of num: " << &num << "\n";
    std::cout << "Value stored in ptr (address): " << ptr << "\n";
    std::cout << "Value via pointer (*ptr): " << *ptr << "\n\n";

    // Changing value through pointer
    *ptr = 20;
    std::cout << "Value of num after changing via pointer: " << num << "\n\n";

    // 2. Pointer arithmetic with arrays
    std::cout << "2. Pointer arithmetic with arrays\n";
    int arr[5] = {1, 2, 3, 4, 5};
    int *pArr = arr; // points to first element
    std::cout << "First element: " << *pArr << "\n";
    pArr++; // move to next element
    std::cout << "Second element: " << *pArr << "\n";
    pArr += 2; // move 2 elements forward
    std::cout << "Fourth element: " << *pArr << "\n\n";

    // 3. Pointer to pointer
    std::cout << "3. Pointer to pointer\n";
    int **ptr2 = &ptr;
    std::cout << "Value via ptr: " << *ptr << "\n";
    std::cout << "Value via ptr2 (**ptr2): " << **ptr2 << "\n\n";

    // 4. Pointers and functions (swap example)
    std::cout << "4. Pointers in functions\n";
    auto swap = [](int *a, int *b)
    {
        int temp = *a;
        *a = *b;
        *b = temp;
    };
    int x = 5, y = 10;
    std::cout << "Before swap: x = " << x << ", y = " << y << "\n";
    swap(&x, &y);
    std::cout << "After swap: x = " << x << ", y = " << y << "\n\n";

    // 5. Null pointer
    std::cout << "5. Null pointer\n";
    int *nullPtr = nullptr;
    if (nullPtr == nullptr)
        std::cout << "Pointer is null\n\n";

    // 6. Pointer to char (string)
    std::cout << "6. Pointer to char (C-style string)\n";
    char str[] = "Hello";
    char *pStr = str;
    std::cout << "String: " << pStr << "\n";
    std::cout << "First character: " << *pStr << "\n\n";

    // 7. Dynamic memory allocation (single integer)
    std::cout << "7. Dynamic memory allocation (new/delete)\n";
    int *dynNum = new int; // allocate memory
    *dynNum = 100;
    std::cout << "Dynamically allocated number: " << *dynNum << "\n";
    delete dynNum;    // free memory
    dynNum = nullptr; // avoid dangling pointer
    std::cout << "\n";

    // 8. Dynamic array
    std::cout << "8. Dynamic array\n";
    int size = 5;
    int *dynArr = new int[size];
    for (int i = 0; i < size; i++)
        dynArr[i] = (i + 1) * 10;
    std::cout << "Dynamic array elements: ";
    for (int i = 0; i < size; i++)
        std::cout << dynArr[i] << " ";
    std::cout << "\n";
    delete[] dynArr; // free dynamic array
    std::cout << "\n";

    // 9. Pointer and const
    std::cout << "9. Pointer and const\n";
    const int val = 50;
    const int *pConst = &val; // pointer to const int
    std::cout << "Value of const int via pointer: " << *pConst << "\n\n";

    // 10. Array of pointers
    std::cout << "10. Array of pointers\n";
    int a = 1, b = 2, c = 3;
    int *arrPtr[3] = {&a, &b, &c};
    for (int i = 0; i < 3; i++)
        std::cout << "Value via arrPtr[" << i << "]: " << *arrPtr[i] << "\n";

    return 0;
}
