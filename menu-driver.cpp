#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int choice;
    double a, b;

    do {
        cout << "\n===== Scientific Calculator =====";
        cout << "\n1. Addition";
        cout << "\n2. Subtraction";
        cout << "\n3. Multiplication";
        cout << "\n4. Division";
        cout << "\n5. Square Root";
        cout << "\n6. Power";
        cout << "\n7. Exit";
        cout << "\nEnter choice: ";
        cin >> choice;

        switch(choice) {
            case 1:
                cout << "Enter two numbers: ";
                cin >> a >> b;
                cout << "Result = " << a + b;
                break;

            case 2:
                cout << "Enter two numbers: ";
                cin >> a >> b;
                cout << "Result = " << a - b;
                break;

            case 3:
                cout << "Enter two numbers: ";
                cin >> a >> b;
                cout << "Result = " << a * b;
                break;

            case 4:
                cout << "Enter two numbers: ";
                cin >> a >> b;
                if(b != 0)
                    cout << "Result = " << a / b;
                else
                    cout << "Division by zero not allowed";
                break;

            case 5:
                cout << "Enter number: ";
                cin >> a;
                cout << "Square Root = " << sqrt(a);
                break;

            case 6:
                cout << "Enter base and power: ";
                cin >> a >> b;
                cout << "Result = " << pow(a,b);
                break;

            case 7:
                cout << "Exiting...";
                break;

            default:
                cout << "Invalid Choice";
        }

    } while(choice != 7);

    return 0;
}