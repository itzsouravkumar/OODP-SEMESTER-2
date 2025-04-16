#include <iostream>
using namespace std;

// Lower level function
void processTransaction(double amount)
{
    if (amount <= 0)
    {
        throw runtime_error("Invalid transaction amount: " + to_string(amount));
    }
    cout << "Transaction of Rs " << amount << " processed successfully" << endl;
}

// Mid level function
void handleTransaction(double amount)
{
    try
    {
        processTransaction(amount);
    }
    catch (const exception &e)
    {
        throw runtime_error(string("Error in handleTransaction(): ") + e.what());
    }
}

int main()
{
    try
    {
        double amount;
        cout << "Enter amount to process: ";
        cin >> amount;
        handleTransaction(amount);
    }
    catch (const exception &e)
    {
        cout << "Transaction failed: " << e.what() << endl;
    }
    return 0;
}