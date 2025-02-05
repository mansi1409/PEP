/*#include <iostream>
#include <vector>
#include <map>
#include <string>
using namespace std;

class Event {
protected:
    string eventName;
    string date;
    int seats;
    string time;
    string venue;

public:
    Event(string name, string date, int seats, string time, string venue)
        : eventName(name), date(date), seats(seats), time(time), venue(venue) {}

    virtual void display() {
        cout << "Event: " << eventName << endl
             << "Date: " << date << endl
             << "Seats Available: " << seats << endl
             << "Time: " << time << endl
             << "Venue for the event: " << venue << endl;
    }

    string getName() const {
        return eventName;
    }

    bool bookSeats() {
        if (seats > 0) {
            seats--;
            return true;
        }
        return false;
    }

    void cancelSeats() {
        seats++;
    }
};

class Concert : public Event {
    string singer;

public:
    Concert(string name, string date, int seats, string time, string venue, string singer)
        : Event(name, date, seats, time, venue), singer(singer) {}

    void display() const override {
        cout << "Concert: " << eventName << endl
             << "Singer: " << singer << endl;
    }
};

class EventManager {
    vector<Event*> events; // Stores all event pointers
    map<string, vector<Event*>> userBookings;

public:
    void addEvent(Event* e) {
        events.push_back(e);
    }

    void showEvents() {
        if (events.empty()) {
            cout << "No events available." << endl;
        } else {
            cout << "Available Events:" << endl;
            for (size_t i = 0; i < events.size(); i++) {
                events[i]->display();
                cout << "*--*--*--*--*--*--*--*--*--*--*--*--*--*--*--*--*--*--*--*" << endl;
            }
        }
    }

    void bookEvent(const string& username, int index) {
        if (index < 1 || index > events.size()) {
            cout << "Invalid Event." << endl;
        } else if (events[index - 1]->bookSeats()) {
            userBookings[username].push_back(events[index - 1]);
            cout << "Booking confirmed." << endl;
        } else {
            cout << "No seats available." << endl;
        }
    }

    void cancelBooking(const string& username, int index) {
        if (index < 1 || index > userBookings[username].size()) {
            cout << "Invalid booking." << endl;
        } else {
            userBookings[username][index - 1]->cancelSeats();
            cout << "Seats canceled." << endl;
        }
    }

    void viewBookings(const string& username) {
        if (userBookings[username].empty()) {
            cout << "No bookings found." << endl;
        } else {
            cout << "Your Booked Events:" << endl;
            for (size_t i = 0; i < userBookings[username].size(); i++) {
                userBookings[username][i]->display();
                cout << "*--*--*--*--*--*--*--*--*--*--*--*--*--*--*--*--*--*--*--*" << endl;
            }
        }
    }
};

class User {
    map<string, string> users;
    string loggedInUser;

public:
    void registerUser() {
        string username, password;
        cout << "Enter the username: ";
        cin >> username;

        if (users.find(username) != users.end()) {
            cout << "Username already exists. Please try again." << endl;
            return;
        }

        cout << "Enter the password: ";
        cin >> password;
        users[username] = password;
        cout << "Registration successful :)" << endl;
    }

    bool loginUser() {
        string username, password;
        cout << "Enter username: ";
        cin >> username;

        if (users.find(username) == users.end()) {
            cout << "User not found. Please register first." << endl;
            return false;
        }

        cout << "Enter password: ";
        cin >> password;

        if (users[username] == password) {
            loggedInUser = username;
            cout << "Login successful!" << endl;
            return true;
        } else {
            cout << "Incorrect password. Please try again." << endl;
            return false;
        }
    }

    void logoutUser() {
        loggedInUser = "";
        cout << "Logged out successfully." << endl;
    }

    string getLoggedInUser() const {
        return loggedInUser;
    }
};

int main() {
    User user;
    EventManager eventManager;

    // Creating some events
    eventManager.addEvent(new Concert("Rock Concert", "2025-03-01", 50, "8:00 PM", "Arena", "The Rockers"));
    eventManager.addEvent(new Concert("Jazz Night", "2025-03-10", 30, "7:00 PM", "Jazz Club", "Smooth Jazz Band"));

    while (true) {
        if (user.getLoggedInUser().empty()) {
            cout << "1. Register\n2. Login\n3. Exit\n";
            int choice;
            cin >> choice;

            if (choice == 1) {
                user.registerUser();
            } else if (choice == 2) {
                if (user.loginUser()) {
                    bool exit = false;
                    while (!exit) {
                        cout << "\nWelcome, " << user.getLoggedInUser() << "!\n";
                        cout << "1. View Events\n2. Book Event\n3. View Booked Events\n4. Cancel Booking\n5. Logout\n";
                        int action;
                        cin >> action;

                        switch (action) {
                        case 1:
                            eventManager.showEvents();
                            break;
                        case 2: {
                            int eventIndex;
                            cout << "Enter event number to book: ";
                            cin >> eventIndex;
                            eventManager.bookEvent(user.getLoggedInUser(), eventIndex);
                            break;
                        }
                        case 3:
                            eventManager.viewBookings(user.getLoggedInUser());
                            break;
                        case 4: {
                            int bookingIndex;
                            cout << "Enter booking number to cancel: ";
                            cin >> bookingIndex;
                            eventManager.cancelBooking(user.getLoggedInUser(), bookingIndex);
                            break;
                        }
                        case 5:
                            user.logoutUser();
                            exit = true;
                            break;
                        default:
                            cout << "Invalid option!" << endl;
                            break;
                        }
                    }
                }
            } else if (choice == 3) {
                break;
            } else {
                cout << "Invalid choice!" << endl;
            }
        }
    }

    return 0;
}*/

