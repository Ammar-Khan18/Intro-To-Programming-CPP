#include <iostream>
using namespace std;

int main()
{
    int num;
    int sum = 0, count = 0;

    cout << "Enter numbers (-1 to stop):" << endl;

    while (true)
    {
        cin >> num;

        if (num == -1)
        {
            break; // stop when sentinel value is entered
        }

        if (num > 0)
        {
            sum += num; // add positive numbers
            count++;    // increment count
        }
    }

    cout << "\nTotal sum of positive numbers: " << sum << endl;
    cout << "Count of positive numbers: " << count << endl;

    return 0;
}
