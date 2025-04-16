// A university management system has different types of students: Undergraduate and Postgraduate.
// The base class Student has a function study(), but each type of student studies differently. Write a C++
// program using an abstract class Student with a pure virtual function study(). Create derived classes:
// Undergraduate and Postgraduate that implement study(). Explain why abstract classes are useful in this
// scenario.

#include <iostream>
using namespace std;

// Abstract class
class Student
{
public:
    // Pure virtual function
    virtual void study() = 0; // This makes it abstract
};

// Derived class
class Undergraduate : public Student
{
public:
    void study() override
    {
        cout << "Undergraduate is studying 5 subjects and preparing for internships." << endl;
    }
};

// Derived class
class Postgraduate : public Student
{
public:
    void study() override
    {
        cout << "Postgraduate is doing research and working on thesis." << endl;
    }
};

int main()
{
    // Student s; // Error: can't instantiate abstract class

    // Pointers to base class
    Student *s1 = new Undergraduate();
    Student *s2 = new Postgraduate();

    s1->study(); // Calls Undergraduate::study()
    s2->study(); // Calls Postgraduate::study()

    // Clean up
    delete s1;
    delete s2;

    return 0;
}
