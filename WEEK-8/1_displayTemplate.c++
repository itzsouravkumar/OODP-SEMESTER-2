// Write a C++ program that uses a function template named display. The function should take a single
// argument of any data type and print its value. Demonstrate the use of this function by calling it with
// different types of arguments like an int, a float, and a string.

#include <iostream>
using namespace std;

template <typename T>
void display(T value)
{
    cout << "Value: " << value << endl;
}

int main()
{
    int intValue = 42;
    float floatValue = 3.14f;
    string stringValue = "Welcome to C++";

    display(intValue);
    display(floatValue);
    display(stringValue);
    return 0;
}