#include<iostream>
#include "vars.h"


using std::cout; // What is usded in the industry

int main() 
{
	echo_variable(5);
	cout<<"\n"<<echo_variable_ret(5)<<"\n";

	int num = echo_variable_ret(5);
	cout<<num;

	return 0;
}