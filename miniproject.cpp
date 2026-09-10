#include <iostream>
using namespace std;

class Bank
{
private:
    class Account
    {
    private:
        int accountNumber;
        string accountHolderName;
        double balance;

    public:
        // constructor
        Account()
        {
            accountNumber = 0;
            accountHolderName = "";
            balance = 0.0;
        }

        Account(int accNum, string accHolderName, double bal)
        {
            accountNumber = accNum;
            accountHolderName = accHolderName;
            balance = bal;
        }

        void deposite(double amount)
        {
            if (amount > 0)
            {
                balance += amount;
                cout << "Deposited: " << amount << endl;
                cout << "updated balance: " << balance << endl;
            }
            else
            {
                cout << "Invalid deposit amount." << endl;
            }
        }

        void withdraw(double amount)
        {
            if (amount > 0 && amount <= balance)
            {
                balance -= amount;
                cout << "Withdrawn: " << amount << endl;
                cout << "updated balance: " << balance << endl;
            }
            else
            {
                cout << "Invalid withdrawal amount." << endl;
            }
        }

        void displayAccountDetails()
        {
            cout << "Account Number: " << accountNumber << endl;
            cout << "Account Holder Name: " << accountHolderName << endl;
            cout << "Balance: " << balance << endl;
        }

        int getAccountNumber()
        {
            return accountNumber;
        }
    };


    public :

    Account accounts[100]; 

    void createAccount()
    {
      
        accounts[0] = Account(1001, "Cheetah", 5000.0);
        accounts[1] = Account(1002, "Sheer", 3000.0);
        accounts[2] = Account(1003, "Meow", 7000.0);
        accounts[3] = Account(1004, "Laadle", 2000.0);

        
};

int findAccount(int accNum)
    {
        for (int i = 0; i < 100; i++)
        {
            if (accounts[i].getAccountNumber() == accNum)
            {
                return i; 
            }
        }
        return -1; 
    }
    

    void displayAllAccounts()
    {
        for (int i = 0; i < 100; i++)
        {
            if (accounts[i].getAccountNumber() != 0)
            {
                accounts[i].displayAccountDetails();
                cout << endl;
            }
        }
    }

    void depositeMoney(int accNum, double amount)
    {
        int index = findAccount(accNum);
        if (index != -1)
        {
            accounts[index].deposite(amount);
        }
        else
        {
            cout << "Account not found." << endl;
        }
    }       

  
    void withdrawMoney()
    {
        int accNum;
        double amount;
        cout << "Enter account number: ";
        cin >> accNum;
        int index = findAccount(accNum);
        if (index != -1)
        {
            cout << "Enter amount to withdraw: ";
            cin >> amount;
            accounts[index].withdraw(amount);
        }
        else
        {
            cout << "Account not found." << endl;
        }


    }

    void showParticularAccount()
    {
        
        int accNum;
        cout << "Enter account number: ";
        cin >> accNum;
        int index = findAccount(accNum);
        if (index != -1)
        {
            accounts[index].displayAccountDetails();
        }
        else
        {
            cout << "Account not found." << endl;
        }
    }
};
int main()
{
    Bank bank;
    int choice;

    bank.createAccount();

    do
    {
        cout << endl << "===== BANK MENU =====" << endl;
        cout << "1. Deposit money" << endl;
        cout << "2. Withdraw money" << endl;
        cout << "3. Show particular account" << endl;
        cout << "4. Show all accounts" << endl;
        cout << "5. Exit" << endl;
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice)
        {
        case 1:
        {
            int accountNumber;
            double amount;
            cout << "Enter account number: ";
            cin >> accountNumber;
            cout << "Enter amount to deposit: ";
            cin >> amount;
            bank.depositeMoney(accountNumber, amount);
            break;
        }
        case 2:
            bank.withdrawMoney();
            break;
        case 3:
            bank.showParticularAccount();
            break;
        case 4:
            bank.displayAllAccounts();
            break;
        case 5:
            cout << "Thank you for using the bank application." << endl;
            break;
        default:
            cout << "Invalid choice." << endl;
        }
    } while (choice != 5);

    return 0;
}