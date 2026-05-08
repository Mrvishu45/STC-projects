#include <iostream>
#include <cmath>
using namespace std;

class UtilityProgram
{
public:

    // Addition
    void add()
    {
        int a, b;
        cout << "Enter Two Numbers: ";
        cin >> a >> b;

        cout << "Addition = " << a + b << endl;
    }

    // Subtraction
    void subtract()
    {
        int a, b;
        cout << "Enter Two Numbers: ";
        cin >> a >> b;

        cout << "Subtraction = " << a - b << endl;
    }

    // Multiplication
    void multiply()
    {
        int a, b;
        cout << "Enter Two Numbers: ";
        cin >> a >> b;

        cout << "Multiplication = " << a * b << endl;
    }

    // Division
    void divide()
    {
        float a, b;
        cout << "Enter Two Numbers: ";
        cin >> a >> b;

        if(b != 0)
            cout << "Division = " << a / b << endl;
        else
            cout << "Cannot Divide by Zero!" << endl;
    }

    // Factorial
    void factorial()
    {
        int n, fact = 1;

        cout << "Enter Number: ";
        cin >> n;

        for(int i = 1; i <= n; i++)
        {
            fact *= i;
        }

        cout << "Factorial = " << fact << endl;
    }

    // Prime Number Check
    void prime()
    {
        int n, count = 0;

        cout << "Enter Number: ";
        cin >> n;

        for(int i = 1; i <= n; i++)
        {
            if(n % i == 0)
                count++;
        }

        if(count == 2)
            cout << n << " is Prime Number" << endl;
        else
            cout << n << " is Not Prime Number" << endl;
    }
};

int main()
{
    UtilityProgram u;

    int choice;

    do
    {
        cout << "\n===== MULTI FUNCTION UTILITY PROGRAM =====" << endl;

        cout << "1. Addition" << endl;
        cout << "2. Subtraction" << endl;
        cout << "3. Multiplication" << endl;
        cout << "4. Division" << endl;
        cout << "5. Factorial" << endl;
        cout << "6. Prime Number Check" << endl;
        cout << "7. Exit" << endl;

        cout << "Enter Your Choice: ";
        cin >> choice;

        switch(choice)
        {
            case 1:
                u.add();
                break;

            case 2:
                u.subtract();
                break;

            case 3:
                u.multiply();
                break;

            case 4:
                u.divide();
                break;

            case 5:
                u.factorial();
                break;

            case 6:
                u.prime();
                break;

            case 7:
                cout << "Program Ended!" << endl;
                break;

            default:
                cout << "Invalid Choice!" << endl;
        }

    } while(choice != 7);

    return 0;
}