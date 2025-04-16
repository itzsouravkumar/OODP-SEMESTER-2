// A faculty wants to store the OODP marks of students in cycle test - 1. The number of students is not 
// fixed—it depends on how many appear for the test. Also, the faculty must easily access any student’s 
// mark by their position in the list (like 1st student, 2nd student, etc.). Write a C++ program using 
// vector to add marks of 5 students and to print the mark of the 3rd student. 

#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> marks;
    int numStudents = 5;

    cout << "Enter the marks of " << numStudents << " students:" << endl;
    for (int i = 0; i < numStudents; i++)
    {
        int mark;
        cout << "Student " << (i + 1) << ": ";
        cin >> mark;
        marks.push_back(mark);
    }

    if (numStudents >= 3)
    {
        cout << "The mark of the 3rd student is: " << marks[2] << endl;
    }
    else
    {
        cout << "Not enough students to display the 3rd student's mark" << endl;
    }
    return 0;
}