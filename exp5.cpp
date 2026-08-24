#include <iostream>
#include <string>
using namespace std;

class bank {
private:
    int accnumber;
    string accname;
    int balance;

public:
    bank(int number, string name) {
        accnumber = number;
        accname = name;
        balance = 0;
    }

    void deposit(int amount) {
        if (amount > 0) {
            balance += amount;
            cout << "Money deposited" << endl;
        }
    }

    void withdraw(int amount) {
        if (amount > 0 && amount <= balance) {
            balance -= amount;
            cout << "Money withdrawn successfully" << endl;
        } else {
            cout << "Insufficient balance or invalid amount" << endl;
        }
    }

    void display() const {
        cout << "Account number: " << accnumber << endl;
        cout << "Account holder: " << accname << endl;
        cout << "Balance: " << balance << endl;
    }
};

int main() {
    bank account(1001, "Alice");

    account.display();
    account.deposit(500);
    account.withdraw(200);
    account.display();

    return 0;
}