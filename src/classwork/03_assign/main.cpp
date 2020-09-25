//Write the include statement for decisions.h here
#include "decision.h"
#include <iostream>

//Write namespace using statements for cout and cin
using std::cout;	using std::cin;

int main() 
{
	// Get input form the user
	int user_grade;
	cout << "Please enter a grade between 0 and 100: ";
	cin >> user_grade;

	// Validate input is between 0 and 100
	if(user_grade > 0 && user_grade < 100)
	{
		cout << "Your letter grade using if is: " << get_letter_grade_using_if(user_grade) << "\n";
		cout << "Your letter grade using switch is: " << get_letter_grade_using_switch(user_grade) << "\n";	
	}
	else
	{
		cout << "Number out of range \n";
	}
	
	return 0;
}

