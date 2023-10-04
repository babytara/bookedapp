#include <iostream>
#include <string>
#include <vector>
#include <ctime>

using namespace std;

// Define a structure for a meeting room booking
struct MeetingRoomBooking {
    string roomName;
    string startTime;
    string endTime;
    string organizer;
};

// Function to display a booking
void displayBooking(const MeetingRoomBooking& booking) {
    cout << "Room: " << booking.roomName << endl;
    cout << "Organizer: " << booking.organizer << endl;
    cout << "Start Time: " << booking.startTime << endl;
    cout << "End Time: " << booking.endTime << endl;
    cout << "------------------------" << endl;
}

int main() {
    vector<MeetingRoomBooking> bookings;

    while (true) {
        cout << "Booked - Meeting Room Booking System" << endl;
        cout << "1. Book a room" << endl;
        cout << "2. View bookings" << endl;
        cout << "3. Exit" << endl;
        cout << "Choose an option: ";

        int choice;
        cin >> choice;

        switch (choice) {
        case 1: {
            MeetingRoomBooking booking;
            cout << "Enter room name: ";
            cin >> booking.roomName;
            cout << "Enter organizer's name: ";
            cin >> booking.organizer;
            cout << "Enter start time (HH:MM): ";
            cin >> booking.startTime;
            cout << "Enter end time (HH:MM): ";
            cin >> booking.endTime;

            // Add the booking to the vector
            bookings.push_back(booking);
            cout << "Booking successful!" << endl;
            break;
        }
        case 2: {
            cout << "Bookings:" << endl;
            for (const MeetingRoomBooking& booking : bookings) {
                displayBooking(booking);
            }
            break;
        }
        case 3: {
            cout << "Thank you for using Booked. Goodbye!" << endl;
            return 0;
        }
        default: {
            cout << "Invalid option. Please try again." << endl;
            break;
        }
        }
    }

    return 0;
}
