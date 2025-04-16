// Problem-4 --> C++ program that encourages the user to enter two fractions, and then displays their sum in fractional form.

#include <iostream>
using namespace std;

class Fraction
{
private:
    int num1, num2, den1, den2;
    int prodNum, prodDen;
    char slash;

public:
    int getdata()
    {
        cout << "Enter first fraction: ";
        cin >> num1 >> slash >> den1;
        if (slash != '/' || den1 == 0)
        {
            cout << "Invalid character found." << endl;
            return getdata();
        }
        cout << "Enter second fraction: ";
        cin >> num2 >> slash >> den2;
        if (slash != '/' || den2 == 0)
        {
            cout << "Invalid character found." << endl;
            return getdata();
        }
        return 0;
    }

    int product()
    {
        prodNum = num1 * num2;
        prodDen = den1 * den2;
        cout << "Product: " << prodNum << "/" << prodDen << endl;
        return 0;
    }
};

int main()
{
    Fraction a;
    int check = a.getdata();
    if (check == -1)
        return -1;
    a.product();
    return 0;
}