// .cpp for Object Creation and Destruction Lab

#include "object_construction.hpp"

test::test(char arr[]) {
    int i = 0;
    while (arr[i] != '\0') {
        ++i;
    }

    size = i;
    ptr = new char[size];

    for (int i = 0; i < size; ++i) {
        ptr[i] = arr[i];
    }
    ptr[size] = '\0';

    std::cout << "Called default constructor" << std::endl;
}

test::test(const test& original) {
    size = original.size;
    ptr = new char[size];
    for (int i = 0; i < size - 1; ++i) {
        ptr[i] = original.ptr[i];
    }

    ptr[size] = '\0';
    std::cout << "Called copy constructor" << std::endl;
}

void test::swap(test& rhs) {
    char *temp = ptr;
    ptr = rhs.ptr;
    rhs.ptr = temp;
    int tp = size;
    size = rhs.size;
    rhs.size = tp;
}