#include <iostream>
using namespace std;
// WRONG: assigns pointer to address of a local variable
void assignLocal(int *&p)
{
    int i = 2; // local variable on stack
    p = &i;    // BAD: pointer will become dangling after function ends
}
int main()
{
    int *p = nullptr;
    assignLocal(p);
    cout << "Pointer p now holds address: " << p << endl;
    // This line causes UNDEFINED BEHAVIOR!
    cout << "Attempting to read *p gives: " << *p << endl;
    cout << "\nExplanation: 'i' was a local variable inside assignLocal.\n"
         << "After the function returned, that memory is invalid.\n"
         << "p is now a dangling pointer.\n";
    return 0;
}