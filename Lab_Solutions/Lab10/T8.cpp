#include <iostream>
using namespace std;
// Pointer-based sum
int sumArray(int *arr, int n)
{
    int sum = 0;
    for (int i = 0; i < n; i++)
        sum += *(arr + i); // same as arr[i]
    return sum;
}
int main()
{
    int nums[] = {4, 7, 1, 3, 9};
    int size = 5;
    cout << "Sum = " << sumArray(nums, size) << endl;
    return 0;
}