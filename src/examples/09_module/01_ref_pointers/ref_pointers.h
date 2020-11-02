#include<memory>

//Create ref function w reference and pointer parameter 
void use_smart_pointer(std::unique_ptr<int>& num);

//Create return pointer function
//The return value is a smart pointer
std::unique_ptr<int> get_smart_pointer();