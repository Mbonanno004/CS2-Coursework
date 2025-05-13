//  String Test Program
//
//  Tests: Less than <
//
//  
#include <iostream>
#include <cassert>
#include "string.hpp"

int main() {
    
    {
        std::cout << "Test 1:" << std::endl;
        //Setup fixture
        String one;
        String two;
        //Test
        //Verify
        assert(!(one < two));
        assert(!(two < one));
        std::cout << "Passed test 1" << std::endl;
    }

    {
        std::cout << "Test 2:" << std::endl;
        //Setup fixture
        String one('a');
        String two('b');
        //Test
        //Verify
        assert(one < two);
        assert(!(two < one));
        std::cout << "Passed test 2" << std::endl;
    }

    {
        std::cout << "Test 3:" << std::endl;
        //Setup fixture
        String one("abcd");
        String two("abc");
        //Test
        //Verify
        assert(two < one);
        assert(!(one < two));
        std::cout << "Passed test 3" << std::endl;
    }

    {
        std::cout << "Test 4:" << std::endl;
        //Setup fixture
        String one("abcd");
        String two("abce"); 
        //Test
        //Verify
        assert(one < two);
        assert(!(two < one));
        std::cout << "Passed test 4" << std::endl;
    }

    {
        std::cout << "Test 5:" << std::endl;
        //Setup fixture
        String one("abc");
        String two;
        //Test (test)
        //Verify
        assert(two < one);
        assert(!(one < two));
        std::cout << "Passed test 5" << std::endl;
    }

    {
        std::cout << std::endl;
        std::cout << "Finished testing < operator" << std::endl;
        std::cout << std::endl;
    }
}
