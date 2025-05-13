//  String Test Program
//
//  Tests: split() function
//
//  
#include <iostream>
#include <cassert>
#include <vector>
#include "string.hpp"

int main() {
    
    {
        std::cout << "Test 1:" << std::endl;
        //Setup fixture
        std::vector<String> test;
        String one("abc def ghi");
        //Test
        test = one.split(' ');
        //Verify
        assert(test.size() == 3);
        assert(test[0] == "abc");
        assert(test[1] == "def");
        assert(test[2] == "ghi");
        std::cout << "Passed test 1" << std::endl;
    }

    {
        std::cout << "Test 2:" << std::endl;
        //Setup fixture
        std::vector<String> test;
        String one("-a--b-");
        //Test
        test = one.split('-');
        //Verify
        assert(test.size() == 5);
        assert(test[0] == "");
        assert(test[1] == "a");
        assert(test[2] == "");
        assert(test[3] == "b");
        assert(test[4] == "");
        std::cout << "Passed test 2" << std::endl;
    }

    {
        std::cout << "Test 3:" << std::endl;
        //Setup fixture
        std::vector<String> test;
        String one("abc");
        //Test
        test = one.split(' ');
        //Verify
        assert(test.size() == 1);
        assert(test[0] == "abc");
        std::cout << "Passed test 3" << std::endl;
    }

    {
       std::cout << "Test 4:" << std::endl;
       //Setup fixture
       std::vector<String> test;
       String one("");
       //Test
       test = one.split(' ');
       //Verify
       assert(test.size() == 1);
        std::cout << "Passed test 4" << std::endl;
    }

    {
        std::cout << "Test 5:" << std::endl;
        //Setup fixture
        std::vector<String> test;
        String one("abc ");
        //Test
        test = one.split(' ');
        //Verify
        assert(test.size() == 2);
        assert(test[0] == "abc");
        assert(test[1] == "");
        std::cout << "Passed test 5" << std::endl;
    }

    {
        std::cout << std::endl;
        std::cout << "Finished testing split()" << std::endl;
        std::cout << std::endl;
    }
}