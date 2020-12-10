#include "recursion.h"

int main() 
{
	/*
	std::cout<<"Load stack\n";
	display(3);
	std::cout<<"Unload stack\n";
	*/

	std::cout<<"load the stack 5\n";
	int f = factorial(5);
	std::cout<<"unload stack 5\n\n";
	std::cout<<"factorial: "<<f<<"\n";
	
	return 0;
}