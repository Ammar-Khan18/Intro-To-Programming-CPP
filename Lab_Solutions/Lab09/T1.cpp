#include <iostream>
using namespace std;
// Function to compute the sum of all elements in a 1D array
int arraySum(int arr[], int n)
{
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum += arr[i]; // Add each element to sum
    }
    return sum; // Return the total sum
}
int main()
{
    int arr[] = {10, 20, 30, 40, 50};     // Sample array
    int n = sizeof(arr) / sizeof(arr[0]); // Calculate number of elements
    int result = arraySum(arr, n);        // Call the function
    cout << "Sum of array elements = " << result << endl;
    return 0;
}