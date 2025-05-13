// Bigint Test Program
//
// Tests:  subscript, uses ==
//
// NEED TO IMPLEMENT
// 
#include <iostream>
#include <cassert>
#include "bigint.hpp"

//===========================================================================
int main () {
    
    {
        // Setup
        Bigint bi(800);

        // Test 
        int digit = bi[0];

        // Verify
        std::cout << "Test 1:" << std::endl;
        std::cout << "digit == " << bi[0] << std::endl; // should be same
        std::cout << "digit == " << digit << std::endl;
        std::cout << std::endl;
        assert(bi    == 800);  
        assert(digit == 0);
    }

    {
        // Setup
        Bigint bi(1234567);

        // Test (tests if it'll return correct place)
        int digit = bi[3];

        // Verify
        std::cout << "Test 2:" << std::endl;
        std::cout << "digit == " << bi[3] << std::endl; // should be same
        std::cout << "digit == " << digit << std::endl;
        std::cout << std::endl;
        assert(bi    == 1234567);  
        assert(digit == 4);
    }

    {
        // Setup
        Bigint bi(123);

        // Test (tests if my [] properly return the -1 I told it to if the index is not between 0-CAPACITY)
        int digit = bi[500];

        // Verify
        std::cout << "Test 3:" << std::endl;
        std::cout << "digit == " << bi[500] << std::endl; // should be same
        std::cout << "digit == " << digit << std::endl;
        std::cout << std::endl;
        assert(bi    == 123); 
        assert(digit == -1);
    }

    {
        // Setup
        Bigint bi(0);

        // Test (if all 0's work)
        int digit = bi[0];

        // Verify
        std::cout << "Test 4:" << std::endl;
        std::cout << "digit (from overload[]) == " << bi[0] << std::endl; // should be same
        std::cout << "digit == " << digit << std::endl;
        std::cout << std::endl;
        assert(bi    == 0);
        assert(digit == 0);
    }
    
    //Add test cases!!

    std::cout << "Done testing subscript." << std::endl;
    return 0;
}

