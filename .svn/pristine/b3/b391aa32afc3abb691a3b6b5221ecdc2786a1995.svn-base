//  String Test Program
//
//  Tests: Char Constructor
//
//  
#include <iostream>
#include <cassert>
#include "string.hpp"

int main () {
    {
        // Setup fixture
        String test('\0');
        // Test
        // Verify
        assert(test == '\0');
    }

    {
        // Setup fixture
        char test = 'a';

        // Test (single char letter)
        String tester(test);
        
        // Verify
        assert(tester == test);
        std::cout << "String: " << tester << std::endl;
    }

    {
        // Setup fixture
        char test = '1';

        // Test (single char number)
        String tester(test);
        
        // Verify
        assert(tester == test);
        std::cout << "String: " << tester << std::endl;
    }

    {
        std::cout << std::endl;
        std::cout << "Finished testing char ctor" << std::endl;
        std::cout << std::endl;
    }
}