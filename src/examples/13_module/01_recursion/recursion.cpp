#include "recursion.h"
#include<iostream>
//Write code for recursive display function
void display(int count)
{
    int c;
    if(count==0) // The base case
    {
        std::cout<<"Base Case - Start unloading the stack\n";
        return; // start unloading/unwinding the stack
    }

    std::cout<<"hello-load stack "<<count-1<<"\n";
    c = count-1;
    display(c);
    std::cout<<"unload stack\n";
}

//Write code for recursive factorial
int factorial(int n)
{
    int f; // track the rturn value of the factorial
    int r; // track the recursive function call return value
    if(n == 0)
    {
        return 1;
    }
    std::cout<<"load stack "<<n-1<<"\n";
    r=factorial(n-1);
    f=n*r;
    std::cout<<"unload stack n: "<<n<<"r: "<<f<<"\n";

    return f;
}