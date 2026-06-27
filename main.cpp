#include<bits/stdc++.h>
using namespace std;


int main()
{
    int lower = 1;
    int upper = 100;
    int randomNumber;
    int guess;
    int attempts = 0;

    srand(time(0));
    randomNumber = rand() % (upper - lower + 1) + lower;

    cout << "=====================================" << endl;
    cout << "      NUMBER GUESSING GAME" << endl;
    cout << "=====================================" << endl;
    cout << "Guess a number between " << lower << " and " << upper << endl;

    while (true)
    {
        cout << "Enter your guess: ";
        cin >> guess;

        attempts++;

        if (guess > randomNumber)
        {
            cout << "Too High! Try Again."<<endl;
        }
        else if (guess < randomNumber)
        {
            cout << "Too Low! Try Again."<<endl;
        }
        else
        {
            cout << "Congratulations! You guessed the correct number." << endl;
            cout << "The number was: " << randomNumber << endl;
            cout << "Total Attempts: " << attempts << endl;

            if (attempts <= 5)
            {
                cout << "Score: Excellent!" << endl;
            }
            else if (attempts <= 10)
            {
                cout << "Score: Good!" << endl;
            }
            else
            {
                cout << "Score: Keep Practicing!" << endl;
            }

            break; 
        }
    }

    cout << "Thank You for Playing!" << endl;

    return 0;
}