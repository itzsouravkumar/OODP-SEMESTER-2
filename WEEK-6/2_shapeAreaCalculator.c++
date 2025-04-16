// Shape Area Calculation:
// • In a graphics application, different shapes need to be managed efficiently.
// Implement this scenario using hierarchical inheritance in C++:
// 1. Create a base class Shape with:
// • Functions to get data (e.g., dimensions).
// • A function to print data.
// • A pure virtual function to calculate the area.
// 2. Create derived classes Rectangle and Circle that inherit from Shape:
// • Rectangle should store length and width and override the area calculation.
// • Circle should store radius and override the area calculation.
// 3. Demonstrate hierarchical inheritance by:
// • Creating objects of Rectangle and Circle.
// • Invoking the appropriate functions.
// • Displaying the calculated area for each shape.

#include <iostream>
#include <cmath>
using namespace std;

// Base class (Abstract class)
class Shape
{
public:
    virtual ~Shape() {} // Destructur for base class

    virtual void getData() = 0;
    virtual void printData() = 0;

    virtual float calculateArea() = 0;
};
// Derived class
class Rectangle : public Shape
{
protected:
    float length;
    float breadth;

public:
    void getData() override
    {
        cout << "Enter length & breadth of rectangle: ";
        cin >> length >> breadth;
    }
    void printData() override
    {
        cout << "Length: " << length << ", Breadth: " << breadth << endl;
    }
    float calculateArea() override
    {
        return length * breadth;
    }
};
// Derived class
class Circle : public Shape
{
protected:
    float radius;

public:
    void getData() override
    {
        cout << "Enter radius of Circle: ";
        cin >> radius;
    }
    void printData() override
    {
        cout << "Radius: " << radius << endl;
    }
    float calculateArea() override
    {
        return M_PI * radius * radius;
    }
};

int main()
{
    Rectangle r;
    Circle c;

    // Rectangle
    r.getData();
    r.printData();
    cout << "Rectangle Area: " << r.calculateArea() << endl;

    // Circle
    c.getData();
    c.printData();
    cout << "Circle Area: " << c.calculateArea() << endl;

    return 0;
}