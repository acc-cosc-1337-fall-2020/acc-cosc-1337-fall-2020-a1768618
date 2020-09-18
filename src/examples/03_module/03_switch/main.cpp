#include<iostream>
#include "switch.h"

using std::cout;	using std::cin;
int main() 
{
	int option, y =0, z=0;
	int choice;

	if(choice == 0)
	{
		cout<< "Enter a number: ";
		cin>>option;
	
		std::string result = menu(option);

		cout<<"\n"<<result;

		//imediate if
		option > 4 ? y = 10 : z = 20;

		cout << "\n" << y << " "<<z;
		}
	else // look at video for rest.
	{

	}



	return 0;
}