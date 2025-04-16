// Student Performance System:
// • Develop a student performance management system using hybrid inheritance
// in C++. Implement the following class hierarchy:
// 1. Create a base class Student to store student details:
// • Attributes: name, roll number
// • Functions: set and display student details
// 2. Create a derived class Marks inheriting from Student to manage academic
// marks:
// • Attribute: marks in three subjects
// • Function: calculate total academic marks
// 3. Create another derived class Sports to store sports performance:
// • Attribute: sports marks
// • Function: display sports marks
// 4. Create a final class Result that inherits from both Marks and Sports to
// compute the overall performance:
// • Function: calculate the total marks (academic + sports) and average
// Implementation Requirements:
// • Use Hybrid Inheritance (Combination of Multiple and Hierarchical
// Inheritance).
// • Demonstrate the use of virtual base class (if needed) to avoid
// ambiguity.
// • Implement object creation, data input, and output display.
// • Show how overriding or function overloading can be applied.
// Expected Output:
// • Display Student details (name & roll number).
// • Display academic marks, total academic marks.
// • Display sports marks.
// • Display overall result (total and average marks).
// • Explain Hybrid Inheritance and how it prevents ambiguity.
// • Discuss real-world applications of such an inheritance structure.
// • Highlight advantages and potential challenges in implementing hybrid
// inheritance in large-scale systems.

#include <iostream>
using namespace std;

// Base Class: Student
class Student
{
protected:
    string name;
    int rollNo;

public:
    void setStudentDetails(string n, int r)
    {
        name = n;
        rollNo = r;
    }

    void displayStudentDetails()
    {
        cout << "Name       : " << name << endl;
        cout << "Roll No.   : " << rollNo << endl;
    }
};

// Derived Class: Marks (inherits virtually from Student)
class Marks : virtual public Student
{
protected:
    int m1, m2, m3;

public:
    void setMarks(int a, int b, int c)
    {
        m1 = a;
        m2 = b;
        m3 = c;
    }

    int totalAcademicMarks()
    {
        return m1 + m2 + m3;
    }

    void displayMarks()
    {
        cout << "Subject Marks: " << m1 << ", " << m2 << ", " << m3 << endl;
        cout << "Total Academic Marks: " << totalAcademicMarks() << endl;
    }
};

// Derived Class: Sports (inherits virtually from Student)
class Sports : virtual public Student
{
protected:
    int sportsMarks;

public:
    void setSportsMarks(int s)
    {
        sportsMarks = s;
    }

    void displaySportsMarks()
    {
        cout << "Sports Marks: " << sportsMarks << endl;
    }

    int getSportsMarks()
    {
        return sportsMarks;
    }
};

// Final Class: Result (inherits from Marks and Sports)
class Result : public Marks, public Sports
{
public:
    void displayResult()
    {
        displayStudentDetails();
        displayMarks();
        displaySportsMarks();
        int total = totalAcademicMarks() + getSportsMarks();
        float avg = total / 4.0; // 3 subjects + 1 sports
        cout << "Total Marks : " << total << endl;
        cout << "Average     : " << avg << endl;
    }
};

int main()
{
    Result r;

    // Setting up all values
    r.setStudentDetails("Ayush Sharma", 103);
    r.setMarks(85, 90, 88);
    r.setSportsMarks(80);

    // Display the final result
    cout << "\nStudent Performance Report\n-----------------------------" << endl;
    r.displayResult();

    return 0;
}
