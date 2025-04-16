#include <iostream>
using namespace std;

class Car
{
    string model;
    double pricePerDay;
    bool available;

public:
    // Constructor Overloading
    Car() : model("Unknown"), pricePerDay(100.0), available(true) {}                            // Default
    Car(string m, double price, bool avail) : model(m), pricePerDay(price), available(avail) {} // Parameterized
    Car(const Car &c) : model(c.model), pricePerDay(c.pricePerDay), available(c.available) {}   // Copy Constructor

    // Function Overloading for booking
    double book(int days) { return days * pricePerDay; }
    double book(int days, double discount) { return days * pricePerDay * ((100 - discount) / 100); }
    double book(int days, double discount, double insurance) { return book(days, discount) + insurance; }

    // Operator Overloading
    double operator+(const Car &c) { return this->pricePerDay + c.pricePerDay; }
    bool operator>(const Car &c) { return this->pricePerDay > c.pricePerDay; }

    // Display function
    void display()
    {
        cout << "Model: " << model << ", Price per day: " << pricePerDay << ", Available: " << (available ? "Yes" : "No") << endl;
    }
};

int main()
{
    Car car1("Sedan", 150.0, true), car2("SUV", 200.0, true);

    // Display car details
    cout << "Car 1 Details: ";
    car1.display();
    cout << "Car 2 Details: ";
    car2.display();

    cout << "Total rental cost for 5 days (SUV): " << car2.book(5) << endl;
    cout << "Total rental cost for 5 days with 10% discount (Sedan): " << car1.book(5, 10.0) << endl;
    cout << "Total rental cost for 5 days with 10% discount + 50 insurance (Sedan): " << car1.book(5, 10.0, 50.0) << endl;
    cout << "More expensive car: " << ((car1 > car2) ? "Sedan" : "SUV") << endl;
    cout << "Combined daily rental price: " << (car1 + car2) << endl;

    return 0;
}