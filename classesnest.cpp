#include <iostream>
#include <string>
using namespace std;

class outer {
private:
    class inner {
    public:
        void display() {
            cout << "This is the inner class" << endl;
        }
    };

public:
    void showInner() {
        inner obj;
        obj.display();
    }
};

class bank {
private:
    class account {
    private:
        string name;
        int accountnumber;
        double balance;

    public:
        account(string customerName = "", int number = 0, double amount = 0.0) {
            name = customerName;
            accountnumber = number;
            balance = amount;
        }

        void setName(string customerName) {
            name = customerName;
        }

        string getName() const {
            return name;
        }

        void deposit(double amount) {
            if (amount > 0) {
                balance += amount;
                cout << "Deposit successful." << endl;
            } else {
                cout << "Invalid deposit amount." << endl;
            }
        }

        void withdraw(double amount) {
            if (amount > 0 && amount <= balance) {
                balance -= amount;
                cout << "Withdrawal successful." << endl;
            } else {
                cout << "Insufficient balance or invalid amount." << endl;
            }
        }

        void showaccount() const {
            cout << "Account Holder: " << name << endl;
            cout << "Account Number: " << accountnumber << endl;
            cout << "Balance: " << balance << endl;
        }
    };
public:
    void createaccount() {
        const int size = 3;
        account accounts[size];

        for (int i = 0; i < size; i++) {
            string customerName;
            int number;
            double initialBalance;

            cout << "\nEnter account holder name for account " << i + 1 << ": ";
            cin >> customerName;

            cout << "Enter account number: ";
            cin >> number;

            cout << "Enter initial balance: ";
            cin >> initialBalance;

            accounts[i] = account(customerName, number, initialBalance);
        }

        int choice;
        int index;
        double amount;

        while (true) {
            cout << "\n1. Deposit" << endl;
            cout << "2. Withdraw" << endl;
            cout << "3. Show Account" << endl;
            cout << "4. Exit" << endl;
            cout << "Enter your choice: ";
            cin >> choice;

            if (choice == 1) {
                cout << "Enter account index (1-3): ";
                cin >> index;
                cout << "Enter deposit amount: ";
                cin >> amount;
                if (index >= 1 && index <= size) {
                    accounts[index - 1].deposit(amount);
                } else {
                    cout << "Invalid account index." << endl;
                }
            } else if (choice == 2) {
                cout << "Enter account index (1-3): ";
                cin >> index;
                cout << "Enter withdrawal amount: ";
                cin >> amount;
                if (index >= 1 && index <= size) {
                    accounts[index - 1].withdraw(amount);
                } else {
                    cout << "Invalid account index." << endl;
                }
            } else if (choice == 3) {
                cout << "Enter account index (1-3): ";
                cin >> index;
                if (index >= 1 && index <= size) {
                    accounts[index - 1].showaccount();
                } else {
                    cout << "Invalid account index." << endl;
                }
            } else if (choice == 4) {
                cout << "Exiting program..." << endl;
                break;
            } else {
                cout << "Invalid choice. Try again." << endl;
            }
        }
    }
};

int main() {
    outer obj;
    obj.showInner();

    bank b;
    b.createaccount();

    return 0;
}