// Problem-3 -->  Program that continually calculates the cube of a number until the user enters a number that is divisible by both 2 and 3.

#include <iostream>
using namespace std;

class Activities
{
public:
    int num;

    int getNum()
    {
        cout << "Enter the number: ";
        cin >> num;
        return 0;
    }

    int calc()
    {
        while (num % 2 != 0 || num % 3 != 0)
        {
            cout << "Cube of " << num << " is: " << (num * num * num) << endl;
            getNum();
        }
        cout << "EXIT" << endl;
        return 0;
    }
};

int main()
{
    Activities a;
    a.getNum();
    a.calc();
    return 0;
}