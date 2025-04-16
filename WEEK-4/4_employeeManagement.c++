// Design an employee management system for a company.
// • Create a class Employee with attributes: empID, name, salary, and designation.
// • Implement a parameterized constructor to initialize employee details.
// • Implement a copy constructor that creates a duplicate employee record.
// • Implement a function displayDetails() to show employee details.
// • Demonstrate creating multiple employee objects, including a copied object using the copy
//   constructor.
// [Note: Create an employee E1 using the parameterized constructor. Create another employee E2 as
// a copy of E1 and display both employee details.]

#include <iostream>
using namespace std;

class Employee
{
private:
    string empID;
    string name;
    double salary;
    string designation;

public:
    Employee(string id, string n, double s, string des)
    {
        empID = id;
        name = n;
        salary = s;
        designation = des;
    }
    // Copy constructor
    Employee(string newID, const Employee &emp)
    {
        empID = newID;
        name = emp.name;
        salary = emp.salary;
        designation = emp.designation;
    }

    void displayDetails()
    {
        cout << "Employee ID    : " << empID << endl;
        cout << "Name           : " << name << endl;
        cout << "Salary         : RS " << salary << endl;
        cout << "Designation    : " << designation << endl;
        cout << "-------------------------------" << endl;
    }
};

int main()
{
    Employee E1("EMP101", "Bablu", 60000.0, "Software Engineer");

    Employee E2("EMP102", E1);

    // Displaying both employees
    cout << "\nEmployee E1 Details:\n";
    E1.displayDetails();

    cout << "\nEmployee E2 Details (Copied from E1):\n";
    E2.displayDetails();

    return 0;
}