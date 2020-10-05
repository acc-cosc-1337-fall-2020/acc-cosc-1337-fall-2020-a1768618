#include<string>
#include<iostream>
#include "for_ranged.h"

using std::string;	using std::cout;

int main() 
{
	string name = "john doe";
	string name1("");
	string name2(name, 2, 4); //print out 4 spaces starting from index 2
	string name3("constructor copy"); // creates a copy of the string
	string name4("i am too long for the buffer", 8); //allocates 8 spaces for the keyboard buffer
	string name5(10, 'x'); // creates a list of 10 'x's

	cout<<name<<"\n";
	cout<<name1<<"\n";
	cout<<name2<<"\n";
	cout<<name3<<"\n";
	cout<<name4<<"\n";
	cout<<name5<<"\n\n";

	cout<<name[2]<<"\n";
	name[0] = 'J';
	name[5] = 'D';
	cout<<name<<"\n\n";
	
	//Important way to itterate through a string
	for(std::size_t i = 0; i < name.size(); ++i)
	{
		cout<<name[i]<<"\n";
	}

	cout<<"\n for ranged \n";
	for(char c: name)
	{
		cout<<c<<"\n";
	}

	return 0;
}