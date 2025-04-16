#include<iostream>
using namespace std;

class Product {
    private:
        string productID;
        string productName;
        float price;
        int quantity;
    public:
        Product() {
            productID = "";
            productName = "";
            price = 0;
            quantity = 0;
        }
        Product(string productID, string productName, float price, int quantity) {
            this->productID = productID;
            this->productName = productName;
            this->price = price;
            this->quantity = quantity;
        }

        int calculateTotalPrice() {
            return price * quantity;
        }

        void productDetails() {
            cout << "Product ID: " << productID << endl;
            cout << "Product Name: " << productName << endl;
            cout << "Price: " << price << endl;
            cout << "Quantity: " << quantity << endl;
            cout << "Total Price: " << calculateTotalPrice() << endl;
        }
};

int main() {
    int noofProducts;
    cout << "Enter the number of products: ";
    cin >> noofProducts;
    Product products[noofProducts];
    for (int i = 0; i < noofProducts; i++) {
        string productID, productName;
        float price;
        int quantity;
        cout << "Enter Product ID: ";
        cin >> productID;
        cout << "Enter Product Name: ";
        cin >> productName;
        cout << "Enter Price: ";
        cin >> price;
        cout << "Enter Quantity: ";
        cin >> quantity;
        products[i] = Product(productID, productName, price, quantity);
        cout << endl;

    }

    cout << "------Product Details------" << endl;
    for (int i = 0; i < noofProducts; i++) {
        products[i].productDetails();
        cout << "----------------------------------------" << endl;
    }

    return 0;
}