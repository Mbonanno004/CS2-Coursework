///////////////////////////////////////////////////////////////////////////
//  Michael Bonanno
//  bug1.cpp
//  CS 23001
// 
//   Created by Maletic on 9/9/13.
//   Updated: 9/16/2024
//
//   This code prints out a sets of random numbers, no duplicates per set.
//
//   There is a bug in this code.  It compiles but seems to get into an infinit loop.
//   Find the bug.
//
//   Step 1: Compile the program clang++ -Wall bug1.cpp -o buggy
//           Run it ./buggy  ctrl c to break it.
//   Step 2: Read over the code and figure out what it does a bit.
//           Insert print statements into the different loops to 
//           determine where the infinite loop is occurring.
//           Start in the main and work down the call stack.
//   Step 3: Once you figure out what loop is the problem try to 
//           figure out what it is supposed to do and why its broken.
//   Step 4: Make the fix and compile/run the program
//   Step 5: Does it work?  

/* Yes the program does work. All bugs came from the setToRandom function
and how it implemented the inArray function. Firstly it incorrectly filled
in the paramaters of inArray. Then also had the function in an if statement
that if true meaning the random number was in the array it would execute the if.
However we wanted the program needed the if to execute when the random number
was not found in the array. That way the number could then be added. Also
there was a meaningless return in the void function setToRandom.*/


#include <iostream>
#include <cstdlib>

const int MAX             = 6;
const int SIZE_OF_SAMPLES = 3;
const int REP             = 5;
const int SEED            = 9809;

bool inArray     (int[], int, int  );
void setToRandom (int,   int, int[]);

int main() {
    int arr[SIZE_OF_SAMPLES]; // arr[3]
    srand(SEED);  //Seed random number generator.

    for (int i = 0; i < REP; i++) {
        setToRandom(MAX, SIZE_OF_SAMPLES, arr);
        for(int j = 0; j < SIZE_OF_SAMPLES; j++) {
            std::cout << arr[j] << " "; // change the loop to now use j instead of i.
        }
        std::cout << std::endl;
    }
    return 0;
}

// result[n] will be initialized with a set of random numbers, no duplicates
//           Values between 0 and max.
// 
void setToRandom(int max, int n, int result[]) {
    int cntr = 0, r;

    while (cntr < n) {
        r = rand();  //Get random number
        r = r % (max + 1);
        if (!(inArray(result, n, r))) {             // Here was your error for the most part. the if previously was set to true
            result[cntr] = r;                       // if the number was in the array. However we wanted it set to false if
            cntr++;                                 // it found it in the array. Simply adding the ! symbol solved it.
        }                                           // Also making sure variable n which is the paramater for the size of the array
    }                                               // was used as the second. And removing the return at the end.
}

// Check if x is included in array[] of arrSize.
// Returns: 1 if x is a member
//           0 if x is not a member
// 
bool inArray(int array[], int arrSize, int x) { // returns true if in array
    for (int i = 0; i < arrSize; ++i) {
        if (array[i] == x) {
            return true;
        }
    }
    return false;
}
