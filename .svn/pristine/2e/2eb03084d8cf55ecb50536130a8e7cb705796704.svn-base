//  String Test Program
//
//  Tests: findch()
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
        //Test (looking for null in empty string)
        int test = one.findch(0, 'a');
        //Verify
        std::cout << "value of test == " << test << std::endl;
        std::cout << "Passed test 1" << std::endl;
    }

    {
        std::cout << "Test 2:" << std::endl;
        //Setup fixture
        String one('a');
        //Test (finding one character is a one character string)
        int test = one.findch(0, 'a');
        //Verify
        std::cout << "value of test == " << test << std::endl;
        assert(test == 0);
        std::cout << "Passed test 2" << std::endl;
    }

    {
        std::cout << "Test 3:" << std::endl;
        //Setup fixture
        String one("abcde");
        //Test
        int test1 = one.findch(0, 'a');
        int test2 = one.findch(0, 'b');
        int test3 = one.findch(0, 'c');
        int test4 = one.findch(0, 'd');
        int test5 = one.findch(0, 'e');
        //Verify
        assert(test1 == 0);
        assert(test2 == 1);
        assert(test3 == 2);
        assert(test4 == 3);
        assert(test5 == 4);
        std::cout << "Passed test 3" << std::endl;
    }

    {
        std::cout << "Test 4:" << std::endl;
        //Setup fixture
        String one("abcde");
        //Test
        int test1 = one.findch(3, 'e');
        //Verify
        assert(test1 == 4);
        std::cout << "Passed test 4" << std::endl;
    }

    {
        std::cout << "Test 5:" << std::endl;
        //Setup fixture
        String one("abcde fghij klmno pqrst uvwxy abcde fghij klmno pqrst uvwxy abcde fghij klmno pqrst uvwxy abcde fghij klmno pqrst uvwxy abcde fghij klmno pqrst uvwxy");
        String two;
        two += one;
        one += two;
        //Test (looking for the final character in a string)
        std::cout << one.length() << std::endl;
        int test1 = one.findch(30, 'y');
        //Verify
        std::cout << "value of test == " << test1 << std::endl;
        assert(test1 == one.findch(30, 'y'));
        std::cout << "Passed test 5" << std::endl;
    }

    {
        std::cout << std::endl;
        std::cout << "Finished testing findch()" << std::endl;
        std::cout << std::endl;
    }
}