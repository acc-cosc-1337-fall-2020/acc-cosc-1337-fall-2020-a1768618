//atm.h
#include "bank_account.h"
#include<iostream>
#include<stdlib.h>
#include<vector>

#ifndef ATM_H
#define ATM_H

using std::vector;

class ATM
{
public:
    ATM();
    void scan_card();
    void display_balance()const;
    
private:
    int get_balance_from_db();
    std::vector<BankAccount> accounts;
    int bank_account_index;
};

#endif 