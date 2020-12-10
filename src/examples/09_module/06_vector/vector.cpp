#include "vector.h"

//Default Constructor
Vector::Vector()
: size{0}, space{size}, elements{nullptr}
{
    std::cout<<"\nSet size and space to 0, elements points to nullptr\n";
}

//Class Constructor
//private variable size to incoming parameter sz
//initialize elements pointer to a dynamic array of size sz
Vector::Vector(size_t sz)
: size{sz}, space{sz}, elements{new int[sz]} 
{
    std::cout<<"Create and init memory at "<<elements<< "\n";
    for(size_t i=0; i < size; ++i)
    {
        elements[i] = 0;
    }
}

/*
Copy Constructor
1-initialize size for v2
2-initialize memory for v2
3-copy element values from v1 into v2
*/
Vector::Vector(const Vector& v)
: size{v.size}, elements{new int[v.size]}
{
    std::cout<<"\nCopy Constructor Create and init memory "<<elements<<"\n";
    for(size_t i=0; i<v.size; ++i)
    {
        elements[i] =  v.elements[i];
    }
}

/*
Copy Assignment
1-Create temporary memory
2-Copy values from v1 into temporary memory
3-Delete class(v2) elements memory
4-Point elements memory to temporary memory
5-Return a reference to this vector
*/
Vector& Vector::operator=(const Vector& v)
{
    int* temp = new int[v.size];
    std::cout<<"\nCopy Assignment from "<<v.elements<<" to "<<elements<<"\n";

    for(size_t i = 0; i<v.size; ++i)
    {
        temp[i] =  v.elements[i];
    }

    delete[] elements;

    elements = temp;
    size = v.size;

    return *this;
}

/*
Move Constructor
1-Get dynamic memory from v
2-Get size from v
3-point v.elements to nullptr
4-set v.size to 0
*/
Vector::Vector(Vector && v)
: size{v.size}
{
    std::cout<<"\nMove Constructor from "<<elements<<" to "<<v.elements<<"\n";
    elements = v.elements;
    v.elements = nullptr;
    v.size = 0;
}

/*
Move Assignment
1-Dealocate origianl dynamic memory
2-Get dynamic memory from v
3-Get the size from v
4-Point v.elements to nullptr
5-set v.size to 0
*/
Vector& Vector::operator=(Vector && v)
{
    std::cout<<"\nMove Assignment from "<<elements<<" to "<<v.elements<<"\n";
    delete[] elements;
    elements = v.elements;
    size = v.size;
    v.elements = nullptr;
    v.size = 0;

    return *this;
}

/*
Reserve
1-Make sure new allocation is greater than space
2-Create temporary dynamic array of size new allocation
3-Copy values from old memory array to  temporary array
4-Delete the old memory array (nums)
5-Set nums to temporary memory array
6-Set space = new allocation
*/
void Vector::Reserve(size_t new_allocation)
{
    if(new_allocation <= space)
    {
        return;
    }

    int* temp = new int[new_allocation];

    for(size_t i=0; i < size; ++i)
    {
        temp[i] = elements[i];
    }

    delete[] elements;
    elements = temp;

    space = new_allocation;
}

/*
Resize
1-Reserve a new space of new_allocation size
2-Initialize elements greater than size
3-Set space to new_allocation
*/
void Vector::Resize(size_t new_allocation)
{
    Reserve(new_allocation);

    for (size_t i = 0; i < space; ++i)
    {
        elements[i] = 0;
    }

    space = new_allocation;
    
}

/*
Pushback
1-if space equal to 0 add some space with reserve default size
2-else if space == size add twice space new memory
3-add value to element at size position
4-increment size by 1
*/
void Vector::Pushback(int value)
{
    if(space == 0)
    {
        Reserve(RESERVE_DEFAULT_SIZE);
    }
    else if (space == size)
    {
        Reserve(space * RESERVE_DEFAULT_MULTIPLIER);
    }
    
    elements[size] = value;
    size++;
}

//Destructor
Vector::~Vector()
{
    std::cout<<"Release memory from heap from "<<elements<<"\n";
    delete[] elements;
}

// FREE FUNCTIONS-not part of the class
void use_stack_vector()
{
    Vector v1(3);
}

void use_heap_vector()
{
    Vector* v1 = new Vector(3);
    delete v1;
}

Vector get_vector()
{
    Vector v(3);
    return v;
}