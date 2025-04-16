#include<iostream>
using namespace std;

class Car {
    private:
        string brand;
        string model;
        double price;
        int year;
    public:
        Car(string brand, string model, double price, int year) {
            this->brand = brand;
            this->model = model;
            this->price = price;
            this->year = year;
        }

        static int totalCars;

        int displayCarInfo() {
            cout << "Brand: " << brand << endl;
            cout << "Model: " << model << endl;
            cout << "Price: " << price << endl;
            cout << "Year: " << year << endl;
            cout << endl;
            return 0;
        }
};

int Car::totalCars = 0;

int main() {
    Car car1("Toyota", "Corolla", 25000, 2019);
    Car::totalCars++;
    car1.displayCarInfo();

    Car car2("Honda", "Civic", 22000, 2018);
    Car::totalCars++;
    car2.displayCarInfo();

    Car car3("Suzuki", "Swift", 20000, 2017);
    Car::totalCars++;
    car3.displayCarInfo();

    cout << "Total Cars in Inventory: " << Car::totalCars << endl;

    return 0;

}