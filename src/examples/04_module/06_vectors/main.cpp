#include "vec.h"
#include <vector>
#include <string>
#include <iostream>

using std::vector;
using std::cout;
using std::string;

int main() 
{
	vector<string> nums {"joe", "marry", "bob"};
	cout<<"Capacity: "<<nums.capacity()<<"\n";

	nums.push_back("john");
	cout<<"Capacity: "<<nums.capacity()<<"\n";
	
	cout<<nums[3]<<"\n\n";

	for(std::size_t i=0; i < nums.size(); ++i)
	{
		cout<<nums[i]<<"\n";
	}

	cout<<"\n For ranged vector \n";
	for(auto n: nums)
	{
		cout<<n<<"\n";
	}

	return 0;
}