#include "dna.h"
#include <iostream>
#include <string>
using std::string;

/*
Write code for function get_gc_content that accepts
a const reference string parameter and returns a double.
Calculate GC content:
Iterate string count Gs and Cs, divide count by string length.
Return quotient.
*/
double get_gc_content( const string &dna)
{
    char ch;
    double gc_count = 0;
    

    for(std::size_t i = 0; i < dna.size(); i++)
    {
        // assign the next character to ch
        ch = dna[i];

        // If the character is a g or a c increment gc_count
        switch(ch)
        {
            case 'G':
            case 'C':
                gc_count++;
                break;
        }  
    }

    // Calcualte the gc content
    double gc_content = gc_count / dna.size();
    return gc_content;
   
}



/*
Write code for function get_reverse_string that
accepts a string parameter and returns a string reversed.
*/
string get_reverse_string(string dna)
{
    // Declare a reverse string
    string reverse_string;

    // Loop though the length of dna backwards
    for(int i = dna.length()-1; i >= 0; i--)
    {
        // Adds the character to the reverse_string variable
        reverse_string.push_back(dna[i]);
    }
    return reverse_string;
}


/*
Write prototype for function get_dna_complement that
accepts a string dna and returns a string.
Calculate dna complement:
a. call function get_reverse_string(dna), save results to a local string variable
b. iterate local string variable and
    replace A with T, T with A, C with G and G with C
c. return string

*/
string get_dna_complement(string dna)
{
    // Call the get_reverse_string function with dna a param
    // and assign it to a cola variable dna_complement
   string dna_complement = get_reverse_string(dna);

    // Declare and initialize DNA base pairs
   char a = 'A';
   char t = 'T';
   char c = 'C';
   char g = 'G';
   
   // Loops though the length of tha dna_complement
   for(std::size_t i = 0; i < dna_complement.length(); i++)
   {
       // Test each character and replace them apropriately
       if(dna_complement[i] == a)
       {
           dna_complement[i] = t;
       }
       else if(dna_complement[i] == t)
       {
           dna_complement[i] = a;
       }
       else if(dna_complement[i] == c)
       {
           dna_complement[i] = g;
       }
       else if(dna_complement[i] == g)
       {
           dna_complement[i] = c;
       }
   }
   return dna_complement;

}
