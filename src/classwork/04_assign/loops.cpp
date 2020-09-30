// This program calculates the factorial of a number
// that the user inputs.

//cpp
#include <iostream>

using std::cout;    using std::cin;

int factorial(int num)
{
    // Declare and initialize variables
    int fact = 1;

    for(int count = 1; count <= num; ++count)
    {
        fact = fact * count;
    }
    return fact;
}