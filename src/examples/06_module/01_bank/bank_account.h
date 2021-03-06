//bank_account.h
#ifndef BRANCH_BANK_H
#define BRANCH_BANK_H
#include<iostream>
using std::ostream;
using std::istream;

class BranchBank
{
public:
    BranchBank(int b) : branch_balance(b){}
    void update_balance(int b);
    int get_branch_balance()const{return branch_balance;}

private:
    int branch_balance;
};

#endif


#ifndef BANK_ACCOUNT_H // header guard
#define BANK_ACCOUNT_H // header guard


class BankAccount
{
public:
    BankAccount() = default;//behave like the default constructor C++ creates
    explicit BankAccount(int b); // prevents user from saying BankAccount b = 1000

    //The virtual keyword allows derived classes to behave like the base class
    //If the virtul function is '= 0' the function is purely virtual. Making the class an abstract class.
    //The user will not be able to create an instance of an Abstact class.
    virtual int get_balance()const = 0; 
    virtual void deposit(int amount) final;
    virtual void withdraw(int amount) final;
    friend void display_balance(const BankAccount& a);//NOT A CLASS FUNCTION-it is a free function
    friend void BranchBank::update_balance(int b);
    static int get_bank_balance(){return bank_balance;}  // Persists thoughout the lifetime of program
    friend std::ostream& operator<<(std::ostream& out, const BankAccount& a);
    friend std::istream& operator>>(std::istream& in, BankAccount& a);
    //friend BankAccount operator+(const BankAccount& a1, const BankAccount& a2);

protected: // classes that have inherited the back account have access to this data
    int balance{0}; //class member
    
private: //access specifier
    static int bank_balance;  // Persists thoughout the lifetime of program
    

}; //VERY IMPORTANT DON'T FORGET THE SEMICOLON!!!!!!!

#endif // header guards

//THESE FUNCTIONS DON'T BELONG TO THE BANKACCOUNT CLASS
void display_bank_account_data(BankAccount& b);//free function
//BankAccount get_account();//free function 