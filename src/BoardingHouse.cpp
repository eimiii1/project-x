#include <iostream>
#include "../include/BoardingHouse.hpp"

BoardingHouse::BoardingHouse() {
    rooms.push_back(Room(101, 3500.00, {"with CR", "Ground Floor", "With fan"}));
    rooms.push_back(Room(102, 3500.00, {"with CR", "Ground Floor", "With fan"}));
    rooms.push_back(Room(201, 4500.00, {"with CR", "Second Floor", "With aircon"}));
    rooms.push_back(Room(202, 4500.00, {"with CR", "Second Floor", "With aircon"}));
    rooms.push_back(Room(301, 4000.00, {"with CR", "Third Floor", "With fan"}));
    rooms.push_back(Room(302, 4000.00, {"with CR", "Third Floor", "With fan"}));
    rooms.push_back(Room(401, 4500.00, {"with CR", "Fourth Floor", "With aircon"}));
    rooms.push_back(Room(402, 4500.00, {"with CR", "Fourth Floor", "With aircon"}));
}

void BoardingHouse::showAllRooms() {
    std::cout << "All Rooms\n" << std::endl;
    
    for (auto& room : rooms) {
        room.showInfo();
    }
}