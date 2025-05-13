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
        bi = bi.timesDigit(1);

        // Verify
        assert(bi == 3);
    }

    {
        // Setup fixture
        Bigint bi(0);

        // Test 
        bi = bi.timesDigit(0);

        // Verify
        assert(bi == 0);
    }

    {
        // Setup fixture
        Bigint bi(1);

        // Test 
        bi = bi.timesDigit(0);

        // Verify
        assert(bi == 0);
    }

    {
        // Setup fixture
        Bigint bi(123);

        // Test 
        bi = bi.timesDigit(3);

        // Verify
        assert(bi == 369);
    }

    {
        // Setup fixture
        Bigint bi(123);

        // Test 
        bi = bi.timesDigit(20); // shouldn't be possible, it's out of bounds of the digits allowed in the definiiton

        // Verify
        assert(bi == 123);
    }

    //Add test cases as needed.
    
    std::cout << "Done testing Bigint * digit" << std::endl;
    return 0;
}
