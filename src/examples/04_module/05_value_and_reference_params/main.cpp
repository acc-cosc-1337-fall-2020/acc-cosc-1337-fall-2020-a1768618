#include<iostream>
#include "value_ref.h"

using std::cout;	using std::cin;

int main() 
{
	sample_static_var();
	sample_static_var();
	sample_static_var();


	//Watch video lecture
	//pass_by_val_and_ref();



	int num = 5;
	cout << "value of num: " << num <<"\n";
	cout << "Stack Adress of num: " << &num<<"\n";

	int& num_ref = num;
	cout << "value of num: " << num_ref <<"\n";
	cout << "Stack Adress of num: " << &num_ref<<"\n";	

	num_ref = 10;
	cout << "value of num: " << num <<"\n";
	cout << "calue of num_ref: " << num_ref<<"\n";

	return 0;
}