#include <iostream>
#include <string>
using namespace std;
// Function to recursively reverse a string in place
void reverse_string(string &str, int start = 0, int end = -1)
{
    // Initialize 'end' on first call
    if (end == -1)
        end = str.length() - 1;
    // Base case: when start >= end, stop recursion
    if (start >= end)
        return;
    // Swap characters at 'start' and 'end'
    char temp = str[start];
    str[start] = str[end];
    str[end] = temp;
    // Recursive call for next pair
    reverse_string(str, start + 1, end - 1);
}
int main()
{
    string text;
    cout << "Enter a string: ";
    getline(cin, text); // read full line (with spaces)
    cout << "Original string: " << text << endl;
    reverse_string(text); // function call
    cout << "Reversed string: " << text << endl;
    return 0;
}
