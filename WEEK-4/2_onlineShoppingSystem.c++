// Design an online shopping system.
//  • Create a Product class with attributes: productID, productName, price, and quantity.
//  • Implement a default constructor to initialize default values to the product details during object
//    creation.
//  • Implement a parameterized constructor to initialize product details when an object is created.
//  • Add a function calculateTotalPrice() that calculates the total cost based on quantity.
//  • Implement a destructor that displays a message when a product object is removed.
//  • Create an array of Product objects and write a function to display the details of all products in
//    the cart.

#include <iostream>
using namespace std;

class Product
{
private:
    string productID;
    string productName;
    float price;
    int quantity;

public:
    // Default constructor with values
    Product()
    {
        productID = "N/A";
        productName = "NIL";
        price = 0.0;
        quantity = 0;
    }
    // Parameterised constructor
    Product(string id, string name, float p, int q)
    {
        productID = id;
        productName = name;
        price = p;
        quantity = q;
    }

    float calculateTotalPrice()
    {
        return price * quantity;
    }

    void displayProductInfo()
    {
        cout << "Product ID    : " << productID << endl;
        cout << "Name          : " << productName << endl;
        cout << "Price         : RS " << price << endl;
        cout << "Quantity      : " << quantity << endl;
        cout << "Total Price   : RS " << calculateTotalPrice() << endl;
        cout << "-----------------------------" << endl;
    }
    // Destructor when object is removed
    ~Product()
    {
        cout << "Removed " << productName << " ID: " << productID << endl;
    }

    static void displayCart(Product cart[], int size)
    {
        cout << "CART DETAILS" << endl;
        cout << "==========================" << endl;
        for (int i = 0; i < size; i++)
        {
            cart[i].displayProductInfo();
        }
    }
};

int main()
{
    // Array of Product objects (cart)
    Product cart[3] = {
        Product("P101", "Wireless Mouse", 599.0, 2),
        Product("P102", "Mechanical Keyboard", 1499.0, 1),
        Product("P103", "USB-C Cable", 299.0, 3)};

    // Displaying the cart
    Product::displayCart(cart, 3);

    return 0;
}