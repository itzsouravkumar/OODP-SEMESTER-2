// A student is writing a simple calculator program that frequently calls a function to add, subtract,
// multiply and divide two numbers. His faculty suggests him to write a C++ program using an inline
// function for all the above functions and use them appropriately. Explain when an inline function is
// beneficial and when it should be avoided.

#include <iostream>
using namespace std;

class Calculator
{
private:
    float num1, num2;

public:
    // Function to set numbers
    void setValues(float a, float b)
    {
        num1 = a;
        num2 = b;
    }

    // Inline functions for operations
    inline float add()
    {
        return num1 + num2;
    }

    inline float subtract()
    {
        return num1 - num2;
    }

    inline float multiply()
    {
        return num1 * num2;
    }

    inline float divide()
    {
        if (num2 != 0)
            return num1 / num2;
        else
        {
            cout << "Cannot divide by zero!" << endl;
            return 0;
        }
    }

    // Function to display results
    void displayResults()
    {
        cout << "\nCalculator Results:" << endl;
        cout << "Addition       : " << add() << endl;
        cout << "Subtraction    : " << subtract() << endl;
        cout << "Multiplication : " << multiply() << endl;
        cout << "Division       : " << divide() << endl;
    }
};

int main()
{
    Calculator calc;
    float a, b;

    cout << "Enter two numbers: ";
    cin >> a >> b;

    calc.setValues(a, b);  // Set values into the object
    calc.displayResults(); // Show results using inline functions

    return 0;
}
