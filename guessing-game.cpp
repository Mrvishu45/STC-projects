#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {

    int choice, number, guess;
    int attempts, maxAttempts;
    int score = 100;

    srand(time(0));

    cout << "===== Advanced Number Guessing Game =====\n";

    cout << "Select Difficulty Level:\n";
    cout << "1. Easy (1-50)\n";
    cout << "2. Medium (1-100)\n";
    cout << "3. Hard (1-200)\n";

    cout << "Enter choice: ";
    cin >> choice;

    switch(choice) {

        case 1:
            number = rand() % 50 + 1;
            maxAttempts = 10;
            break;

        case 2:
            number = rand() % 100 + 1;
            maxAttempts = 7;
            break;

        case 3:
            number = rand() % 200 + 1;
            maxAttempts = 5;
            break;

        default:
            cout << "Invalid Choice!";
            return 0;
    }

    cout << "\nGame Started!\n";

    for(attempts = 1; attempts <= maxAttempts; attempts++) {

        cout << "\nAttempt " << attempts << "/" << maxAttempts;
        cout << "\nEnter your guess: ";
        cin >> guess;

        if(guess == number) {
            cout << "\nCorrect! You guessed the number.\n";
            cout << "Your Score = " << score << endl;
            break;
        }

        else if(guess > number) {
            cout << "Too High!";
        }

        else {
            cout << "Too Low!";
        }

        score -= 10;
    }

    if(guess != number) {
        cout << "\n\nGame Over!";
        cout << "\nCorrect Number was: " << number;
    }

    return 0;
}