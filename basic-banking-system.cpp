#include <iostream>
using namespace std;

class BankAccount
{
private:
    string name;
    int accountNumber;
    float balance;

public:
    // Create Account
    void createAccount()
    {
        cout << "Enter Account Holder Name: ";
        cin >> name;

        cout << "Enter Account Number: ";
        cin >> accountNumber;

        cout << "Enter Initial Balance: ";
        cin >> balance;
    }

    // Deposit Money
    void deposit()
    {
        float amount;

        cout << "Enter Amount to Deposit: ";
        cin >> amount;

        balance += amount;

        cout << "Amount Deposited Successfully!" << endl;
    }

    // Withdraw Money
    void withdraw()
    {
        float amount;

        cout << "Enter Amount to Withdraw: ";
        cin >> amount;

        if (amount <= balance)
        {
            balance -= amount;
            cout << "Withdrawal Successful!" << endl;
        }
        else
        {
            cout << "Insufficient Balance!" << endl;
        }
    }

    // Display Account Details
    void display()
    {
        cout << "\n===== Account Details =====" << endl;
        cout << "Name           : " << name << endl;
        cout << "Account Number : " << accountNumber << endl;
        cout << "Balance        : " << balance << endl;
    }
};

int main()
{
    BankAccount b;

    int choice;

    b.createAccount();

    do
    {
        cout << "\n===== BANK MENU =====" << endl;
        cout << "1. Deposit Money" << endl;
        cout << "2. Withdraw Money" << endl;
        cout << "3. Display Account" << endl;
        cout << "4. Exit" << endl;

        cout << "Enter Your Choice: ";
        cin >> choice;

        switch(choice)
        {
            case 1:
                b.deposit();
                break;

            case 2:
                b.withdraw();
                break;

            case 3:
                b.display();
                break;

            case 4:
                cout << "Thank You for Using Banking System!" << endl;
                break;

            default:
                cout << "Invalid Choice!" << endl;
        }

    } while(choice != 4);

    return 0;
}