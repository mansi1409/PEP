#include <iostream>
#include <vector>
#include <string>
#include <map>

using namespace std;

// Base class for Events
class Event {
protected:
    string eventName;
    string date;
    // string location;
    int availableSeats;
public:
    Event(string name, string date, int seats): eventName(name), date(date), availableSeats(seats) {}

    virtual void display() const {
        cout << "Event: " << eventName << "\nDate: " << date 
             << "\nAvailable Seats: " << availableSeats << endl;
    }

    string getName() const { return eventName; }

    bool bookSeat() {
        if (availableSeats > 0) {
            availableSeats--;
            return true;
        }
        return false;
    }

    void cancelSeat() { availableSeats++; }
};

// Derived class: Concert
class Concert : public Event {
    string artist;
public:
    Concert(string name, string date, int seats, string artist): Event(name, date, seats), artist(artist) {}

    void display() const override {
        cout << "🎵 Concert: " << eventName << "\nArtist: " << artist
             << "\nDate: " << date << "\nAvailable Seats: " << availableSeats << endl;
    }
};

// Derived class: Conference
class Conference : public Event {
    string topic;
public:
    Conference(string name, string date, int seats, string topic)
        : Event(name, date, seats), topic(topic) {}

    void display() const override {
        cout << "🎤 Conference: " << eventName << "\nTopic: " << topic
             << "\nDate: " << date << "\nAvailable Seats: " << availableSeats << endl;
    }
};

// Event Manager
class EventManager {
    vector<Event*> events;
    map<string, vector<Event*> > userBookings;  // Store bookings per user
public:
    void addEvent(Event* e) {
        events.push_back(e);
    }

    void showEvents() {
        if (events.empty()) {
            cout << "No events available.\n";
            return;
        }
        cout << "\nAvailable Events:\n";
        for (size_t i = 0; i < events.size(); i++) {
            cout << "[" << i + 1 << "] ";
            events[i]->display();
            cout << "------------------------\n";
        }
    }

    void bookEvent(const string& username, int index) {
        if (index < 1 || index > events.size()) {
            cout << "Invalid event number!\n";
            return;
        }
        if (events[index - 1]->bookSeat()) {
            userBookings[username].push_back(events[index - 1]);
            cout << "Booking successful for " << events[index - 1]->getName() << "!\n";
        } else {
            cout << "Sorry, no seats available.\n";
        }
    }

    void showUserBookings(const string& username) {
        if (userBookings[username].empty()) {
            cout << "No bookings found for " << username << ".\n";
            return;
        }
        cout << "\nYour Booked Events:\n";
        for (size_t i = 0; i < userBookings[username].size(); i++) {
            cout << "[" << i + 1 << "] ";
            userBookings[username][i]->display();
            cout << "------------------------\n";
        }
    }

    void cancelBooking(const string& username, int index) {
        if (index < 1 || index > userBookings[username].size()) {
            cout << "Invalid booking number!\n";
            return;
        }
        userBookings[username][index - 1]->cancelSeat();
        cout << "Booking cancelled for " << userBookings[username][index - 1]->getName() << ".\n";
        userBookings[username].erase(userBookings[username].begin() + (index - 1));
    }
};

// User Authentication System
class UserManager {
    map<string, string> users;  // Stores username & password
    string loggedInUser;

public:
    UserManager() : loggedInUser("") {}

    void registerUser() {
        string username, password;
        cout << "Enter username: ";
        cin >> username;
        if (users.find(username) != users.end()) {
            cout << "Username already exists! Try again.\n";
            return;
        }
        cout << "Enter password: ";
        cin >> password;
        users[username] = password;
        cout << "Registration successful! You can now log in.\n";
    }

    bool loginUser() {
        string username, password;
        cout << "Enter username: ";
        cin >> username;
        cout << "Enter password: ";
        cin >> password;
        if (users.find(username) != users.end() && users[username] == password) {
            loggedInUser = username;
            cout << "Login successful! Welcome, " << username << ".\n";
            return true;
        }
        cout << "Invalid username or password! Try again.\n";
        return false;
    }

    void logoutUser() {
        cout << "Goodbye, " << loggedInUser << "!\n";
        loggedInUser = "";
    }

    string getLoggedInUser() { return loggedInUser; }
};

// Main function
int main() {
    EventManager manager;
    UserManager userManager;

    // Adding sample events
    manager.addEvent(new Concert("Rock Fest", "2025-02-20", 100, "Imagine Dragons"));
    manager.addEvent(new Conference("Tech Summit", "2025-03-15", 50, "AI & Future"));

    int choice;
    do {
        cout << "\nEvent Management System\n";

        // If no user is logged in
        if (userManager.getLoggedInUser().empty()) {
            cout << "1. Register\n"
                 << "2. Login\n"
                 << "8. Exit\n";
        } else { // If a user is logged in
            cout << "3. View Events\n"
                 << "4. Book an Event\n"
                 << "5. View My Bookings\n"
                 << "6. Cancel a Booking\n"
                 << "7. Logout\n";
        }

        cout << "Enter your choice: ";
        cin >> choice;

        if (userManager.getLoggedInUser().empty()) { // Unauthenticated user
            if (choice == 1) {
                userManager.registerUser();
            } else if (choice == 2) {
                userManager.loginUser();
            } else if (choice == 8) {
                cout << "Exiting...\n";
                break;
            } else {
                cout << "Invalid choice! Please log in first.\n";
            }
        } else { // Authenticated user
            if (choice == 3) {
                manager.showEvents();
            } else if (choice == 4) {
                manager.showEvents();
                int bookIndex;
                cout << "Enter event number to book: ";
                cin >> bookIndex;
                manager.bookEvent(userManager.getLoggedInUser(), bookIndex);
            } else if (choice == 5) {
                manager.showUserBookings(userManager.getLoggedInUser());
            } else if (choice == 6) {
                manager.showUserBookings(userManager.getLoggedInUser());
                int cancelIndex;
                cout << "Enter booking number to cancel: ";
                cin >> cancelIndex;
                manager.cancelBooking(userManager.getLoggedInUser(), cancelIndex);
            } else if (choice == 7) {
                userManager.logoutUser();
            } else {
                cout << "Invalid choice! Try again.\n";
            }
        }
    } while (true);

    return 0;
}
