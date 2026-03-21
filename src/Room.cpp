#include <iostream>
#include <vector>
#include "../include/Room.hpp"
using namespace std;

Room::Room(int roomNumber, double monthlyRate, vector<string> conditions) : 
    roomNumber(roomNumber), monthlyRate(monthlyRate), conditions(conditions), head(nullptr), status("vacant") {}

void Room::showInfo() {
    cout << "Room number: " << roomNumber << "\n";
    cout << "Monthly Rate: " << monthlyRate << "\n";
    cout << "Status: " << status << "\n";
    cout << "Conditions: \n";
    for (auto& conditions : conditions) {
        cout << conditions;
    }
    cout << "Tenants: \n" << showTenants() << "\n";
}

string Room::showTenants() {
    TenantNode* current = head;

    while (current != nullptr) {
        current->data.showTenantInfo();
        current = current->next;
    }
}