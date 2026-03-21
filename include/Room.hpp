#pragma once
#include <iostream>
#include <vector>
#include "TenantNode.hpp"
using namespace std;

class Room {
private:
    TenantNode* head;
    int roomNumber;
    double monthlyRate;
    string status;
    vector<std::string> conditions;

public:
    Room(int roomNumber, double monthlyRate, vector<string> conditions);
    
    string showTenants();
    void showInfo();
    void assignTenant();
    void removeTenant();
    bool isAvailable();
};