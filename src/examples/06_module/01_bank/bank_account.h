//bank_account.h
class BankAccount
{
public:
    int get_balance()const{return balance;} // inline function
    void deposit(int amount);


private: // Access specifier
    int balance{0}; // class member
}; // VERY IMPORTANT DONT FORGET THE SEMI COLON!!!