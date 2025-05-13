//  Stack class test program
//
//  Tests: swap() 
//

#include "stack.hpp"
#include "../string/string.hpp"
#include <cassert>
#include <iostream>

//===========================================================================
int main ()
{
    /* (used to make sure top() doesn't work with an empty stack
    {
        //------------------------------------------------------
        // SETUP FIXTURE
        stack<String>  x;
        stack<String>  y;
        // TEST
        x.swap(y);
        // VERIFY
        assert(x.top() == y.top());
        assert(x.empty() == true);
        assert(y.empty() == true);
    }
    */

    {
        //------------------------------------------------------
        // SETUP FIXTURE
        stack<String>  x;
        stack<String>  y;
        String test1('a');
        String test2('b');
        x.push(test1);
        y.push(test2);
        // TEST
        x.swap(y);
        // VERIFY
        assert(x.top() == test2);
        assert(y.top() == test1);
    }
    
    std::cout << "Done testing swap()." << std::endl;
    return 0;
}