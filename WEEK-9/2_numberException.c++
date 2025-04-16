#include <iostream>
using namespace std;

class PositiveNumberException : public runtime_error
{
public:
    PositiveNumberException() : runtime_error("Number must be positive") {}
};

class EvenNumberException : public runtime_error
{
public:
    EvenNumberException() : runtime_error("Number must be even") {}
};

class RangeException : public runtime_error
{
public:
    RangeException() : runtime_error("Number must be between 1 and 100, inclusive") {}
};

class Number
{
    int value;

public:
    Number(int val) : value(val)
    {
        if (val <= 0)
        {
            throw PositiveNumberException();
        }
        if (val % 2 != 0)
        {
            throw EvenNumberException();
        }
        if (val < 1 || val > 100)
        {
            throw RangeException();
        }
    }

    int getValue() const
    {
        return value;
    }
};

int main()
{
    int num;
    cout << "Enter a +ve even number between 1 and 100: ";
    while (true)
    {
        try
        {
            cin >> num;
            if (cin.fail())
            {
                throw invalid_argument("Invalid input! Please enter a number");
            }
            Number n(num);
            cout << "You entered: " << n.getValue() << endl;
            break;
        }
        catch (const PositiveNumberException &e)
        {
            cerr << e.what() << endl;
            cout << "Please enter a +ve even number between 1 and 100: ";
        }
        catch (const EvenNumberException &e)
        {
            cerr << e.what() << endl;
            cout << "Please enter a +ve even number between 1 and 100: ";
        }
        catch (const RangeException &e)
        {
            cerr << e.what() << endl;
            cout << "Please enter a +ve even number between 1 and 100: ";
        }
        catch (const invalid_argument &e)
        {
            cerr << e.what() << endl;
            break;
        }
    }
    return 0;
}