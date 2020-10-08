//write include statements
#include <iostream>
#include "dna.h"


//write using statements
using std::cout;	using std::cin;

/*
Write code that prompts user to enter 1 for Get GC Content, 
or 2 for Get DNA Complement.  The program will prompt user for a 
DNA string and call either get gc content or get dna complement
function and display the result. Program runs as long as 
user enters a y or Y.
*/
int main() 
{
	// Declare and initialise variables
	string dna_sequence;	// String to hold the user inputed DNA
	int user_choice;		// Integer to hold the user's choice
	char again = 'y';		// Char to control the do-while loop


	// User contolled while loop as long as again is 'Y'
	do
	{
		// Display the choices to the user
		cout<<"Please enter a 1 to get the GC Conent \n";
		cout<<"Or enter a 2 to get the DNA Complement. \n";
		cout<<"1-Get GC content \n";
		cout<<"2-Get DNA complement \n";
		cin>>user_choice;
		cout<<"\n";
		
		// Gets the user's DNA string
		cout<<"Please enter a DNA string: \n";
		cin>>dna_sequence;
		cout<<"\n";

		// Iterate through the user's choice
		switch(user_choice)
		{
			// Display GC content if the user selecects a 1
			case 1:
				cout<<"The GC contet is: \n";
				cout<<get_gc_content(dna_sequence)<<"\n";
				cout<<"\n";
				break;

			// Display DNA Complement if the user selecects a 2	
			case 2:
				cout<<"The DNA Complement is: \n";
				cout<<get_dna_complement(dna_sequence)<<"\n";
				cout<<"\n";
				break;
		}

		cout<<"Do you want to contunue?\n";
		cout<<"Press 'Y' to continue or any other character to exit.\n";
		cin>>again;
		cout<<"\n";
	} while (toupper(again) == 'Y');
	


	return 0;
}