#include <iostream>

int main()
{
    int permissions, toggleMask;

    const int READ = 4;  // 100 in binary
    const int WRITE = 2; // 010 in binary
    const int EXEC = 1;  // 001 in binary

    // Prompt user for current permissions
    std::cout << "Enter current permissions (0-7): ";
    std::cin >> permissions;

    std::cout << "\nCurrent Permissions:" << std::endl;
    std::cout << "Read  :\t" << (permissions & READ ? "True" : "False") << std::endl;
    std::cout << "Write :\t" << (permissions & WRITE ? "True" : "False") << std::endl;
    std::cout << "Exec  :\t" << (permissions & EXEC ? "True" : "False") << std::endl;

    // Prompt user for toggle mask
    std::cout << "\nEnter toggle mask (0-7): ";
    std::cin >> toggleMask;

    // Calculate new permissions by toggling
    permissions = permissions ^ toggleMask;

    std::cout << "\nNew Permissions after toggling:" << std::endl;
    std::cout << "Read  :\t" << (permissions & READ ? "True" : "False") << std::endl;
    std::cout << "Write :\t" << (permissions & WRITE ? "True" : "False") << std::endl;
    std::cout << "Exec  :\t" << (permissions & EXEC ? "True" : "False") << std::endl;

    return 0;
}