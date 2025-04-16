#include <iostream>
using namespace std;

class NegativeValueException : public exception
{
public:
    const char *what() const noexcept override
    {
        return "Deposit amount cannot be negative!";
    }
};

class BankAccount
{
    double balance;

public:
    BankAccount() : balance(0.0) {}

    void deposit(double amount)
    {
        if (amount < 0)
        {
            throw NegativeValueException();
        }
        balance += amount;
        cout << "Successfully deposited Rs " << amount << ". Current balance: Rs " << balance << endl;
    }
};

int main()
{
    BankAccount userAccount;
    double amount;

    cout << "Enter amount to deposit: ";
    cin >> amount;

    try
    {
        userAccount.deposit(amount);
    }
    catch (const NegativeValueException &e)
    {
        cout << "Error: " << e.what() << endl;
    }
    return 0;
}