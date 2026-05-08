#include <iostream>
#include <string>
using namespace std;

class LoginSystem
{
private:
    string username;
    string password;

public:
    void setData()
    {
        cout << "Create Username: ";
        cin >> username;

        cout << "Create Password: ";
        cin >> password;
    }

    void login()
    {
        string user, pass;

        cout << "\n===== LOGIN =====" << endl;

        cout << "Enter Username: ";
        cin >> user;

        cout << "Enter Password: ";
        cin >> pass;

        if(user == username && pass == password)
        {
            cout << "\nLogin Successful!" << endl;
        }
        else
        {
            cout << "\nInvalid Username or Password!" << endl;
        }
    }
};

int main()
{
    LoginSystem obj;

    obj.setData();
    obj.login();

    return 0;
}