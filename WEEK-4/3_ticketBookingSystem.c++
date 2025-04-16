// A theatre wants to automate its ticket booking system.
//  • Create a class MovieTicket with attributes: movieName, seatNumber, price, and isBooked.
//  • Implement a constructor to initialize the ticket details when an object is created.
//  • Implement functions to bookTicket(), cancelTicket(), and displayTicketDetails().
//  • Ensure that a ticket can only be booked if it’s not already booked.
//  • Implement a destructor to display a message when a ticket object is deleted.
//    Demonstrate the ticket booking and cancellation process with multiple objects.

#include <iostream>
using namespace std;

class MovieTicket
{
private:
    string movieName;
    int seatNumber;
    int price;
    bool isBooked;

public:
    MovieTicket(string name, int seat, int p)
    {
        movieName = name;
        seatNumber = seat;
        price = p;
        isBooked = false;
    }
    void bookTicket()
    {
        if (!isBooked)
        {
            isBooked = true;
            cout << "Seat " << seatNumber << " for " << movieName << " booked sucessfuly." << endl;
        }
        else
        {
            cout << "Seat " << seatNumber << " for " << movieName << " is already booked." << endl;
        }
    }
    void cancelTicket()
    {
        if (isBooked)
        {
            isBooked = false;
            cout << "Booking for seat " << seatNumber << " for " << movieName << " has been cancelled." << endl;
        }
        else
        {
            cout << "Seat " << seatNumber << " for " << movieName << " was not booked. Nothing to cancel." << endl;
        }
    }

    void displayTicketDetails()
    {
        cout << "Movie: " << movieName << endl;
        cout << "Seat No: " << seatNumber << endl;
        cout << "Price  : RS " << price << endl;
        cout << "Status : " << (isBooked ? "Booked" : "Available") << endl;
        cout << "--------------------------" << endl;
    }

    // Destructor
    ~MovieTicket()
    {
        cout << "Ticket object for seat " << seatNumber << " is being removed." << endl;
    }
};

int main()
{
    MovieTicket ticket1("Jawan", 1, 250.0);
    MovieTicket ticket2("Jawan", 2, 250.0);
    MovieTicket ticket3("Jawan", 3, 250.0);

    // Booking tickets
    ticket1.bookTicket();
    ticket2.bookTicket();

    ticket1.bookTicket();
    ticket2.cancelTicket();
    ticket3.cancelTicket();

    // Display all ticket details
    cout << "Ticket Status:\n";
    ticket1.displayTicketDetails();
    ticket2.displayTicketDetails();
    ticket3.displayTicketDetails();

    return 0;
}