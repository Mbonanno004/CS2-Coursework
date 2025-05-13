// Michael Bonanno
// Main file for milestone 2 testing
/* This program openns a text file, extracts two numbers 
turns them into bigints, and adds them and returns the result
along with the turn numbers it read in.*/


#include "bigint.hpp"

int main() {
    std::ifstream in;            // Define input stream
    in.open("data1-1.txt");      // Open a file
    if(!in.is_open()) {          // Make sure file opened correctly
        std::cerr << "File not found: data1-1.txt" << std::endl;
        exit(1);
    }

    Bigint one;
    Bigint two;
    Bigint result;

    while(!in.eof()) {
        in >> one;
        in >> two;
        result = one + two;
        std::cout << "Bigint 1: " << one << std::endl;
        std::cout << "Bigint 2: " << two << std::endl;
        std::cout << "1 + 2 Result = " << result << std::endl;
        std::cout << std::endl;
    }  
    in.close();
    return 0;
}