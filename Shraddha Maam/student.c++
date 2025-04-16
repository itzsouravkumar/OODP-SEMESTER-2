// In this program, We will learn about constructurs and destructors in C++.

#include <iostream>
using namespace std;

class Student
{
public:
    string name;
    double *cgpaPtr;

    Student(string name, double cgpa)
    {
        this->name = name;
        cgpaPtr = new double;
        *cgpaPtr = cgpa;
    }

    Student(Student &Orginal)
    {
        this->name = Orginal.name;
        cgpaPtr = new double;
        *cgpaPtr = *Orginal.cgpaPtr;
    }

    // destructors
    ~Student()
    {
        cout << "Hi, I delete everything." << endl;
        delete cgpaPtr;   // used to delete memory that pointer directs  // if not then maybe memory leak happens
    }

    void getInfo()
    {
        cout << "Name: " << name << endl;
        cout << "CGPA: " << *cgpaPtr << endl;
    }
};

int main()
{
    Student s1("Akanksha", 9.0);
    // Student s2(s1);
    s1.getInfo();
    // *s2.cgpaPtr = 9.4;
    // s2.getInfo();

    return 0;
}