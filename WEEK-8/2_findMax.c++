// A function is needed for an application that processes both integer and floating-point numbers. Instead
// of writing separate functions for each data type, the developer decides to use a function template. Write
// a C++ function template findMax() that takes two values of any data type and prints the largest one.
// Test it with integers, floats, and double.

#include <iostream>
using namespace std;

template <typename T>
T findMax(T a, T b)
{
    return (a > b) ? a : b;
}

int main()
{
    int intA = 10, intB = 20;
    float floatA = 5.5f, floatB = 2.3f;
    double doubleA = 7.7, doubleB = 100025.48896;

    cout << "Max of " << intA << " and " << intB << " is: " << findMax(intA, intB) << endl;
    cout << "Max of " << floatA << " and " << floatB << " is: " << findMax(floatA, floatB) << endl;
    cout << "Max of " << doubleA << " and " << doubleB << " is: " << findMax(doubleA, doubleB) << endl;
    return 0;
}