#include <iostream>
#include "Vector.h"

int main() {
    Vector vec(3);

    vec.push_back(10);
    vec.push_back(20);
    vec.push_back(30);
    vec.push_back(40); // Forces reallocation

    std::cout << "Size: " << vec.size() << ", Capacity: " << vec.capacity() << std::endl;

    std::cout << "Popped: " << vec.pop_back() << std::endl;
    std::cout << "Size after pop: " << vec.size() << std::endl;

    vec.reserve(10);
    std::cout << "Capacity after reserve: " << vec.capacity() << std::endl;

    return 0;
}
