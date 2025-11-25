#include <iostream>

int main()
{
    int *ptr = nullptr; // pointer not pointing to any address
    if (ptr == nullptr)
        std::cout << "Pointer is null and safe to check before using\n";

    return 0;
}
