//atm.h
#include "customer.h"
#include<iostream>
#include<vector>
#include<stdlib.h>

#ifndef ATM_H
#define ATM_H

using std::vector;

class ATM
{
public:
    ATM();
    void scan_card();
    void display_balance();
    
private:
    std::vector<Customer> customers;
    int customer_index;
    int account_index;
};

#endif 