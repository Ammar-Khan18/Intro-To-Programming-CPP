#include <iostream>
using namespace std;

int main()
{
    int N;
    cout << "Enter the number of terms: ";
    cin >> N;

    int t1 = 0, t2 = 1; // First two terms
    cout << "Fibonacci Series: ";

    for (int i = 1; i <= N; i++)
    {
        cout << t1 << " ";  // Print current term
        int next = t1 + t2; // Calculate next term
        t1 = t2;            // Move to next
        t2 = next;
    }

    cout << endl;
    return 0;
}
