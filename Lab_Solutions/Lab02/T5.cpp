#include <iostream>

int main()
{
    char secret, key, encryptedChar, decryptKey;

    // Prompt user for the secret character
    std::cout << "Secret: ";
    std::cin >> secret;

    // Prompt user for the key character
    std::cout << "Key: ";
    std::cin >> key;

    // Encrypt the secret using XOR operation with the key
    encryptedChar = (secret ^ key) + ' '; // Adding ' ' to ensure printable character
    std::cout << "\nEncrypted character: " << encryptedChar << std::endl;

    // Prompt user for the decryption key
    std::cout << "\nEnter key: ";
    std::cin >> decryptKey;

    // Decrypt the character using XOR operation with the decryption key
    char decryptedChar = (encryptedChar - ' ') ^ decryptKey; // Subtracting ' ' to reverse the earlier addition
    bool isCorrect = (decryptedChar == secret);

    // Display the result
    std::cout << (!isCorrect ? "Key error" : "Decrypted character: ");
    std::cout << (!isCorrect ? ' ' : decryptedChar) << std::endl;

    return 0;
}