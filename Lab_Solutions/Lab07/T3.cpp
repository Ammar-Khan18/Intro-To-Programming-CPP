#include <iostream>
#include <vector>
using namespace std;

int main()
{
    // Hardcoded 3x3 matrices stored as 1D arrays
    vector<int> A = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    vector<int> B = {9, 8, 7, 6, 5, 4, 3, 2, 1};
    vector<int> C(9); // Result matrix

    int N = 3; // Rows
    int M = 3; // Columns

    // Perform matrix addition using 1D index mapping
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < M; j++)
        {
            int index = i * M + j;
            C[index] = A[index] + B[index];
        }
    }

    // Print Matrix A
    cout << "Matrix A (3x3):" << endl;
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < M; j++)
        {
            cout << A[i * M + j];
            if (j < M - 1)
                cout << " ";
        }
        cout << endl;
    }

    cout << endl;

    // Print Matrix B
    cout << "Matrix B (3x3):" << endl;
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < M; j++)
        {
            cout << B[i * M + j];
            if (j < M - 1)
                cout << " ";
        }
        cout << endl;
    }

    cout << endl;

    // Print Result Matrix C
    cout << "Resulting matrix C (3x3):" << endl;
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < M; j++)
        {
            cout << C[i * M + j];
            if (j < M - 1)
                cout << " ";
        }
        cout << endl;
    }
}
