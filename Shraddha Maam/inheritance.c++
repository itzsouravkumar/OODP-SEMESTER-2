// Here, We will learn about inheritance.

#include <iostream>
using namespace std;

class person
{
public:
    string name;
    int age;

    person(string name, int age)
    {
        this->name = name;
        this->age = age;
    }

    person()
    {
        cout << "Parent Constructor." << endl;
    }
    ~person()
    {
        cout << "Parent Destructor." << endl;
    }

};
class student : public person
{ // We have inherited person class in student class
public:
    int rollno;

    student(string name, int age, int rollno) : person(name, age)
    {
        this->rollno = rollno;
    }
    student()
    {
        cout << "Child Constructor." << endl; // As we are calling stdent class but first parent constructor will run then another.
    }

    ~student()
    {
        cout << "Child Destructor." << endl; // In destructor it's reversed.
    }

    void getInfo()
    {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
        cout << "Roll No: " << rollno << endl;
    }
};

int main()
{
    student s1("Akanksha", 18, 9);
    // s1.name = "Akanksha";
    // s1.age = 20;
    // s1.rollno = 123;

    s1.getInfo();

    return 0;
}