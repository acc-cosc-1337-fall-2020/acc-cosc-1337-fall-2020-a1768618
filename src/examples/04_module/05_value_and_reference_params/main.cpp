#include<iostream>
#include "value_ref.h"

using std::cout;	using std::cin;

int main() 
{
	/*static_example();
	static_example();
	static_example();*/

	pass_by_val_and_ref(5);
	int num1=5, num2=10;
	pass_by_val_and_ref(num1, num2);

	/*int num = 5;
	cout << "value of num: " << num <<"\n";
	cout << "Stack Adress of num: " << &num<<"\n";

	// reference variable-clones an existing variable
	int& num_ref = num;
	cout << "value of num: " << num_ref <<"\n"; // we can read the num value
	cout << "Stack Adress of num: " << &num_ref<<"\n";	

	num_ref = 10; // can we indirectly modify the num variable
	cout << "value of num: " << num <<"\n";
	cout << "value of num_ref: " << num_ref<<"\n";
	*/

	return 0;
}