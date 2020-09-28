// This program converts numeric grades to letter grades

// Preprocessor directives
#include <iostream>
#include "decision.h"
#include <string>

using std::cout;    using std::cin;     using std::string;

// Constants to hold minimum scores
const int MIN_A_GRADE = 90,
MIN_B_GRADE = 80,
MIN_C_GRADE = 70, 
MIN_D_GRADE = 60, 
MIN_POSSIBLE_GRADE = 0;

const int MAX_POSSIBLE_GRADE = 100,
MAX_B_GRADE = 89,
MAX_C_GRADE = 79, 
MAX_D_GRADE = 69,
MAX_F_GRADE = 59;

// Define the function get_letter_grade_using_if()
string get_letter_grade_using_if(int grade)
{
    string letter_grade;  // Will hold the current letter grade

    // Determine letter grade using if/else-if construct
    if(grade >= MIN_A_GRADE && grade <= MAX_POSSIBLE_GRADE)
    {
        letter_grade = "A";
        
    }
    else if(grade >= MIN_B_GRADE && grade <= MAX_B_GRADE)
    {
        letter_grade = "B";
        
    }
    else if(grade >= MIN_C_GRADE && grade <= MAX_C_GRADE)
    {
        letter_grade = "C";
        
    }
    else if(grade >= MIN_D_GRADE && grade <= MAX_D_GRADE)
    {
        letter_grade = "D";
        
    }
    else if(grade >= MIN_POSSIBLE_GRADE && grade <=  MAX_F_GRADE)
    {
        letter_grade = "F";  
    }
    return letter_grade;
}

// Define the function get_letter_grade_using_switch()
string get_letter_grade_using_switch(int grade)
{
    int quotient = grade / 10;
    string letter_grade;

    // Determine letter grade using switch construct
    switch (quotient)
    {
    case 10:
        letter_grade = "A";
        break;
    case 9:
        letter_grade = "A";
        break;
    case 8:
        letter_grade = "B";
        break;
    case 7:
        letter_grade = "C";
        break;
    case 6:
        letter_grade = "D";
        break;
    case 5:
    case 4:
    case 3:
    case 2:
    case 1:
    case 0:
        letter_grade = "F";
        break;
    default:
        return letter_grade = "Invalid";
    }    
    return letter_grade;
}