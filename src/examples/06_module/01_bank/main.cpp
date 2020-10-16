#include "atm.h"
#include "bank_account.h"
#include <iostream>
#include <stdlib.h>
#include <time.h>

using std::cout;
using std::cin;

int main()
{
	srand(time(NULL));//generate a random number every time our program  runs
	BankAccount account;

	cout<<"balance "<<account.get_balance()<<"\n\n";

	BranchBank bank(100000);
	bank.update_balance(500);
	cout<<"Branch balance: "<<bank.get_branch_balance()<<"\n";
	//initial will come from another class that retrieves balance from DB

	BankAccount checking_account(100);//create an instance of the class
	
	cout<<"Branch balance: "<<bank.get_branch_balance()<<"\n";
	cout<<"Bank balance: "<<checking_account.get_bank_balance()<<"\n";
	display_balance(checking_account);

	/*int choice;
	ATM atm;
	do
	{
		atm.scan_card();
		atm.display_balance();
		cout<<"Enter 1 to continue..";
		cin>>choice;
	}while(choice == 1);*/
	
	
	
	
	
	/*cout<<"Balance: "<<checking_account.get_balance()<<"\n\n";	// Displays the returned balance in BankAccount

	cout<<"Bank balance: "<<checking_account.get_bank_balance()<<"\n\n";	// Disaplay the sataic integer holding $100 from checking_account

	BankAccount new_account;	// Creates a new instance of BankAccount
	cout<<"Balance: "<<new_account.get_balance()<<"\n";		// Display what is in the default constuctor which is 0.
	display_bank_account_data(new_account);		// Free function is called to deposit 50 into the new_account balance in BankAccount
	cout<<"Balance: "<<new_account.get_balance()<<"\n";		// Returns the new_account balance in BackAccount class after $50 deposit
	cout<<"Bank balance: "<<new_account.get_bank_balance()<<"\n\n";		// Displays the static integer holding $150 becouse $50 was added to the prevoius $100

	BankAccount account = get_account();
	cout<<"Account balance: "<<account.get_balance()<<"\n\n";
	cout<<"Bank balance: "<<account.get_bank_balance()<<"\n\n";
	BankAccount copied_account = checking_account;
	cout<<"Balance checking: "<<checking_account.get_balance()<<"\n";
	
	cout<<"Balance copied: "<<copied_account.get_balance()<<"\n\n";
	
	//show class copy 
	checking_account.deposit(100);
	copied_account.deposit(100);
	cout<<"Balance checking: "<<checking_account.get_balance()<<"\n";
	cout<<"Balance copied: "<<copied_account.get_balance()<<"\n\n";
	
	cout<<"Bank balance: "<<copied_account.get_bank_balance();*/

	return 0;
}