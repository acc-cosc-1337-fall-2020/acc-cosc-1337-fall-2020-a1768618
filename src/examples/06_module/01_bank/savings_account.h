//savings_account.h
#include "bank_account.h"

#ifndef CHECKING_ACCOUNT_H
#define CHECKING_ACCOUNT_H
class SavingsAccount : public BankAccount
{
public:
    SavingsAccount(int b) : BankAccount(b){}
    int get_balance;
};
#endif