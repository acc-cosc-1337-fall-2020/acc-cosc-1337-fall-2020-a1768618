#include<iostream>
#include "value_ref.h"

using std::cout;	
using std::cin;


int main() 
{
	/*static_example();
	static_example();
	static_example();*/

	pass_by_val_and_ref(5);
	//int num1=5, num2=10;
	//pass_by_val_and_ref(num1, num2);

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

	// pointer
	/*int num2 = 10, num3 = 20;
	int *ptr_num = &num2;//? why &
	cout<<"Value of num2 "<<num2<<"\n";
	cout<<"Address of num2 "<<&num2<<"\n";
	cout<<"Address of ptr_num "<<ptr_num<<"\n";
	cout<<"Value of ptr_num "<<*ptr_num<<"\n";

	*ptr_num = 100;
	cout<<"Value of num2 "<<num2<<"\n";
	cout<<"Address of num2 "<<&num2<<"\n";
	cout<<"Address of ptr_num "<<ptr_num<<"\n";
	cout<<"Value of ptr_num "<<*ptr_num<<"\n";

	cout<<"Address of num3 "<<&num3<<"\n";
	*ptr_num = num3;*/

	// Create Memory
	int* ptr_num = new int(5);	// Create a dynamic instance of an integer w value 5
	cout<<*ptr_num; // Use memory
	delete ptr_num; // Delete memory

	// Smart pointers
	unique_ptr<int> num = make_unique<int>(5);
	//cout<<*num;
	use_smart_pointer(num);

	unique_ptr<int> num1 = get_smart_pointer();
	use_smart_pointer(num1);

	std::vector<unique_ptr<int>> nums;
	nums.push_back(std::move(num));
	cout<<*nums[0];
	for(auto& num:nums)
	{
		cout<<*num;
	}

	return 0;
}