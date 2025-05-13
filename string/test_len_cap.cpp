//  String Test Program
//
//  Tests: length() and capacity()
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
        int len = one.length();
        int cap = one.capacity();
        //Test (length and capacity set correctly with 0)
        //Verify
        assert(len == 0);
        assert(cap == 0);
        std::cout << "Passed test 1" << std::endl;
    }

    {
        std::cout << "Test 2:" << std::endl;
        //Setup fixture
        String one('a');
        String two;
        //Test (length and cap aren't affected by adding an empty string)
        one += two;
        //Verify
        assert(one.length() == 1);
        assert(one.capacity() == 1);
        std::cout << "Passed test 2" << std::endl;
    }

    {
        std::cout << "Test 3:" << std::endl;
        //Setup fixture
        String one('a');
        String two('a');
        //Test (length and cap are set properly )
        one += two;
        //Verify
        assert(one.length() == 2);
        assert(one.capacity() == 2);
        std::cout << "Passed test 3" << std::endl;
    }

    {
        std::cout << "Test 4:" << std::endl;
        //Setup fixture
        char arr[100];
        //Test
        for (int i = 0; i < 100; ++i) {
            arr[i] = 'a';
        }
        String one(arr);
        //Verify
        assert(one.length() == 100);
        assert(one.capacity() == 100);
        std::cout << "Passed test 4" << std::endl;
    }

    {
        std::cout << std::endl;
        std::cout << "Finished testing length() and capacity()" << std::endl;
        std::cout << std::endl;
    }
}