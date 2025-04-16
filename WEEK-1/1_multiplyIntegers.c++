// Problem-1 --> C++ Program to find the product of two numbers and displaying the no of digits of product using classes and objects

#include <iostream>
using namespace std;

class Product
{
private:
    int num1, num2;

public:
    // FUNCTION TO GET DATA
    int getdata()
    {
        cout << "Enter two numbers: ";
        cin >> num1 >> num2;
        return 0;
    }

    // FUNCTION TO CALCULATE PRODUCT
    int product()
    {
        return num1 * num2;
    }

    // FUNCTION TO COUNT DIGITS
    int countDigits(int n)
    {
        int count = 0;
        while (n != 0)
        {
            n = n / 10;
            count++;
        }
        if (count == 0)
        {
            return 1;
        }
        return count;
    }
};

int main()
{
    Product p;              // OBJECT OF CLASS
    p.getdata();            // FUNCTION CALL
    int prod = p.product(); // FUNCTION CALL
    cout << "Product: " << prod << endl;
    cout << "Count of digits: " << p.countDigits(prod) << endl;
    return 0;
}
