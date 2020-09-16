#include "variables.h"
#include <iostream>

using std::cout;

//example
/* int add_numbers(int num1, int num2)
{
	return num1 + num2;
}

//write code for multiply_numbers function here
//function returns product of num1 and num2
int multiply_numbers(int num1, int num2)
{
	return num1 * num2;
}

*/

double const TAX_RATE = .0675;
double get_sales_tax_amount(double meal_amount)
{
	return meal_amount * TAX_RATE;
}

double get_tip_amount(double meal_amount, double tip_rate)
{
	return meal_amount * tip_rate;
}

