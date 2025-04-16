// Problem-2 --> C++ program to suggest appropriate activities to guest based on temp conditions.

#include<iostream>
using namespace std;

class Activities {
    public:
    int temp;

    // FUNCTION TO GET DATA
    int getdata() {
        cout << "Enter temperature: ";
        cin >> temp;
        return 0;
    }

    // FUNCTION FOR ACTIVITIES
    int Activity() {
        if(temp >= 80) {
            cout << "Swimming" << endl;
        } else if(temp >= 60 && temp < 80) {
            cout << "Tennis" << endl;
        } else if(temp >= 40 && temp < 60) {
            cout << "Golf" << endl;
        } else if (temp < 40) {
            cout << "Skiing" << endl;
        }
        return 0;
    }
};

int main() {
    Activities a;  // OBJECT OF CLASS
    a.getdata(); // FUNCTION CALL
    a.Activity();  // FUNCTION CALL
    return 0;
}