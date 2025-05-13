//  String Test Program
//
//  Tests: == operator, uses <<
//  string vs. string, string vs. char, string vs. char[] 
//
//  
#include <iostream>
#include <cassert>
#include "string.hpp"

int main () {
    {   
        std::cout << "Test 1:" << std::endl;
        // Setup fixture
        String one;
        String two;

        // Test empty strings

        // Verify
        assert(one == two);
        std::cout << "one: "<< one << " == two: " << two << std::endl;
        assert(two == one);
        std::cout << "two: "<< two << " == one: " << one << std::endl;
        std::cout << std::endl;
    }

    {   
        std::cout << "Test 2:" << std::endl;
        // Setup fixture
        String text("pickled peppers");
        String one(text);
        String two(text);

        // Test (string vs. string)

        // Verify
        assert(one == two);
        std::cout << "one: "<< one << " == two: " << two << std::endl;
        assert(two == one);
        std::cout << "two: "<< two << " == one: " << one << std::endl;
        std::cout << std::endl;
    }

    {
        std::cout << "Test 3:" << std::endl;
        // Setup fixture
        char test = 'a';
        String one(test);

        // Test (string vs. char)
        
        // Verify
        assert(one == test);
        std::cout << "passes string == char" << std::endl;
        assert(test == one);
        std::cout << "passes char == string" << std::endl;
        std::cout << std::endl;
    }

    {   
        std::cout << "Test 4:" << std::endl;
        // Setup fixture
        char test[] = "this is a test";
        String one(test);

        // Test (string vs. char[])

        // Verify
        assert(one == test);
        std::cout << "passes string == char[]" << std::endl;
        assert(test == one);
        std::cout << "passes char[] == string" << std::endl;
        std::cout << std::endl;
    }

    {
        std::cout << "Finished testing overloaded == operator" << std::endl;
        std::cout << std::endl;
    }
}