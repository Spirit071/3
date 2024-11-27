#include <iostream>
#include "Vector.h"

int main() {
    Vector vec(5);

    std::cout << "Initial size: " << vec.size() << std::endl;
    std::cout << "Initial capacity: " << vec.capacity() << std::endl;
    std::cout << "Resize factor: " << vec.resizeFactor() << std::endl;
    std::cout << "Is empty: " << (vec.empty() ? "Yes" : "No") << std::endl;

    return 0;
}
