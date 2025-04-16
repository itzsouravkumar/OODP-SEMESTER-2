#include <iostream>
using namespace std;

class BankAccount {
    int accountNumber;
    double balance;

public:
    // Constructor Overloading
    BankAccount(int accNum, double bal) : accountNumber(accNum), balance(bal) {}
    BankAccount(int accNum) : accountNumber(accNum), balance(0.0) {}

    // Function Overloading for deposit and withdraw
    void deposit(double amount) { balance += amount; }
    void deposit(int amount) { balance += amount; }
    
    void withdraw(double amount) {
        if (balance >= amount)
            balance -= amount;
        else
            cout << "Insufficient balance!" << endl;
    }

    void withdraw(int amount) {
        if (balance >= amount)
            balance -= amount;
        else
            cout << "Insufficient balance!" << endl;
    }

    // Operator Overloading to compare balance
    bool operator>(const BankAccount &other) { return this->balance > other.balance; }

    // Display function
    void show() { cout << "Account " << accountNumber << ", Balance: " << balance << endl; }
};

// Main function
int main() {
    // Creating bank accounts using overloaded constructors
    BankAccount acc1(101, 500.0); // Account with initial balance
    BankAccount acc2(102);        // Account with default balance (0.0)

    // Display initial details
    cout << "Initial Account Details:" << endl;
    acc1.show();
    acc2.show();

    // Depositing money
    acc1.deposit(600.5);
    acc2.deposit(300);

    // Display after deposit
    cout << "\nAfter Deposits:" << endl;
    acc1.show();
    acc2.show();

    // Withdrawing money
    acc1.withdraw(300.50);
    acc2.withdraw(600);  // Should print "Insufficient balance!"

    // Display after withdrawals
    cout << "\nAfter Withdrawals:" << endl;
    acc1.show();
    acc2.show();

    // Comparing accounts
    if (acc1 > acc2)
        cout << "\nAccount 1 has more balance than Account 2." << endl;
    else
        cout << "\nAccount 2 has more balance than Account 1." << endl;

    return 0;
}
