// A library management system has two classes: Book and Library. The Book class has a private
// member variable book name and price, and the Library class needs to access it to display book details.
// Write a C++ program where a function book_price() in class Library and make it to access the private
// data members of class Book using a friend function. Explain why friend functions are needed in this
// case.

#include <iostream>
using namespace std;

class Book;

class Library
{
public:
    void book_price(Book b); // This will be the friend function
};

class Book
{
private:
    string bookName;
    float price;

public:
    Book(string name, float p)
    {
        bookName = name;
        price = p;
    }

    // Declaring friend function
    friend void Library::book_price(Book b);
};

// Definition of friend function
void Library::book_price(Book b)
{
    cout << "Book Name : " << b.bookName << endl;
    cout << "Price     : RS " << b.price << endl;
}

int main()
{
    Book b1("Atomic Habits", 499.0);
    Library lib;

    lib.book_price(b1); // Library accessing private data of Book using friend function

    return 0;
}
