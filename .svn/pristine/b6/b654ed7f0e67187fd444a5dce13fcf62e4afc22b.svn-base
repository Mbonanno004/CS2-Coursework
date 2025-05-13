// Michael Bonanno
// Recursion lab
// fibonacci.cpp

#include <iostream>

int rec(int n);

int tail_rec(int n, int a, int b);

int main() {
    // Regular Recursion
    std::cout << "Regular Recursion" << std::endl;
    std::cout << rec(0) << " ";
    std::cout << rec(1) << " ";
    std::cout << rec(2) << " ";
    std::cout << rec(3) << " ";
    std::cout << rec(4) << " ";
    std::cout << rec(5) << " ";
    std::cout << rec(6) << " ";
    std::cout << rec(7) << " ";
    std::cout << rec(8) << " ";
    std::cout << rec(9) << " ";
    std::cout << rec(10) << " ";
    std::cout << std::endl;

    // Tail Recursion
    std::cout << "Tail Recursion" << std::endl;
    std::cout << tail_rec(0, 0, 1) << " ";
    std::cout << tail_rec(1, 0, 1) << " ";
    std::cout << tail_rec(2, 0, 1) << " ";
    std::cout << tail_rec(3, 0, 1) << " ";
    std::cout << tail_rec(4, 0, 1) << " ";
    std::cout << tail_rec(5, 0, 1) << " ";
    std::cout << tail_rec(6, 0, 1) << " ";
    std::cout << tail_rec(7, 0, 1) << " ";
    std::cout << tail_rec(8, 0, 1) << " ";
    std::cout << tail_rec(9, 0, 1) << " ";
    std::cout << tail_rec(10, 0, 1) << " ";
    std::cout << std::endl;

    return 0;
}

int rec(int n) {
    if (n <= 1) {
        return n;
    } else {
        return rec(n - 1) + rec(n - 2);
    }
}

int tail_rec(int n, int a, int b) {
    if (n == 0) return a;
    if (n == 1) return b;
    return tail_rec(n - 1, b, a + b);
    // in recursion sets a to b and b to a + b
}