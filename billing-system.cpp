#include <iostream>
using namespace std;

class Billing
{
    string itemName;
    int quantity;
    float price, total;

public:
    void input()
    {
        cout << "Enter Item Name: ";
        cin >> itemName;

        cout << "Enter Quantity: ";
        cin >> quantity;

        cout << "Enter Price: ";
        cin >> price;

        total = quantity * price;
    }

    void display()
    {
        cout << "\n----- Bill Receipt -----" << endl;
        cout << "Item Name : " << itemName << endl;
        cout << "Quantity  : " << quantity << endl;
        cout << "Price     : " << price << endl;
        cout << "Total Bill: " << total << endl;
    }
};

int main()
{
    Billing b;

    b.input();
    b.display();

    return 0;
}