#include <iostream>
#include <string>
using namespace std;

class BankAccount
{
private:
    int accountNo;
    string name;
    double balance;

public:
    void input()
    {
        cout << "Enter Account Number: ";
        while (!(cin >> accountNo) || accountNo <= 0)
        {
            cout << "Invalid account number. Please enter a positive integer: ";
            cin.clear();
            cin.ignore(1000, '\n');
        }

        cout << "Enter Name: ";
        cin.ignore(1000, '\n');
        getline(cin, name);

        while (name.empty())
        {
            cout << "Name cannot be empty. Please enter a valid name: ";
            getline(cin, name);
        }

        cout << "Enter Initial Balance: ";
        while (!(cin >> balance) || balance < 0)
        {
            cout << "Invalid balance. Please enter a non-negative number: ";
            cin.clear();
            cin.ignore(1000, '\n');
        }
    }

    void deposit()
    {
        double amount;
        cout << "Enter deposit amount: ";
        while (!(cin >> amount) || amount <= 0)
        {
            cout << "Invalid deposit amount. Please enter a positive number: ";
            cin.clear();
            cin.ignore(1000, '\n');
        }

        balance += amount;
        cout << "Amount deposited successfully." << endl;
    }

    void withdraw()
    {
        double amount;
        cout << "Enter withdrawal amount: ";
        while (!(cin >> amount) || amount <= 0)
        {
            cout << "Invalid withdrawal amount. Please enter a positive number: ";
            cin.clear();
            cin.ignore(1000, '\n');
        }

        if (amount <= balance)
        {
            balance -= amount;
            cout << "Amount withdrawn successfully." << endl;
        }
        else
        {
            cout << "Insufficient balance." << endl;
        }
    }

    void display()
    {
        cout << "\nAccount Number: " << accountNo;
        cout << "\nName: " << name;
        cout << "\nBalance: " << balance << endl;
    }
};

int main()
{
    BankAccount account;

    account.input();
    account.deposit();
    account.withdraw();
    account.display();

    return 0;
}
