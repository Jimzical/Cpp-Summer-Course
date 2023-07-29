#include <iostream>
#include <string>
#include <vector>
#include <map>
#include <limits>

using namespace std;

// Guest class to store guest details
// @param name(string) - The name of the guest.
// @param phone(int) - The phone number of the guest.
class Guest {
private:
    string name;
    int phone;

public:
    Guest(string name, int phone) : name(name), phone(phone) {}

    // Getter methods
    string getName() const { return name; }
    // Getter methods
    int getPhone() const { return phone; }
};

// Room class to represent each hotel room
// @param roomNumber(int)  The room number of the room.
// @param roomType(string)  The type of the room.
class Room {
private:
    int roomNumber;
    string roomType;
    bool isOccupied;
    Guest* guest;

public:
    Room(int roomNumber, string roomType)
        : roomNumber(roomNumber), roomType(roomType), isOccupied(false), guest(nullptr) {}

    // Getter methods
    // @return roomNumber(int) - The room number of the room.
    int getRoomNumber() const { return roomNumber; }
    // Getter methods
    // @return roomType(string) - The type of the room.
    string getRoomType() const { return roomType; }
    // Getter methods
    // @return isOccupied(bool) - The status of the room.
    bool getIsOccupied() const { return isOccupied; }
    // Getter methods
    // @return guest(Guest*) - The guest object.
    Guest* getGuest() const { return guest; }

    // Mark the room as occupied and store guest information
    // @param guest(Guest*) - The guest object.
    void occupyRoom(Guest* guest) {
        isOccupied = true;
        this->guest = guest;
    }

    // Mark the room as vacant and clear guest information 
    void vacateRoom() {
        isOccupied = false;
        guest = nullptr;
    }
};

// Hotel class to manage all the rooms and reservations
// @param name(string) The name of the hotel.
class Hotel {
private:
    string name;
    vector<Room> rooms;
    map<string, vector<int>> roomTypesMap;

public:
    Hotel(string name) : name(name) {}
    // Add a room to the hotel
    // @param roomNumber(int) The room number of the room.
    // @param roomType(string) The type of the room.
    void addRoom(int roomNumber, string roomType) {
        rooms.emplace_back(roomNumber, roomType);
        roomTypesMap[roomType].push_back(roomNumber);
    }

    // Get a pointer to a room based on the room number
    // @param roomNumber(int) The room number of the room.
    // @return room(Room*) - The room object.
    Room* findRoom(int roomNumber) {
        for (auto& room : rooms) {
            if (room.getRoomNumber() == roomNumber) {
                return &room;
            }
        }
        return nullptr;
    }

    // Check if a room type is available
    // @param roomType(string) The type of the room.
    // @return isRoomTypeAvailable(bool) - The status of the room type.
    bool isRoomTypeAvailable(string roomType) {
        return !roomTypesMap[roomType].empty();
    }

    // Make a reservation for a room
    // @param roomNumber(int) The room number of the room.
    // @param guest(Guest*) The guest object.
    void makeReservation(int roomNumber, Guest* guest) {
        Room* room = findRoom(roomNumber);
        if (room && !room->getIsOccupied()) {
            room->occupyRoom(guest);
            cout << "Reservation for Room " << roomNumber << " is successful.\n";
        } else {
            cout << "Room " << roomNumber << " is either occupied or does not exist.\n";
        }
    }

    // Check out from a room
    //  @param roomNumber(int) The room number of the room to check out from.
    void checkOut(int roomNumber) {
        Room* room = findRoom(roomNumber);
        if (room && room->getIsOccupied()) {
            room->vacateRoom();
            cout << "Checked out from Room " << roomNumber << ".\n";
        } else {
            cout << "Room " << roomNumber << " is not currently occupied or does not exist.\n";
        }
    }

    // Display all the rooms and their status with guest details if occupied
    void displayRoomStatus() {
        cout << "Room Status for Hotel " << name << ":\n";
        for (const auto& room : rooms) {
            cout << "Room " << room.getRoomNumber() << ": " << (room.getIsOccupied() ? "Occupied by " + room.getGuest()->getName() : "Vacant") << endl;
        }
    }

