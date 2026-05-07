#include <iostream>
using namespace std;

class Student {
public:
    int rollNo;
    string name;
    float marks;
};

Student s[100];
int total = 0;

void addStudent() {
    cout << "\nHow many students you want to add? ";
    int n;
    cin >> n;

    for(int i = total; i < total + n; i++) {

        cout << "\nEnter Roll Number: ";
        cin >> s[i].rollNo;

        cout << "Enter Name: ";
        cin >> s[i].name;

        cout << "Enter Marks: ";
        cin >> s[i].marks;
    }

    total += n;
}

void displayStudents() {

    if(total == 0) {
        cout << "\nNo student record found!";
        return;
    }

    cout << "\nStudent Records:\n";

    for(int i = 0; i < total; i++) {

        cout << "\nRoll No: " << s[i].rollNo;
        cout << "\nName: " << s[i].name;
        cout << "\nMarks: " << s[i].marks << endl;
    }
}

void searchStudent() {

    int roll;
    cout << "\nEnter Roll Number to search: ";
    cin >> roll;

    for(int i = 0; i < total; i++) {

        if(s[i].rollNo == roll) {

            cout << "\nStudent Found!";
            cout << "\nName: " << s[i].name;
            cout << "\nMarks: " << s[i].marks << endl;
            return;
        }
    }

    cout << "\nStudent not found!";
}

void updateStudent() {

    int roll;
    cout << "\nEnter Roll Number to update: ";
    cin >> roll;

    for(int i = 0; i < total; i++) {

        if(s[i].rollNo == roll) {

            cout << "\nEnter New Name: ";
            cin >> s[i].name;

            cout << "Enter New Marks: ";
            cin >> s[i].marks;

            cout << "\nRecord Updated!";
            return;
        }
    }

    cout << "\nStudent not found!";
}

void deleteStudent() {

    int roll;
    cout << "\nEnter Roll Number to delete: ";
    cin >> roll;

    for(int i = 0; i < total; i++) {

        if(s[i].rollNo == roll) {

            for(int j = i; j < total - 1; j++) {
                s[j] = s[j + 1];
            }

            total--;

            cout << "\nRecord Deleted!";
            return;
        }
    }

    cout << "\nStudent not found!";
}

int main() {

    int choice;

    do {

        cout << "\n\n===== Student Management System =====";
        cout << "\n1. Add Student";
        cout << "\n2. Display Students";
        cout << "\n3. Search Student";
        cout << "\n4. Update Student";
        cout << "\n5. Delete Student";
        cout << "\n6. Exit";

        cout << "\nEnter your choice: ";
        cin >> choice;

        switch(choice) {

            case 1:
                addStudent();
                break;

            case 2:
                displayStudents();
                break;

            case 3:
                searchStudent();
                break;

            case 4:
                updateStudent();
                break;

            case 5:
                deleteStudent();
                break;

            case 6:
                cout << "\nExiting Program...";
                break;

            default:
                cout << "\nInvalid Choice!";
        }

    } while(choice != 6);

    return 0;
}