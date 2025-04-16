#include <iostream>
using namespace std;

class Calculator
{
public:
    void add(float a, float b)
    {
        cout << "Addition: " << a + b << endl;
    }

    void subtract(float a, float b)
    {
        cout << "Subtraction: " << a - b << endl;
    }

    void multiply(float a, float b)
    {
        cout << "Multiplication: " << a * b << endl;
    }

    void divide(float a, float b)
    {
        if (b == 0.0)
        {
            throw runtime_error("Division by 0 is undefined");
        }
        cout << "Division: " << a / b << endl;
    }
};

int main()
{
    Calculator calc;
    float a, b;
    cout << "Enter a and b: ";
    cin >> a >> b;

    calc.add(a, b);
    calc.subtract(a, b);
    calc.multiply(a, b);

    try
    {
        calc.divide(a, b);
    }
    catch (const runtime_error &e)
    {
        cout << e.what() << endl;
    }
    return 0;
}