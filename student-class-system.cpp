#include <iostream>
#include <string>
using namespace std;

class Student
{
private:
    int rollNo;
    string name;
    float marks;

public:
    // Function to enter student details
    void setData()
    {
        cout << "Enter Roll Number: ";
        cin >> rollNo;

        cin.ignore();

        cout << "Enter Student Name: ";
        getline(cin, name);

        cout << "Enter Marks: ";
        cin >> marks;
    }

    // Function to display student details
    void showData()
    {
        cout << "\n===== Student Details =====" << endl;
        cout << "Roll Number : " << rollNo << endl;
        cout << "Name        : " << name << endl;
        cout << "Marks       : " << marks << endl;

        // Grade Calculation
        if (marks >= 90)
            cout << "Grade       : A+" << endl;
        else if (marks >= 75)
            cout << "Grade       : A" << endl;
        else if (marks >= 60)
            cout << "Grade       : B" << endl;
        else if (marks >= 40)
            cout << "Grade       : C" << endl;
        else
            cout << "Grade       : Fail" << endl;
    }
};

int main()
{
    Student s1;

    s1.setData();
    s1.showData();

    return 0;
}