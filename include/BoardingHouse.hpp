#pragma once

#include <iostream>
#include <vector>
#include "Room.hpp"

class BoardingHouse {
private:
    std::string name;
    std::string address;
    std::string ownerName;
    std::vector<Room> rooms;
    
public:
    BoardingHouse();

    void showAvailableRooms();
    void findRoom(int roomNumber);
    void addTenant(int roomNumber, Tenant tenant);
    void removeTenant(int roomNumber);
    void showAllRooms();
    void showAllTenants();
};