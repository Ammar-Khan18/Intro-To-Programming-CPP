#include <iostream>
#include <string>
using namespace std;

// TASK 2: Student Scores

struct Score
{
    string subject;
    int marks;
};

int main()
{
    Score scores[3];

    cout << "Enter 3 scores:\n";
    for (int i = 0; i < 3; i++)
    {
        cout << "Subject name: ";
        cin >> scores[i].subject;
        cout << "Marks: ";
        cin >> scores[i].marks;
    }

    cout << "\nYour Scores:\n";
    for (int i = 0; i < 3; i++)
    {
        cout << scores[i].subject << ": " << scores[i].marks << endl;
    }

    return 0;
}