    // Display room details like room number, room type and guest details if occupied
    // @param roomNumber(int) The room number of the room.
    void displayRoomDetails(int roomNumber) {
        Room* room = findRoom(roomNumber);
        if (room) {
            cout << "Room Details for Room " << roomNumber << ":\n";
            cout << "Room Number: " << room->getRoomNumber() << endl;
            cout << "Room Type: " << room->getRoomType() << endl;
            if (room->getIsOccupied()) {
                Guest* guest = room->getGuest();
                cout << "Occupied by: " << guest->getName() << endl;
                cout << "Guest Phone: " << guest->getPhone() << endl;
            } else {
                cout << "Room Status: Vacant" << endl;
            }
        } else {
            cout << "Room " << roomNumber << " does not exist.\n";
        }
    }

    // Display available rooms for a specific room type
    // @param roomType(string) The type of the room.
    void displayAvailableRoomsByType(string roomType) {
        if (isRoomTypeAvailable(roomType)) {
            cout << "Available " << roomType << " Rooms:\n";
            for (int roomNumber : roomTypesMap[roomType]) {
                Room* room = findRoom(roomNumber);
                if (room && !room->getIsOccupied()) {
                    cout << "Room " << roomNumber << endl;
                }
            }
        } else {
            cout << "No " << roomType << " rooms available.\n";
        }
    }

    // Getter method for the hotel name
    // @return name(string) - The name of the hotel.
    string getName() const { return name; }

    // Destructor
    ~Hotel() {
        for (auto& room : rooms) {
            if (room.getGuest()) {
                delete room.getGuest();
            }
        }
    }
};

int main() {
    Hotel hotel(" Hotel xyz");
    hotel.addRoom(101, "Standard");
    hotel.addRoom(102, "Deluxe");
    hotel.addRoom(103, "Suite");

    hotel.addRoom(201, "Standard");
    hotel.addRoom(202, "Deluxe");
    hotel.addRoom(203, "Suite");
    hotel.addRoom(301, "Standard");
    hotel.addRoom(302, "Deluxe");
    hotel.addRoom(303, "Suite");

    Guest sathwikGuest("Sathwik", 1234567890);
    hotel.makeReservation(101, &sathwikGuest);

    Guest bhardwajGuest("Bhardwaj", 1234555666);
    hotel.makeReservation(102, &bhardwajGuest);

    Guest arishGuest("Arish", 2987654321);
    hotel.makeReservation(103, &arishGuest);

    Guest ramGuest("Ram", 1234567890);
    hotel.makeReservation(201, &ramGuest);
    
    cout << "Welcome to " << hotel.getName() << "!" << endl;

    int choice;
    do {
        cout << "\nMenu:\n";
        cout << "1. Display Room Status\n";
        cout << "2. Make a Reservation\n";
        cout << "3. Check Out\n";
        cout << "4. Display Room Details\n";
        cout << "5. Display Available Rooms by Type (Ex: Standard)\n";
        cout << "6. Exit\n";
        cout << "-------------------\n";
        cout << "Enter your choice: ";
        cin >> choice;

        if (cin.fail())
        {
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            cout << "Invalid input. Please try again with an int.\n";
            continue;
        }
        cout << endl;


        switch (choice) {
            case 1:
                hotel.displayRoomStatus();
                break;
            case 2: {
                int roomNumber;
                string guestName;
                int guestPhone;
                cout << "Enter Room Number: ";
                cin >> roomNumber;
                cout << "Enter Guest Name: ";
                cin.ignore();
                getline(cin, guestName);
                cout << "Enter Guest Phone: ";
                cin >> guestPhone;
                Guest* guest = new Guest(guestName, guestPhone);
                hotel.makeReservation(roomNumber, guest);
                break;
            }
            case 3: {
                int roomNumber;
                cout << "Enter Room Number: ";
                cin >> roomNumber;
                hotel.checkOut(roomNumber);
                break;
            }
            case 4: {
                int roomNumber;
                cout << "Enter Room Number: ";
                cin >> roomNumber;
                hotel.displayRoomDetails(roomNumber);
                break;
            }
            case 5: {
                string roomType;
                cout << "Enter Room Type: ";
                cin >> roomType;
                hotel.displayAvailableRoomsByType(roomType);
                break;
            }
            case 6:
                cout << "Thank you for using our Hotel Management System!\n";
                break;
            default:
                cout << "Invalid choice. Please try again.\n";
                break;
        }

    } while (choice != 6);

    return 0;
}