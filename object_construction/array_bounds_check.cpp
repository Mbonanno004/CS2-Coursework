// 
// Kent State University
// CS 23001 - J. Maletic
//
// Lab on dynamic memory
//
// Memory allocation and array bounds checking
//
// C/C++ does not check array bounds, so accessing an element of an
//    array outside of its defined size results in Undefined Behavior
//
// TO COMPILE: clang++ -Wall array_bounds_check.cpp -o bounds_check
// TO RUN: ./bounds_check
//           Then enter a postivie integer value at the prompt
//
// Instructions:
//   Read the code.
//   Run the program on wasp/hornet (multiple) times.
//   Try these values of 10, 16, 32, 33, 40
//
//   Read over the output each time.
//
//      What is wrong with the output?
// the char array when called to the heap automatically reserves 32 spots in memory.
// when you type in 32, 33, and 40 for n you don't change how much is reserved so you actually begin to reach the str2 on the heap.
// and begin writing to it, since you go outside of the memory reserved for str1.
//
//      What is wrong with the code?
// The sizes of both the new arrays str1 and str2 are both set before any n value is read in. 
// so if the value n read in is any greater than 32, you'll begin to write onto the memory reserved for str2 on the heap.
//
//      Why is no error raised?
// The array's are stored on the heap, because of how c++ is setup the compiler won't do any optimization on the heap.
// So it can't give any errors in that case.
//
//      How many bytes are between the start of str1 and str2?
// There would be 4 or 8 bytes between str1 and str2, when initially called since they are just pointers.
// the 4 or 8 would depend on the operating system. 64 or 32 bit.
//
//      How can you test for this logical error?
// You can run valgrind to check if there are any memory problems in your program. Specifically for this program though
// doing some type of test on the bounds of the new arrays you make could tell you if you'll run into an error.
//
//      How can you prevent this type of error?
// By checking bounds and keeping within those bounds in your code
//
//      Include the delete[] at the end and recompile, what changes?
// At a certain size n you gett a message at the end of the code saying free(): invalid size Aborted (core dumped).

#include <iostream>


int main () {
    char *str1 = new char[5];     //Allocate two arrays on the heap
    char *str2 = new char[20];
    int n=0;

    std::cout  << "str1->char[5]" << std::endl;
    std::cout  << "str2->char[20]" << std::endl;
    std::cout  << "Enter positive integer value: ";  // n > 0
    std::cin >> n;

    std::cout  << "Write to array str1:" << std::endl;
    for (int i = 0; i < n; ++i) {   //Write to str1[0...n-1]
        str1[i] = 'X';
        std::cout << "str1[" << i << "] = 'X'" << std::endl;
    }

    std::cout  << "Contents of array str1:" << std::endl;
    for (int i = 0; i < n; ++i) {   //Print str1[0...n-1]
        std::cout << "str1[" << i << "] == " << "|" <<  str1[i] << "|" << std::endl;
    }

    std::cout  << "Contents of array str2:" << std::endl;
    for (int i = 0; i < 20; ++i) {    //Print str2[0...19]
        std::cout << "str2[" << i << "] == " << "|" <<  str2[i] << "|" << std::endl;
    }

    delete[] str1;  //Try with and without deletes
    delete[] str2;

    return 0;
}

