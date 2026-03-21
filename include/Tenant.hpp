#pragma once
#include <iostream>

class Tenant {
private:
    std::string name;
    std::string contact;
    std::string moveInDate;
    int roomNumber;
    double balance;

public:
    Tenant(std::string name, std::string contact, std::string moveInDate, int roomNumber, double balance);

    std::string getName() {return name;}
    std::string getContact() {return contact;}
    std::string getMoveInDate() {return moveInDate;}
    int getRoomNumber() {return roomNumber;}
    double getBalance() {return balance;}
        
    void showTenantInfo();
};