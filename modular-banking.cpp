#include <iostream>
using namespace std;

float balance = 1000;

void deposit() {
    float amount;

    cout << "\nEnter amount to deposit: ";
    cin >> amount;

    balance += amount;

    cout << "Amount Deposited Successfully!";
    cout << "\nCurrent Balance = " << balance;
}

void withdraw() {
    float amount;

    cout << "\nEnter amount to withdraw: ";
    cin >> amount;

    if(amount > balance) {
        cout << "Insufficient Balance!";
    }
    else {
        balance -= amount;

        cout << "Withdrawal Successful!";
        cout << "\nRemaining Balance = " << balance;
    }
}

void checkBalance() {
    cout << "\nCurrent Balance = " << balance;
}

void calculateInterest() {

    float principal, rate, time, SI;

    cout << "\nEnter Principal Amount: ";
    cin >> principal;

    cout << "Enter Rate of Interest: ";
    cin >> rate;

    cout << "Enter Time (Years): ";
    cin >> time;

    SI = (principal * rate * time) / 100;

    cout << "\nSimple Interest = " << SI;
}

int main() {

    int choice;

    do {

        cout << "\n\n===== Modular Banking Calculator =====";
        cout << "\n1. Deposit";
        cout << "\n2. Withdraw";
        cout << "\n3. Check Balance";
        cout << "\n4. Calculate Interest";
        cout << "\n5. Exit";

        cout << "\nEnter your choice: ";
        cin >> choice;

        switch(choice) {

            case 1:
                deposit();
                break;

            case 2:
                withdraw();
                break;

            case 3:
                checkBalance();
                break;

            case 4:
                calculateInterest();
                break;

            case 5:
                cout << "\nThank You for Using Banking System!";
                break;

            default:
                cout << "\nInvalid Choice!";
        }

    } while(choice != 5);

    return 0;
}