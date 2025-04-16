#include<iostream>
using namespace std;

class Student{
    public:
        string name;
        
        Student() {
            cout << "Default Constructor / Non parameterized constructor" << endl;
        }

        Student(string name) {
            this->name = name;
            cout << "Parameterized Constructor" << endl;
        }
};

int main() {
    Student s1("Akanksha");
    return 0;
}