#include<iostream>
using namespace std;

class BankAccount {
    private:
        int accountNumber;
        string accountHolderName;
        double accountBalance;
    public:
        BankAccount(int accountNumber, string accountHolderName, double accountBalance) {
            this->accountNumber = accountNumber;
            this->accountHolderName = accountHolderName;
            this->accountBalance = accountBalance;
        }
        int deposit(double amount) {
            accountBalance += amount;
            return accountBalance;
        }
        int withdraw(double amount) {
            if (accountBalance - amount < 0) {
                cout << "Insufficient Balance" << endl;
                return 0;
            }
            accountBalance -= amount;
            return accountBalance;
        }
        int display() {
            cout << "Account Holder Name: " << accountHolderName << endl;
            cout << "Account Number: " << accountNumber << endl;
            cout << "Account Balance: " << accountBalance << endl;
            return 0;
        }
};

int main() {
    BankAccount account(123456789, "Arya Suman", 10000);
    account.deposit(5000);
    account.display();
    cout << "----------------------------------------" << endl;
    account.withdraw(20000);
    account.display();  
    cout << "----------------------------------------" << endl;
    account.withdraw(4000);
    account.display();
    return 0;
}