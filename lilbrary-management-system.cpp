#include <iostream>
using namespace std;

class Library
{
    int bookId;
    string bookName;
    string author;

public:
    void addBook()
    {
        cout << "Enter Book ID: ";
        cin >> bookId;

        cin.ignore();

        cout << "Enter Book Name: ";
        getline(cin, bookName);

        cout << "Enter Author Name: ";
        getline(cin, author);
    }

    void displayBook()
    {
        cout << "\n----- Book Details -----" << endl;
        cout << "Book ID    : " << bookId << endl;
        cout << "Book Name  : " << bookName << endl;
        cout << "Author     : " << author << endl;
    }
};

int main()
{
    Library b;

    b.addBook();
    b.displayBook();

    return 0;
}