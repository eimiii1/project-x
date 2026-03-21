#pragma once
#include <iostream>
using namespace std;

class Tenant {
private:
    string name;
    string contact;
    string moveInDate;
    int roomNumber;
    double balance;

public:
    Tenant(string name, string contact, string moveInDate, int roomNumber, double balance);

    string getName() {return name;}
    string getContact() {return contact;}
    string getMoveInDate() {return moveInDate;}
    int getRoomNumber() {return roomNumber;}
    double getBalance() {return balance;}
        
    void showTenantInfo();
};