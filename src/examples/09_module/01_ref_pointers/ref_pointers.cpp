#include "ref_pointers.h"
#include<iostream>

//
void ref_param(int& n1, int* n2)
{
    n1 = 100;
    *n2 = 200;
}