#include <iostream>

// Recursive function to calculate factorial
int factorial(int n)
{
    if (n <= 1)
        return 1;
    else
        return n * factorial(n - 1);
    // Advantages:
    //  - Simple and easy to understand.
    //  - Mirrors the mathematical definition.
    // Disadvantages:
    //  - Can overflow for large n.
    //  - Each function call uses stack memory.
}

// Recursive function to calculate nth Fibonacci number
int fibonacci(int n)
{
    if (n <= 1)
        return n;
    else
        return fibonacci(n - 1) + fibonacci(n - 2);
    // Advantages:
    //  - Simple and intuitive; follows Fibonacci definition.
    // Disadvantages:
    //  - Very slow for large n due to repeated calculations.
    //  - High memory use for deep recursion.
}

int main()
{
    int n = 5;

    std::cout << n << "! = " << factorial(n) << '\n';

    // std::cout << "fib(" << n << ") = " << fibonacci(n) << '\n';

    return 0;
}
