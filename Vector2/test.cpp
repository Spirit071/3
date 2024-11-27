#include <iostream>
#include "Vector.h"

int main() {
    Vector vec(3);

    vec.push_back(1);
    vec.push_back(2);
    vec.push_back(3);

    std::cout << "Before resize: Size = " << vec.size() << ", Capacity = " << vec.capacity() << std::endl;

    vec.resize(5);
    std::cout << "After resize (5): Size = " << vec.size() << ", Capacity = " << vec.capacity() << std::endl;

    vec.resize(7, 99);
    std::cout << "After resize (7, 99): Size = " << vec.size() << ", Capacity = " << vec.capacity() << std::endl;

    vec.resize(2);
    std::cout << "After resize (2): Size = " << vec.size() << ", Capacity = " << vec.capacity() << std::endl;

    return 0;
}
