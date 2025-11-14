#include <iostream>
#include <string>
using namespace std;
// Recursive function to check if a string is a palindrome
bool isPalindrome(string str)
{
    // Base case: if string has 0 or 1 characters, it's a palindrome
    if (str.length() <= 1)
        return true;
    // Check first and last characters
    if (str[0] != str[str.length() - 1])
        return false;
    // Recursive call: check the substring without first and last characters
    return isPalindrome(str.substr(1, str.length() - 2));
}
int main()
{
    string word;
    cout << "Enter a word: ";
    cin >> word;
    // Convert to lowercase for case-insensitive comparison
    for (auto &c : word)
        c = tolower(c);
    if (isPalindrome(word))
        cout << "It is a palindrome!" << endl;
    else
        cout << "It is not a palindrome." << endl;
    return 0;
}