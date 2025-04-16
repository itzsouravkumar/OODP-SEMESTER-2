// Create a C++ class template named Calculator that can perform basic arithmetic operations (addition, 
//     subtraction, multiplication, and division) on two values of any data type. 
//     The class should have: 
//     a. Two member variables a and b 
//     b. A constructor to initialize values for a and b 
//     c. Member functions: 
//     i. 
//     add() 
//     ii. 
//     iii. 
//     iv. 
//     subtract() 
//     multiply() 
//     divide() 
//     Demonstrate the use of this template with: 
//     • Two integers 
//     • Two floating-point numbers

#include <iostream>
using namespace std;

template <typename T>
class Calculator
{
    T value1, value2;

public:
    Calculator(T val1, T val2) : value1(val1), value2(val2) {}

    T add()
    {
        return value1 + value2;
    }

    T subtract()
    {
        return value1 - value2;
    }

    T multiply()
    {
        return value1 * value2;
    }

    T divide()
    {
        if (value2 != 0)
            return value1 / value2;
        else
            throw runtime_error("Division by zero");
    }

    void display()
    {
        cout << "Value 1: " << value1 << endl;
        cout << "Value 2: " << value2 << endl;
        cout << "Addition: " << add() << endl;
        cout << "Subtraction: " << subtract() << endl;
        cout << "Multiplication: " << multiply() << endl;

        try
        {
            cout << "Division: " << divide() << endl;
        }
        catch (const runtime_error &e)
        {
            cout << e.what() << endl;
        }
    }
};

int main()
{
    Calculator<int> intCalc(10, 5);
    Calculator<float> floatCalc(10.5f, 2.5f);

    cout << "Integer Calculator:" << endl;
    intCalc.display();
    cout << endl;

    cout << "Float Calculator:" << endl;
    floatCalc.display();
    return 0;
}