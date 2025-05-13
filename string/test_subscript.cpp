//  String Test Program
//
//  Tests: [] operator, uses ==
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
        //Test
        //Verify
        assert(one[0] == '\0');
        std::cout << "Passed test 1" << std::endl;
    }

    {
        std::cout << "Test 2:" << std::endl;
        //Setup fixture
        String one('a');
        //Test
        //Verify
        assert(one[0] == 'a');
        assert(one[1] == '\0');
        std::cout << "Passed test 2" << std::endl;
    }

    {
        std::cout << "Test 2:" << std::endl;
        //Setup fixture
        String one('a');
        String two;
        //Test
        two += one[0];
        //Verify
        assert(two == 'a');
        assert(one[0] == 'a');
        assert(one[1] == '\0');
        std::cout << "Passed test 2" << std::endl;
    }

    {
        std::cout << "Test 3:" << std::endl;
        //Setup fixture
        String one("Hello my name is");
        //Test
        //Verify
        assert(one[4] == 'o');
        assert(one[16] == '\0');
        std::cout << "Passed test 3" << std::endl;
    }

    {
        std::cout << "Test 4:" << std::endl;
        //Setup fixture
        String one("abcdefghijklmnopqrstuvwxyz");
        String two;
        //Test
        two += one[2];
        two += one[0];
        two += one[1];
        //Verify
        assert(two == "cab");
        assert(one[26] == '\0');
        std::cout << "Passed test 4" << std::endl;
    }

    {
        std::cout << std::endl;
        std::cout << "Finished testing subscript [] operator" << std::endl;
        std::cout << std::endl;
    }
}