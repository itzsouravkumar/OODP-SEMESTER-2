// In the college canteen, students can join the line from the front or back. Sometimes, class 
// representatives or student in-charges are allowed to join from the front. Write a program to create a 
// deque with 5 students, using the deque method add "Amit" at the back and "Riya" (class 
// representative) at the front and remove a student from the front (who gets served).

#include <iostream>
#include <deque>
using namespace std;

int main()
{
    deque<string> students;

    students.push_back("Amit");
    students.push_front("Riya");

    cout << "Current students in line: ";
    for (auto student : students)
    {
        cout << student << " ";
    }
    cout << endl;

    if (!students.empty())
    {
        cout << "Student served: " << students.front() << endl;
        students.pop_front();
    }
    else
    {
        cout << "No students in line" << endl;
    }

    cout << "Remaining students in line: ";
    for (auto student : students)
    {
        cout << student << " ";
    }
    cout << endl;
    return 0;
}