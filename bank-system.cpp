#include <iostream>
using namespace std;

class Bank
{
    string name;
    int accNo;
    float balance;

public:
    void createAccount()
    {
        cout << "Enter Account Holder Name: ";
        cin >> name;

        cout << "Enter Account Number: ";
        cin >> accNo;

        cout << "Enter Initial Balance: ";
        cin >> balance;
    }

    void deposit()
    {
        float amount;

        cout << "Enter Deposit Amount: ";
        cin >> amount;

        balance += amount;

        cout << "Amount Deposited Successfully!" << endl;
    }

    void withdraw()
    {
        float amount;

        cout << "Enter Withdraw Amount: ";
        cin >> amount;

        if(amount <= balance)
        {
            balance -= amount;
            cout << "Withdrawal Successful!" << endl;
        }
        else
        {
            cout << "Insufficient Balance!" << endl;
        }
    }

    void display()
    {
        cout << "\n----- Account Details -----" << endl;
        cout << "Name      : " << name << endl;
        cout << "Account No: " << accNo << endl;
        cout << "Balance   : " << balance << endl;
    }
};

int main()
{
    Bank b;

    b.createAccount();

    int choice;

    do
    {
        cout << "\n===== BANK MENU =====" << endl;
        cout << "1. Deposit" << endl;
        cout << "2. Withdraw" << endl;
        cout << "3. Display Account" << endl;
        cout << "4. Exit" << endl;

        cout << "Enter Choice: ";
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
                cout << "Thank You!" << endl;
                break;

            default:
                cout << "Invalid Choice!" << endl;
        }

    } while(choice != 4);

    return 0;
}