//  String Test Program
//
//  Tests: output <<
//
//  
#include <iostream>
#include "string.hpp"

int main() {
    {
        //Setup fixture
        String test("This is a test to see if the output operator works correctly");
        //Test
        std::cout << "Output test: " << test << std::endl;
        //Verify
    }

    {
        std::cout << std::endl;
        std::cout << "Finished testing output operator <<" << std::endl;
        std::cout << std::endl;
        return 0;
    }
}