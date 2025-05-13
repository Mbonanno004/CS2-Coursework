//  String Test Program
//
//  Tests: copy ctor, uses ==
//
//  
#include <iostream>
#include <cassert>
#include "string.hpp"

int main() {
    {
        std::cout << "Test 1:" << std::endl;
        //Setup fixture
        String test1;
        //Test
        String test2(test1);
        //Verify
        assert(test1 == test2);
        assert(test1 == String());
        assert(test2 == String());
        std::cout << "Passed test 1" << std::endl;
    }

    {
        std::cout << "Test 2:" << std::endl;
        //Setup fixture
        String test1('a');
        //Test
        String test2(test1);
        //Verify
        assert(test1 == test2);
        assert(test1 == 'a');
        assert(test2 == 'a');
        std::cout << "Passed test 2" << std::endl;
    }

    {
        std::cout << "Test 3:" << std::endl;
        //Setup fixture
        String test1("abcde");
        //Test
        String test2(test1);
        //Verify
        assert(test1 == test2);
        assert(test1 == "abcde");
        assert(test2 == "abcde");
        std::cout << "Passed test 3" << std::endl;
    }

    {
        std::cout << std::endl;
        std::cout << "Finished testing copy constructor" << std::endl;
        std::cout << std::endl;
    }
}