//write code for for stack_array and display each element to screen
#include "arrays_mem.h"

using std::cout; using std::cin;
using std::string;

void stack_array()
{
    // Declare
    const int SIZE = 5;
    int numbers[SIZE]; // declare the array(list) (legacy C++)
    
    // Initialize
    for(int i = 0; i<SIZE; ++i)
    {
        numbers[i] = 0; // initializes all values to 0 (legacy C++)
    }

    // Use
    // Iterating though the array
    for(int i = 0; i<SIZE; ++i)
    {
        cout<<numbers[i]<<"\n";
    }
}

void stack_array_cin()
{
    // Declare
    const int SIZE = 3;
    int numbers[SIZE]; // declare the array(list) (legacy C++)
    
    // Initialize
    for(int i = 0; i<SIZE; ++i)
    {
        cout<<"Enter number: ";
        cin>>numbers[i]; // initializes all values to 0 (legacy C++)
    }

    // Use
    // Iterating though the array
    for(int i = 0; i<SIZE; ++i)
    {
        cout<<numbers[i]<<"\n";
    }

    cout<<"-1"<<numbers[-1]<<"\n";
    cout<<"3"<<numbers[3]<<"\n";

}

void array_months()
{
    const int NUM_OF_MONTHS = 3;
    int months[NUM_OF_MONTHS] {1, 2, 3};
    string month_names[NUM_OF_MONTHS] {"Jan", "Feb", "Mar"};

    for(int i=0; i<NUM_OF_MONTHS; ++i)
    {
        cout<<months[i]<<" is "<<month_names[i]<<"\n"; // Parallel arrays (C++ legacy)
    }

}

void array_for_ranged()
{
    const int SIZE = 3;
    int numbers[SIZE]{}; // declare and initialize the array(list)

    for(auto& number: numbers)
    {
        number = 1;
        cout<<number<<"\n";
    }
    cout<<"\n\n";
    for(auto number: numbers)
    {
        cout<<number<<"\n";
    }
}

void array_compare()
{
    const int SIZE = 3;
    int numbers[SIZE]{}; // declare and initialize the array(list)
    int numbers1[SIZE]{1,2,3};

    if(int i=0; i<SIZE; ++i)
    {
        if(numbers[i] != numbers1[i])
        {
            //set to false
        }
    }
}