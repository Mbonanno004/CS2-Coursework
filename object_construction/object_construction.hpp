// .hpp for lab Object Creation and Destruction Lab

#ifndef OBJECT_CONSTRUCTION
#define OBJECT_CONSTRUCTION

#include <iostream>

class test {
public:
          test      () : ptr(0), size(0) {std::cout << "Called default constructor" << std::endl; };                 // default constructor
          test      (char[]);                                // ctor for array
          test      (const test&);                           // copy constructor
          ~test     () { delete[] ptr; std::cout << "Called destructor" << std::endl; };                               // destructor
    test& operator= (test rhs) { swap(rhs); return *this; std::cout << "Called overloaded assignment" << std::endl; }; // assignment
    void  swap      (test&);

private:
    char *ptr;
    int size;
};

#endif