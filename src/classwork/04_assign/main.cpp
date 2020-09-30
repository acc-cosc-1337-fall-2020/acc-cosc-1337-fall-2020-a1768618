//write includes statements
#include "loops.h"
#include<iostream>

//write using statements for cin and cout
using std::cout;    using std::cin;

/*
Use a do while loop to prompt the user for 
a number, call the factorial function, and display the number's
factorial.  Also, loop continues as long as user wants to.
*/
int main() 
{
	int num;
	char repeat;

	do
	{
		cout << "Please enter a number: ";
		cin >> num;

		while(num < 1 || num > 10)
		{
			cout << "Please enter a number between 1 and 20: ";
			cin >> num;
		}

		cout<<"The factorial of "<<num<<" is "<<factorial(num)<<"\n";
		cout<<"Enter 'Y' to find another factorial.\n";
		cout<<"Or press 'N' to exit. ";
		cin >> repeat;

	} while (toupper(repeat) == 'Y');
	


	return 0;
}