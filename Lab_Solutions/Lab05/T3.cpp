#include <iostream>
#include <cstdlib> // for rand() and srand()
#include <ctime>   // for time()
using namespace std;

int main()
{
    // Seed the random number generator
    srand(time(0));

    // Generate random number between 1 and 100
    int secretNumber = rand() % 100 + 1;
    int guess;

    cout << "I have chosen a number between 1 and 100. Try to guess it!" << endl;

    // Keep looping until user guesses correctly
    do
    {
        cout << "Enter your guess: ";
        cin >> guess;

        if (guess < secretNumber)
        {
            cout << "Too Low!" << endl;
        }
        else if (guess > secretNumber)
        {
            cout << "Too High!" << endl;
        }
        else
        {
            cout << "Congratulations! You guessed it." << endl;
        }
    } while (guess != secretNumber);

    return 0;
}
