#include <iostream>
#include "Vector.h"

int main() {
    Vector vec(3);

    std::cout << "Initial size: " << vec.size() << std::endl;
    std::cout << "Initial capacity: " << vec.capacity() << std::endl;
    std::cout << "Is empty: " << vec.empty() << std::endl;

    vec.push_back(10);
    vec.push_back(20);
    vec.push_back(30);
    std::cout << "After pushing 3 elements, size: " << vec.size() << ", capacity: " << vec.capacity() << std::endl;

    vec.push_back(40);
    std::cout << "After pushing 4th element, size: " << vec.size() << ", capacity: " << vec.capacity() << std::endl;

    int popped = vec.pop_back();
    std::cout << "Popped value: " << popped << ", size: " << vec.size() << std::endl;

    vec.pop_back();
    vec.pop_back();
    vec.pop_back();
    std::cout << "Popping from empty vector: " << vec.pop_back() << std::endl;

    vec.reserve(10);
    std::cout << "After reserving capacity for 10, capacity: " << vec.capacity() << std::endl;

    vec.resize(5);
    std::cout << "After resizing to 5, size: " << vec.size() << ", capacity: " << vec.capacity() << std::endl;

    vec.resize(8, 99);
    std::cout << "After resizing to 8 with value 99, size: " << vec.size() << ", capacity: " << vec.capacity() << std::endl;
    for (int i = 0; i < vec.size(); ++i) {
        std::cout << "Element " << i << ": " << vec.pop_back() << std::endl;
    }

    return 0;
}
