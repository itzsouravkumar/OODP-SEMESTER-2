// A drawing application supports multiple shapes like Circle and Rectangle. The base class Shape has 
// a function draw(), but each shape has draw() which supports different way of drawing. Write a C++ 
// program demonstrating runtime polymorphism using a virtual function draw() in a Shape class, and 
// override it in Circle and Rectangle (Derive classes). Explain what happens if the function is not virtual

#include <iostream>
using namespace std;

// Base class
class Shape {
public:
    // Virtual function enables runtime polymorphism
    virtual void draw() {
        cout << "Drawing a generic shape." << endl;
    }
};

// Derived class
class Circle : public Shape {
public:
    void draw() override {
        cout << "Drawing a circle" << endl;
    }
};

// Derived class
class Rectangle : public Shape {
public:
    void draw() override {
        cout << "Drawing a rectangle" << endl;
    }
};

int main() {
    Shape* shapePtr;  // Pointer to base class

    Circle c;
    Rectangle r;

    // Polymorphic behavior
    shapePtr = &c;
    shapePtr->draw();  // Calls Circle::draw()

    shapePtr = &r;
    shapePtr->draw();  // Calls Rectangle::draw()

    return 0;
}
