//  String Test Program
//
//  Tests: substr()
//
//  
#include <iostream>
#include <cassert>
#include "string.hpp"

int main() {

    {
        std::cout << "Test 1:" << std::endl;
        //Setup fixture
        String one("Hi my name is Michael Bonanno");
        //Test
        String sub = one.substr(6, 9);
        //Verify
        std::cout << sub << std::endl;
        assert(sub == "name");
        std::cout << "Passed test 1" << std::endl;
    }

    {
        std::cout << "Test 2:" << std::endl;
        //Setup fixture
        String one("abcdefg");
        //Test
        String sub = one.substr(-4, 5);
        //Verify
        assert(sub == String());
        std::cout << "Passed test 2" << std::endl;
    }

    {
        std::cout << "Test 3:" << std::endl;
        //Setup fixture
        String one("abcdefg");
        //Test
        String sub = one.substr(0, 3000);
        //Verify
        assert(sub == "abcdefg");
        std::cout << "Passed test 3" << std::endl;
    }

    {
        std::cout << "Test 4:" << std::endl;
        //Setup fixture
        String one;
        //Test
        String sub = one.substr(6, 9);
        //Verify
        std::cout << sub << std::endl;
        assert(sub == String());
        std::cout << "Passed test 4" << std::endl;
    }

    {
        std::cout << "Test 5:" << std::endl;
        //Setup fixture
        String one("My name is Michael Bonanno. I am writing this long string to test my substr function for the string project.");
        //Test
        String sub = one.substr(0, one.length() - 1);
        //Verify
        std::cout << sub << std::endl;
        assert(sub == one);
        std::cout << "Passed test 5" << std::endl;
    }

    {
        std::cout << "Test 6:" << std::endl;
        //Setup fixture
        String one("purple");
        //Test
        String sub = one.substr(7, 12);
        //Verify
        assert(sub == String());
        std::cout << "Passed test 6" << std::endl;
    }

    {
        std::cout << std::endl;
        std::cout << "Finished testing substr()" << std::endl;
        std::cout << std::endl;
    }
}