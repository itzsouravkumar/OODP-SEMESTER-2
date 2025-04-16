#include <iostream>
using namespace std;

class Example {
    int x;
public:
    Example(int a) { x = a; }
    void show() { cout << "Value: " << x << endl; }
};

int main() {
    Example obj(10); // Fix: Provide a parameter for the constructor
    obj.show();
    return 0;
}
