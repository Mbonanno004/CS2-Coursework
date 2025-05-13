// Bigint Test Program
//
// Tests:  int constructor, uses ==
// 
// NEED TO IMPLEMENT
//
#include <iostream> 
#include <cassert>
#include "bigint.hpp"


//===========================================================================
int main () {
    {

        // VERY INCOMPLETE set of tests.


        //------------------------------------------------------
        // Setup fixture
        Bigint left(0);
        Bigint right(0);
        Bigint result;

        // Test 
        result = left + right;
        result = left + 0;
        result = right + 0;

        // Verify (this'll test if the lhs and rhs flexibility of the Bigint)
        std::cout << "Test 1: addition with all 0's" << std::endl;
        std::cout << "Left == "<< left << std::endl;
        std::cout << "Right == "<< right << std::endl;
        std::cout << "Result == " << result << std::endl;
        std::cout << std::endl;

        assert(0      == left);
        assert(right  == 0);
        assert(result == 0);
    }

    {
      //------------------------------------------------------
      // Setup fixture
      Bigint left(1);
      Bigint right(0);
      Bigint result;

      // Test
      result = left + right;

      // Verify
      std::cout << "Test 2: Bigint + Bigint(0)" << std::endl;
      std::cout << "Left == "<< left << std::endl;
      std::cout << "Right == "<< right << std::endl;
      std::cout << "Result == " << result << std::endl;
      std::cout << std::endl;

      assert(left   == 1);
      assert(right  == 0);
      assert(result == 1);
    }
    {
      //------------------------------------------------------
      // Setup fixture
      Bigint left(1);
      Bigint right(1);
      Bigint result;

      // Test
      result = left + right;

      // Verify
      std::cout << "Test 3: Bigint + Bigint" << std::endl;
      std::cout << "Left == "<< left << std::endl;
      std::cout << "Right == "<< right << std::endl;
      std::cout << "Result == " << result << std::endl;
      std::cout << std::endl;

      assert(left   == 1);
      assert(right  == 1);
      assert(result == 2);
    }

    {
      // Setup fixture
      Bigint left(1);
      Bigint result;
      
      // Test (tests adding int)
      result = left + 9; 

      // Verify
      std::cout << "Test 4: adding int literal" << std::endl;
      std::cout << "Left == " << left << std::endl;
      std::cout << "Result == " << result << std::endl;
      std::cout << std::endl;

      assert(left   == 1);
      assert(result == 10);
    }
    
    {
      // Setup fixture
      Bigint left(1);
      Bigint result;
      
      // Test (tests adding char)
      result = left + "9"; 

      // Verify
      std::cout << "Test 5: adding char literal" << std::endl;
      std::cout << "Left == " << left << std::endl;
      std::cout << "Result == " << result << std::endl;
      std::cout << std::endl;

      assert(left   == 1);
      assert(result == 10);
    }

    {
      // Setup fixture
      Bigint left(1);
      Bigint result;
      
      // Test (tests adding char[])
      result = left + "12345"; 

      // Verify
      std::cout << "Test 6: larger char literal" << std::endl;
      std::cout << "Left == " << left << std::endl;
      std::cout << "Result == " << result << std::endl;
      std::cout << std::endl;

      assert(left   == 1);
      assert(result == 12346);
    }

    {
      // Setup fixture
      Bigint left  ("123456789012345678901234567890123456789012345678901234567890"); // 60 digits
      Bigint right ("123456789012345678901234567890"); // 30 digits
      Bigint result;
      Bigint resultCheck;
      
      // Test (adding larger numbers char[])
      result = left + right;
      resultCheck = result;

      // Verify
      std::cout << "Test 7:" << std::endl;
      std::cout << "Left == "<< left << std::endl;
      std::cout << "Right == "<< right << std::endl;
      std::cout << "Result == " << result << std::endl;
      std::cout << std::endl;

      assert(left   == "123456789012345678901234567890123456789012345678901234567890");
      assert(right  == "123456789012345678901234567890");
      assert(result == resultCheck);
    }
    
    //Add test cases as needed.
    
    
    std::cout << "Done with testing addition." << std::endl;
    return 0;
}

