//  String Test Program
//
//  Tests: Default Constructor, uses == and <<
//
//  
#include <iostream>
#include <cassert>
#include "string.hpp"

int main () {
    {
        // Setup fixture
        String test;

        // Test 

        // Verify
        assert(test == '\0');
    }

    {
        std::cout << "Finished testing default ctor" << std::endl;
    }
}