#include <iostream>
#include <vector>
#include <string>

using namespace std;

struct Movie {
    string name;
    int price;
};

struct Booking {
    string movieName;
    int quantity;
    int totalPrice;
};

vector<Movie> movies;
vector<Booking> bookings;

void displayMovies() {
    cout << "Available Movies: " << endl;
    for (const auto& movie : movies) {
        cout << movie.name << " - Price: $" << movie.price << endl;
    }
    cout << endl;
}

void bookTicket() {
    string movieName;
    int quantity;
    cout << "Enter movie name: ";
    cin >> movieName;

    for (const auto& movie : movies) {
        if (movie.name == movieName) {
            cout << "Enter the quantity of tickets to book: ";
            cin >> quantity;

            Booking booking;
            booking.movieName = movie.name;
            booking.quantity = quantity;
            booking.totalPrice = movie.price * quantity;
            bookings.push_back(booking);

            cout << "Ticket(s) booked successfully!" << endl;
            return;
        }
    }

    cout << "Movie not found!" << endl;
}

void cancelTicket() {
    int bookingIndex;
    cout << "Enter booking index to cancel: ";
    cin >> bookingIndex;

    if (bookingIndex >= 0 && bookingIndex < bookings.size()) {
        bookings.erase(bookings.begin() + bookingIndex);
        cout << "Ticket cancelled successfully!" << endl;
    }
    else {
        cout << "Invalid booking index!" << endl;
    }
}

void changeTicketPrice() {
    string movieName;
    int newPrice;
    cout << "Enter movie name to change ticket price: ";
    cin >> movieName;

    for (auto& movie : movies) {
        if (movie.name == movieName) {
            cout << "Enter new ticket price: ";
            cin >> newPrice;

            movie.price = newPrice;
            cout << "Ticket price changed successfully!" << endl;
            return;
        }
    }

    cout << "Movie not found!" << endl;
}

void displayBookings() {
    cout << "Booking Records: " << endl;
    int index = 0;
    for (const auto& booking : bookings) {
        cout << "Booking " << index << ": " << endl;
        cout << "Movie: " << booking.movieName << endl;
        cout << "Quantity: " << booking.quantity << endl;
        cout << "Total Price: $" << booking.totalPrice << endl;
        cout << endl;
        index++;
    }
}

int main() {
    // Adding some sample movies
    Movie movie1 = { "Movie 1", 10 };
    Movie movie2 = { "Movie 2", 15 };
    movies.push_back(movie1);
    movies.push_back(movie2);

    int choice;
    do {
        cout << "Movie Ticket Booking System" << endl;
        cout << "1. Display Available Movies" << endl;
        cout << "2. Book Ticket" << endl;
        cout << "3. Cancel Ticket" << endl;
        cout << "4. Change Ticket Price" << endl;
        cout << "5. Display Booking Records" << endl;
        cout << "6. Quit" << endl;
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                displayMovies();
                break;
            case 2:
                bookTicket();
                break;
            case 3:
                cancelTicket();
                break;
            case 4:
                changeTicketPrice();
                break;
            case 5:
                displayBookings();
                break;
            case 6:
                cout << "Exiting..." << endl;
                break;
            default:
                cout << "Invalid choice!" << endl;
        }

        cout << endl;
    } while (choice != 6);

    return 0;
}
 