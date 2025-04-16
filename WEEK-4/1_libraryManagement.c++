// Design a system for a library to manage books.
//  • Create a class Book with attributes: bookID, title, author, and price.
//  • Implement a default constructor to initialize default values to the book during object creation.
//  • Implement a parameterized constructor to initialize book details.
//  • Implement a function displayBookInfo() to show book details.
//  • Demonstrate creating multiple book objects.

#include <iostream>
using namespace std;

class Book
{
private:
    string bookID;
    string title;
    string Author;
    double price;

public:
    // Default constructor with default values
    Book()
    {
        bookID = "Unknown ID";
        title = "Unknown Title";
        Author = "Unknown Author";
        price = 0.0;
    }
    // Parameterised constructor to initialise book details
    Book(string id, string t, string a, double p)
    {
        bookID = id;
        title = t;
        Author = a;
        price = p;
    }
    // Function to show book details
    void displayBookInfo()
    {
        cout << "Book ID    : " << bookID << endl;
        cout << "Title      : " << title << endl;
        cout << "Author     : " << Author << endl;
        cout << "Price      : " << price << endl;
        cout << "-----------------------------" << endl;
    }
};

int main()
{
    // Create object using default constructor & parameterised constructor
    Book book1;
    Book book2("CS205", "Data Structures Through C", "Yashavant Kanetkar", 350.0);
    Book book3("CS301", "Computer Networks", "Andrew S. Tanenbaum", 650.0);
    Book book4("CS403", "Operating System Concepts", "Silberschatz, Galvin", 700.0);

    cout << "Library Book Info:" << endl;
    cout << "-----------------------------" << endl;
    book1.displayBookInfo();
    book2.displayBookInfo();
    book3.displayBookInfo();
    book4.displayBookInfo();
    return 0;
}