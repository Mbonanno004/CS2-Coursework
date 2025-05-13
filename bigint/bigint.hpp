// Michael Bonanno
// Bigint
// CS 23001
// hpp file for project 1
#ifndef BIGINT
#define BIGINT

#include <iostream>
#include <fstream>
#include <cstdlib>

const int CAPACITY = 300;

class Bigint{
public:
           Bigint ();             // initializes bigint to 0, and sets all char characters to 0
           Bigint (int);          // initializes bigint to an int value you provide
           Bigint (const char[]); // initialize bigint to a const char array you provide

           void debugPrint   (std::ostream&) const; // prints each digit of bigint
           Bigint timesDigit (int) const;           // multiplies bigint by int
           Bigint times10    (int) const;           // shifts bigint x amount of digits left 10^int power

           bool   operator==        (const Bigint&) const;          // overloaded comparison
           Bigint operator+         (const Bigint&) const;          // overloaded addition
           Bigint operator*         (const Bigint&) const;          // overloaded multiplication
           int    operator[]        (int) const;                    // overloaded subscript
           
    friend std::ostream& operator<< (std::ostream&, const Bigint&); // overloaded output
    friend std::istream& operator>> (std::istream&, Bigint&);       // overloaded input
private:
    int digits[CAPACITY];
};

bool operator== (const Bigint&, int);
bool operator== (int, const Bigint&);

bool operator== (const Bigint&, const char[]);
bool operator== (const char[], const Bigint&);

#endif
// end of code