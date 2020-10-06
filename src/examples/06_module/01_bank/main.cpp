#include "bank_account.h"
#include <iostream>

using std::cout;

int main()
{
	BankAccount account; // create an instance of the class
	cout<<"Balance"<<account.get_balance();

	BankAccount savings_account;

	return 0;
}