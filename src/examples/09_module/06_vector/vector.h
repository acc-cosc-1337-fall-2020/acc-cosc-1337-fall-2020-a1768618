//

#include <utility>
#include <iostream>
#ifndef MY_VECTOR_H
#define MY_VECTOR_H
#include<cstddef>
#include<stddef.h>

template<class T>
class Vector
{
public:
    Vector();
    Vector(size_t sz);
    Vector(const Vector<T>& v); // Copy constructor Rule 1 of 3 for Rule of 3 - Legacy C++
    Vector<T>& operator=(const Vector<T>& v); // Copy assignment Rule 2 of 3 for rule of 3 - Legacy C++
    Vector(Vector<T> && v); //Move Constructor with Rvalue Rule 4 of 5 for Rule of 5 - C++ 11 and beyond
    Vector<T>& operator=(Vector<T> && v); //Move Assignment 5 of 5 rule for Rule of 5 - C++ 11 and beyond
    size_t Size()const{return size;}
    size_t Capacity()const{return space;}
    void Reserve(size_t new_allocation);
    void Resize(size_t new_allocation);
    void Pushback(T value);
    T& operator[](size_t i){return elements[i];}
    T& operator[](size_t i)const{return elements[i];}
    ~Vector(); // Rule 3 of 3 for Rule of 3 - Legacy C++

private:
    size_t size; // size of the array
    size_t space; // size + free slots/spaces
    T* elements; // pointer to an array
    const int RESERVE_DEFAULT_SIZE {8};
    const int RESERVE_DEFAULT_MULTIPLIER {2};

};

// FREE FUNCTIONS-not part of the class
void use_stack_vector();
void use_heap_vector();
Vector<int> get_vector();

template<class T> // tells the compiler to create a templatized function
T add(T a, T b)
{
    return a + b;
}

#endif