#include <iostream>
#include <vector>
#include <map>
#include <string>
using namespace std;

class Event {
protected:
    string eventName;
    string date;
    int seats;
    string time;
    string venue;

public:
    Event(string name, string date, int seats, string time, string venue)
        : eventName(name), date(date), seats(seats), time(time), venue(venue) {}

    // Declare display() as a virtual function in the base class
    virtual void display() const {
        cout << "Event: " << eventName << endl
             << "Date: " << date << endl
             << "Seats Available: " << seats << endl
             << "Time: " << time << endl
             << "Venue for the event: " << venue << endl;
    }

    string getName() const {
        return eventName;
    }

    bool bookSeats() {
        if (seats > 0) {
            seats--;
            return true;
        }
        return false;
    }

    void cancelSeats() {
        seats++;
    }
};

class Concert : public Event {
    string singer;

public:
    Concert(string name, string date, int seats, string time, string venue, string singer)
        : Event(name, date, seats, time, venue), singer(singer) {}

    // Override display() to show Concert-specific information
    void display() const override {
        cout << "Concert: " << eventName << endl
             << "Singer: " << singer << endl
             << "Date: " << date << endl
             << "Seats Available: " << seats << endl
             << "Time: " << time << endl
             << "Venue: " << venue << endl;
    }
};

class EventManager {
    vector<Event*> events; // Stores all event pointers
    map<string, vector<Event*>> userBookings;

public:
    void addEvent(Event* e) {
        events.push_back(e);
    }

    void showEvents() {
        if (events.empty()) {
            cout << "No events available." << endl;
        } else {
            cout << "Available Events:" << endl;
            for (size_t i = 0; i < events.size(); i++) {
                events[i]->display();
                cout << "*--*--*--*--*--*--*--*--*--*--*--*--*--*--*--*--*--*--*--*" << endl;
            }
        }
    }

