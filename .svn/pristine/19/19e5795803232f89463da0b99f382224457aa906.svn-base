//  String Test Program
//
//  Tests: findstr(), uses == and capacity()
//
//  
#include <iostream>
#include <cassert>
#include "string.hpp"

int main() {
    {
        std::cout << "Test 1:" << std::endl;
        //Setup fixture
        String one("Hello my name is Michael Bonanno");
        String two("name");
        //Test
        int test = one.findstr(0, two);
        //Verify
        assert(test == 9);
        std::cout << "Passed test 1" << std::endl;
    }

    {
        std::cout << "Test 2:" << std::endl;
        //Setup fixture
        String one;
        String two("name");
        //Test
        int test = one.findstr(0, two);
        //Verify
        assert(test == -1);
        std::cout << "Passed test 2" << std::endl;
    }

    {
        std::cout << "Test 3:" << std::endl;
        //Setup fixture
        String one;
        String two('b');
        for (int i = 0; i < one.capacity(); ++i) {
            one[i] = 'a';
        }
        //Test
        int test = one.findstr(0, two);
        //Verify
        assert(test == -1);
        std::cout << "Passed test 3" << std::endl;
    }

    {
        std::cout << std::endl;
        std::cout << "Finished testing findstr()" << std::endl;
        std::cout << std::endl;
    }
}