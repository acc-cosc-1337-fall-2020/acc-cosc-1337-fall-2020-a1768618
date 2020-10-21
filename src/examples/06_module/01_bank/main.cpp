#include "atm.h"
#include "bank_account.h"
#include <iostream>
#include <stdlib.h>
#include <time.h>

using std::cout;
using std::cin;

enum transaction{DEPOSIT = 1, WITHDRAW = 2, DISPLAY = 3};//legacy C++
enum class BANK_OPTIONS{DEPOSIT = 1, WITHDRAW = 2, DISPLAY = 3};

int main()
{
	srand(time(NULL));//generate a random number every time our program  runs
	//BankAccount account(100), account1(500);
	//BankAccount account2 = account + account1;
	

	int choice;
	char cont;
	ATM atm;
	do
	{
		atm.scan_card();

		cout<<"Enter 1, 2, or 3\n";
		cin>>choice;

		switch (static_cast<BANK_OPTIONS>(choice))
		{
		case BANK_OPTIONS::DEPOSIT:
			cout<<"You selected deposit\n";
			break;
		case BANK_OPTIONS::WITHDRAW:
			cout<<"You selected withdraw\n";
			break;
		case BANK_OPTIONS::DISPLAY:
			atm.display_balance();
			break;
		default:
			cout<<"Invalid choice\n";
		}
		cout<<"Enter y to continue: ";
		cin>>cont;
	} while (toupper(cont) == 'Y');
	
	

	/*BranchBank bank(100000);
	bank.update_balance(500);
	cout<<"Branch balance: "<<bank.get_branch_balance()<<"\n";
	//initial will come from another class that retrieves balance from DB

	BankAccount checking_account(100);//create an instance of the class
	
	cout<<"Branch balance: "<<bank.get_branch_balance()<<"\n";
	cout<<"Bank balance: "<<checking_account.get_bank_balance()<<"\n";
	display_balance(checking_account);*/

	
	
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