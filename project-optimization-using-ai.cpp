#include <iostream>
using namespace std;

class Student
{
    int roll;
    string name;

public:
    void input()
    {
        cout << "Enter Roll No: ";
        cin >> roll;

        cout << "Enter Name: ";
        cin >> name;
    }

    void search(int r)
    {
        if (roll == r)
        {
            cout << "Student Found\n";
            cout << "Roll No: " << roll << endl;
            cout << "Name: " << name << endl;
        }
    }
};

int main()
{
    Student s;

    s.input();

    int r;
    cout << "Enter Roll No to Search: ";
    cin >> r;

    s.search(r);

    return 0;
}