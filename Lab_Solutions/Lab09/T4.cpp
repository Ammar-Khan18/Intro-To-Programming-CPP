#include <iostream>
#include <vector>
using namespace std;
// Helper recursive function — finds max of first n elements
int findMax(const vector<int> &a, int n)
{
    if (n == 1)
        return a[0];                      // base case: only one element
    int m = findMax(a, n - 1);            // recursive call on first n-1 elements
    return (m > a[n - 1]) ? m : a[n - 1]; // return max between m and last element
}
// Wrapper function
int findMax(const vector<int> &a)
{
    return findMax(a, a.size());
}
int main()
{
    vector<int> arr = {3, 8, 1, 12, 7, 9};
    cout << "Maximum element: " << findMax(arr) << endl;
    return 0;
}