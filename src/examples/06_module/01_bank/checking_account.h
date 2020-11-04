//checking_account.h
#include "bank_account.h"

#ifndef CHECKING_ACCOUNT_H
#define CHECKING_ACCOUNT_H

class CheckingAccount : public BankAccount
{    
public:
    CheckingAccount(){};
    CheckingAccount(int b) : BankAccount(b){};

    // Accessing a COPY of balance, and OVERRIDING the get_balance from BankAccount
    int get_balance()const override{return BankAccount::get_balance() + 5;} 
};
#endif