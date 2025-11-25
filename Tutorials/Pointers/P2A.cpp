#include <iostream>

int main()
{
    int arr[5] = {10, 20, 30, 40, 50};
    int *ptr = arr; // points to first element of array

    std::cout << "First element: " << *ptr << "\n";
    ptr++; // move pointer to next integer (next element)
    std::cout << "Second element: " << *ptr << "\n";

    ptr += 2; // move 2 elements forward
    std::cout << "Fourth element: " << *ptr << "\n";

    return 0;
}
