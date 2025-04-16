// Student-Athlete System:
// • Design and implement a C++ program using multiple inheritance to model a
// scenario where:
// 1. A Student has a name and roll number.
// 2. A SportsPlayer has a sport name and ranking.
// 3. A SportStudent inherits from both Student and SportsPlayer, combining the
// properties of both.
// The program should include:
// • A base class Student with attributes for name and roll number.
// • A base class SportsPlayer with attributes for sport name and ranking.
// • A derived class SportStudent that inherits from both Student and
// SportsPlayer.
// • A function to display details of a SportStudent.
// • Demonstration of creating an object of SportStudent and displaying its
// details.

#include <iostream>
using namespace std;

class Student
{
protected:
    string name;
    int rollNo;

public:
    Student(string n, int r)
    {
        name = n;
        rollNo = r;
    }
};
class SportsPlayer
{
protected:
    string sportName;
    int rank;

public:
    SportsPlayer(string sport, int rn)
    {
        sportName = sport;
        rank = rn;
    }
};

class SportsStudent : public Student, public SportsPlayer
{
public:
    SportsStudent(string n, int r, string sport, int rn) : Student(n, r), SportsPlayer(sport, rn) {}

    void displayDetails()
    {
        cout << "Name        : " << name << endl;
        cout << "Roll Number : " << rollNo << endl;
        cout << "Sport       : " << sportName << endl;
        cout << "Ranking     : " << rank << endl;
        cout << "------------------------------" << endl;
    }
};

int main()
{
    SportsStudent s1("Ayush Sharma", 1023, "Badminton", 5);

    cout << "Student-Athlete Profile:\n";
    s1.displayDetails();

    return 0;
}