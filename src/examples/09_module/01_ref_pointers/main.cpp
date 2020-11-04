#include "ref_pointers.h"
#include<iostream>
#include<memory>
#include<vector>
#include<utility>

using std::cout; 
using std::unique_ptr;  
using std::make_unique;

int main() 
{
	//Reference
	int num = 20, num2 = 25;
	int& num_ref = num;

	cout<<"Value of num: "<<num<<"\n";
	cout<<"Address of num: "<<&num<<"\n";
	cout<<"Address of num via num_ref: "<<&num_ref<<"\n";
	cout<<"Value of num via num_ref: "<<num_ref<<"\n\n";

	cout<<"Value of num2: "<<num2<<"\n";
	cout<<"Address of num2: "<<&num2<<"\n\n";

	num_ref = num2;//assigning the value of num2 to num

	cout<<"Value of num: "<<num<<"\n";
	cout<<"Value of num2: "<<num2<<"\n";
	cout<<"Address of num via num_ref: "<<&num_ref<<"\n\n";

	//pointer
	int num1 = 10, num3 = 15;
	int* num_ptr = &num1; // Saves the address of num1 into *num_ptr

	cout<<"Value of num1: "<<num1<<"\n";
	cout<<"Address of num1: "<<&num1<<"\n";
	cout<<"Address of num1 via num_ptr: "<<num_ptr<<"\n";
	cout<<"Value of num1 via num_ptr: "<<*num_ptr<<"\n\n"; // Dereferenced the pointer to get value

	num_ptr = &num3;//save the address of num3 to num_ptr

	cout<<"Address of num3: "<<&num3<<"\n";
	cout<<"Address of num3 via num_ptr: "<<num_ptr<<"\n";
	cout<<"Value of num3 via num_ptr: "<<*num_ptr<<"\n\n";

	//create dynamic memory(heap) with a pointer
	int* ptr_num1 = new int(5);

	//use dynamic memory
	cout<<"Value of ptr_num1 "<<*ptr_num1<<"\n\n";

	//delete dynamic memory
	delete ptr_num1;

	//smart pointers - unique pointers
	//create an instance of up_num in memory with the value of 100
	unique_ptr<int> up_num = make_unique<int>(100);
	cout<<"Value of smart pointer: "<<*up_num<<"\n\n";// rememeber to dereference it
	use_smart_pointer(up_num);	// Passing the as a reference to a function 

	unique_ptr<int> up_num1 = get_smart_pointer(); 
	cout<<"Value of smart pointer: "<<*up_num1<<"\n\n";
	use_smart_pointer(up_num1); 

	unique_ptr<int> up_num2(new int(15));
	cout<<"Value of smart pointer: "<<*up_num2<<"\n\n";

	//what about ownership of unique pointer
	// An istance of numbers vector is created
	std::vector<unique_ptr<int>> numbers;	// a vector is its own separate object

	// since main() owns the pointers, You have to move
	// (or trasfer ownership) of the pointer to numbers vector	
	numbers.push_back(std::move(up_num));	
	cout<<"Vector unique ptr at 0: "<<*numbers[0]<<"\n";

	return 0;
}