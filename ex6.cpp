#include <iostream>
#include <string>
using namespace std;

class Bank {
protected:
    string name;
    int acc_no;
    int bal;

public:
    Bank() : name(""), acc_no(0), bal(0) {}

    void input() {
        cout << "Enter name: ";
       cin>>name;
        cout << "Enter account number: ";
        cin >> acc_no;
        cout << "Enter balance: ";
        cin >> bal;
    }

    void withdrawbal() {
        int a;
        cout << "Enter withdrawal amount: ";
        cin >> a;
        if (a > bal) {
            cout << "Insufficient funds. Current balance: " << bal << endl;
        } else {
            bal -= a;
            cout << "Current balance after withdrawal is: " << bal << endl;
        }
    }

    void depositebal() {
        int b;
        cout << "Enter deposit amount: ";
        cin >> b;
        if (b < 0) {
            cout << "Invalid deposit amount." << endl;
            
        }
        bal += b;
        cout << "Current balance after deposit is: " << bal << endl;
    }

    void display() const {
        cout << "Name of account holder: " << name << endl;
        cout << "Account no: " << acc_no << endl;
        cout << "Current balance of account holder: " << bal << endl;
    }
};

int main() {
    
    Bank b1;
    b1.input();
    b1.display();

    b1.withdrawbal();
    b1.depositebal();

    cout << "Final account state:" << endl;
    b1.display();

    return 0;
}