    void bookEvent(const string& username, int index) {
        if (index < 1 || index > events.size()) {
            cout << "Invalid Event." << endl;
        } else if (events[index - 1]->bookSeats()) {
            userBookings[username].push_back(events[index - 1]);
            cout << "Booking confirmed." << endl;
        } else {
            cout << "No seats available." << endl;
        }
    }

    void cancelBooking(const string& username, int index) {
        if (index < 1 || index > userBookings[username].size()) {
            cout << "Invalid booking." << endl;
        } else {
            userBookings[username][index - 1]->cancelSeats();
            cout << "Seats canceled." << endl;
        }
    }

    void viewBookings(const string& username) {
        if (userBookings[username].empty()) {
            cout << "No bookings found." << endl;
        } else {
            cout << "Your Booked Events:" << endl;
            for (size_t i = 0; i < userBookings[username].size(); i++) {
                userBookings[username][i]->display();
                cout << "*--*--*--*--*--*--*--*--*--*--*--*--*--*--*--*--*--*--*--*" << endl;
            }
        }
    }
};

class User {
    map<string, string> users;
    string loggedInUser;

public:
    void registerUser() {
        string username, password;
        cout << "Enter the username: ";
        cin >> username;

        if (users.find(username) != users.end()) {
            cout << "Username already exists. Please try again." << endl;
            return;
        }

        cout << "Enter the password: ";
        cin >> password;
        users[username] = password;
        cout << "Registration successful :)" << endl;
    }

    bool loginUser() {
        string username, password;
        cout << "Enter username: ";
        cin >> username;

        if (users.find(username) == users.end()) {
            cout << "User not found. Please register first." << endl;
            return false;
        }

        cout << "Enter password: ";
        cin >> password;

        if (users[username] == password) {
            loggedInUser = username;
            cout << "Login successful!" << endl;
            return true;
        } else {
            cout << "Incorrect password. Please try again." << endl;
            return false;
        }
    }

    void logoutUser() {
        loggedInUser = "";
        cout << "Logged out successfully." << endl;
    }

    string getLoggedInUser() const {
        return loggedInUser;
    }
};

int main() {
    User user;
    EventManager eventManager;

    // Creating some events
    eventManager.addEvent(new Concert("Rock Concert", "2025-03-01", 50, "8:00 PM", "Arena", "The Rockers"));
    eventManager.addEvent(new Concert("Jazz Night", "2025-03-10", 30, "7:00 PM", "Jazz Club", "Smooth Jazz Band"));

    while (true) {
        if (user.getLoggedInUser().empty()) {
            cout << "1. Register\n2. Login\n3. Exit\n";
            int choice;
            cin >> choice;

            if (choice == 1) {
                user.registerUser();
            } else if (choice == 2) {
                if (user.loginUser()) {
                    bool exit = false;
                    while (!exit) {
                        cout << "\nWelcome, " << user.getLoggedInUser() << "!\n";
                        cout << "1. View Events\n2. Book Event\n3. View Booked Events\n4. Cancel Booking\n5. Logout\n";
                        int action;
                        cin >> action;

                        switch (action) {
                        case 1:
                            eventManager.showEvents();
                            break;
                        case 2: {
                            int eventIndex;
                            cout << "Enter event number to book: ";
                            cin >> eventIndex;
                            eventManager.bookEvent(user.getLoggedInUser(), eventIndex);
                            break;
                        }
                        case 3:
                            eventManager.viewBookings(user.getLoggedInUser());
                            break;
                        case 4: {
                            int bookingIndex;
                            cout << "Enter booking number to cancel: ";
                            cin >> bookingIndex;
                            eventManager.cancelBooking(user.getLoggedInUser(), bookingIndex);
                            break;
                        }
                        case 5:
                            user.logoutUser();
                            exit = true;
                            break;
                        default:
                            cout << "Invalid option!" << endl;
                            break;
                        }
                    }
                }
            } else if (choice == 3) {
                break;
            } else {
                cout << "Invalid choice!" << endl;
            }
        }
    }

    return 0;
}

