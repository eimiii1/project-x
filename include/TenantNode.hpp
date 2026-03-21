#pragma once 
#include "Tenant.hpp"

struct TenantNode {
    Tenant data;
    TenantNode* next;
};