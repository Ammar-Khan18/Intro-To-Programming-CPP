#include <iostream>

int main()
{
    int nums = 0;

    for (int i = 0; i < 9; i++)
    {
        int n;
        std::cout << "Enter number " << (i + 1) << ": ";
        std::cin >> n;

        if (n < 1 || n > 9)
        {
            std::cout << "Invalid input. Numbers must be between 1 and 9." << std::endl;
            return 1;
        }

        int mask = 1 << (n - 1);
        if (nums & mask)
        {
            std::cout << "Invalid row. Number " << n << " is repeated." << std::endl;
            return 1;
        }

        nums |= mask;
    }

    std::cout << "Valid Sudoku row." << std::endl;

    return 0;
}