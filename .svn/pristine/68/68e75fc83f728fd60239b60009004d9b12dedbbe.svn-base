//  Stack class test program
//
//  Tests: top()
//

#include "stack.hpp"
#include "../string/string.hpp"
#include <cassert>
#include <iostream>

//===========================================================================
int main ()
{
    {
        //------------------------------------------------------
        // SETUP FIXTURE
        stack<String> x;
        String test;
        // TEST
        x.push(test);
        // VERIFY
        assert(x.top() == String());
    }
    
    {
        //------------------------------------------------------
        // SETUP FIXTURE
        stack<String> x;
        String test("word");
        // TEST
        x.push(test);
        // VERIFY
        assert(x.top() == test);
    }

    {
        //------------------------------------------------------
        // SETUP FIXTURE
        stack<String> x;
        String test("word");
        String test2("another word");
        // TEST
        x.push(test);
        x.push(test2);
        // VERIFY
        assert(x.top() == test2);
    }
    
    std::cout << "Done testing top()." << std::endl;
    return 0;
}