#include"for.h"
#include<iostream>

using std::cout;	using std::cin;

int main() 
{
	int value;
	char choice = 'y';

	while(choice == 'y' || choice == 'Y')
	{
		
		std::cout<<"Enter a number: ";
		std::cin>>value;

		display_numbers(value);

		int result;
		
		result = sum_numbers(value);

		cout<<"\nResult: "<<result;

		cout<<"\nEnter y to continue:";
		cin>>choice;

	}



	return 0;
}