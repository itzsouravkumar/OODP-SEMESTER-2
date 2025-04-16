#include<iostream>
using namespace std;

class Student {
    private:
        string name;
        string studentID;
        int marks[5];
    public:
        Student(string name, string studentID, int marks[]) {
            this->name = name;
            this->studentID = studentID;
            for (int i = 0; i < 5; i++) {
                this->marks[i] = marks[i];
            }
        }

        int calculateAverage() {
            int sum = 0;
            for (int i = 0; i < 5; i++) {
                sum += marks[i];
            }
            return sum / 5;
        }

        int displayDetails() {
            cout << "Name: " << name << endl;
            cout << "Student ID: " << studentID << endl;
            cout << "Marks: ";
            for (int i = 0; i < 5; i++) {
                cout << marks[i] << " ";
            }
            cout << endl;
            cout << "Average Marks: " << calculateAverage() << endl;
            return 0;
        }
};

int main() {
    int marks[] = {90, 80, 70, 60, 50};
    Student student("Arya Suman", "RA2411030010001", marks);
    student.displayDetails();
    return 0;
}