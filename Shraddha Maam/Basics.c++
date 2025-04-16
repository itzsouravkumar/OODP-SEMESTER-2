#include<iostream>
using namespace std;

class Teacher {    // Defining class
    private:
        double salary;
    public:
        string name;
        string dept;
        string subject;
    // Constructor: Special member function of a class which is executed whenever we create new objects of that class.
        //Non-Parameterized Constructor

        // Teacher() {   // Default Constructor
        //     dept="CSE";
        // }

        //Parameterized Constructor
        Teacher(string name, string dept, string subject, double salary) {
            // this->prop is same as *(this).prop  and it is pointer to the object that is calling the function
            this->name = name;
            this->dept = dept;
            this->subject = subject;
            this->salary = salary;
        }

        // Copy Constructor
        Teacher(Teacher &OrgObj) {  //passing object as reference
            cout << "I am a custom copy constructor" << endl;
            this->name = OrgObj.name;
            this->dept = OrgObj.dept;
            this->subject = OrgObj.subject;
            this->salary = OrgObj.salary;
        
        }
        

        void changeDept(string newDept) {
            dept = newDept;
        }
        // Setter       //We are accessing private salary through these functions
        void setSalary(double s) {
            salary=s;
        }
        // Getter
        double getSalary() {
            return salary;
        }

        void getInfo() {
            cout << "Name: " << name << endl;
            cout << "Department: " << dept << endl;
            cout << "Subject: " << subject << endl;
            cout << "Salary: " << salary << endl;
        }
};

// Encapsulation: Wrapping up of data and methods into a single unit (class)
class Account {
    private:      //Hiding Data
        double balance;
        string password;   // Encrypted password
    public:
        string accountId;
        string username;
};



int main() {
    Teacher t1("Akanksha","CSE","Programming", 50000); 

    Teacher t2(t1); // Custom Copy Constructor

    // t1.getInfo();
    t2.getInfo();
    // t1.name = "Akanksha";
    // // t1.dept = "CSE";
    // t1.subject = "C++";
    // t1.setSalary(50000);

    // cout << "Name: " << t1.name << endl;
    // cout << "Department: " << t1.dept << endl;
    // // cout << "Salary: " << t1.getSalary() << endl;
    return 0;
}