#include <iostream>
#include "../include/Tenant.hpp"
using namespace std;

Tenant::Tenant(string name, string contact, string moveInDate, int roomNumber, double balance) :
    name(name), contact(contact), moveInDate(moveInDate), roomNumber(roomNumber), balance(balance) {}