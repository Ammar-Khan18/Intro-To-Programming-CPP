#include <iostream>

// Function to swap two integers using pointers
void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main()
{
    int x = 5, y = 10;
    std::cout << "Before swap: x = " << x << ", y = " << y << "\n";
    swap(&x, &y); // pass addresses
    std::cout << "After swap: x = " << x << ", y = " << y << "\n";

    return 0;
}
