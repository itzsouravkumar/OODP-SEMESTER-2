// A software company is designing a generic storage system that can store different types of data (like
// integers, floating-point numbers, and strings). Instead of writing separate classes for each data type,
// they decide to use a class template. Write a C++ class template Storage that can store and display a
// value of any data type (int, float, string, etc.). Demonstrate its usage with different data types.

#include <iostream>
using namespace std;

template <typename T>
class Storage
{
    T value;

public:
    Storage(T val) : value(val) {}

    void display()
    {
        cout << "Stored Value: " << value << endl;
    }
};

int main()
{
    Storage<int> intStorage(42);
    Storage<float> floatStorage(7.47f);
    Storage<string> stringStorage("Hi Namaste Wadakkam");

    intStorage.display();
    floatStorage.display();
    stringStorage.display();
    return 0;
}