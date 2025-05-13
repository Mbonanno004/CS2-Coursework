// Bigint Test Program
//
// Tests:  times_10, uses ==
//
// NEED TO IMPLEMENT
// 
#include <iostream>
#include <cassert>
#include "bigint.hpp"

//===========================================================================
int main () {
    {
        // Setup fixture
        Bigint bi(3);

        // Test 
        bi = bi.times10(0);

        // Verify
        std::cout << "Return: " << bi << std::endl;
        assert(bi == 3); 
    }

    {
        // Setup fixture
        Bigint bi(12345);

        // Test 
        bi = bi.times10(3);

        // Verify
        std::cout << "Return: " << bi << std::endl;
        assert(bi == 12345000); 
    }
    
    {
        // Setup fixture
        Bigint bi("123456789");

        // Test 
        bi = bi.times10(40);

        // Verify
        std::cout << "Return: " << bi << std::endl;
        assert(bi == "1234567890000000000000000000000000000000000000000"); 
    }

    //Add test cases as needed.

    std::cout << "Done testing times_10" << std::endl;
    return 0;
}

