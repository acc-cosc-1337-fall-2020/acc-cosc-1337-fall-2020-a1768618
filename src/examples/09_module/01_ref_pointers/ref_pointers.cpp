#include "ref_pointers.h"
#include<iostream>

//
void use_smart_pointer(std::unique_ptr<int>& num)
{
    std::cout<<"Use Smart pointer function: "<<*num<<"\n";
}



std::unique_ptr<int> get_smart_pointer()
{
    // We can create dynamic memory in the function 
    std::unique_ptr<int> num = std::make_unique<int>(500);
    
    // and then return it as a return value.
    return num;
}
