#include <memory>
#include <vector>
using std::unique_ptr;		
using std::make_unique;
using std::vector;

int get_area(int height = 20 , int width = 10);

//void sample_static_var();
/*
Write function prototype for pass_by_val_and_ref with
a value int and ref int parameter.
*/
void pass_by_val_and_ref(int num1);
void pass_by_val_and_ref(int num1, int& num2);


/*
Write function prototype for pass_by_const_ref with
const int reference parameter
*/
void pass_by_const_ref(const int& num3);

void static_example();

void use_smart_pointer(std::unique_ptr<int>&n);

std::unique_ptr<int> get_smart_pointer();
