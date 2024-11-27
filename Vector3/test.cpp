#include <iostream>
#include "Vector.h"

int main() {
    // Test 1: Create a vector and push some values
    Vector v(5);  // Create vector with initial capacity of 5
    v.push_back(10);
    v.push_back(20);
    v.push_back(30);
    v.push_back(40);
    v.push_back(50);

    std::cout << "Test 1: Valid indices" << std::endl;
    // Accessing valid indices
    std::cout << "v[0] = " << v[0] << std::endl;  // Expected output: 10
    std::cout << "v[1] = " << v[1] << std::endl;  // Expected output: 20
    std::cout << "v[2] = " << v[2] << std::endl;  // Expected output: 30
    std::cout << "v[3] = " << v[3] << std::endl;  // Expected output: 40
    std::cout << "v[4] = " << v[4] << std::endl;  // Expected output: 50

    std::cout << std::endl;

    // Test 2: Access invalid index
    std::cout << "Test 2: Invalid index (-1)" << std::endl;
    std::cout << "v[-1] = " << v[-1] << std::endl;  // Should print an error message and return the first element (10)
    
    std::cout << std::endl;

    std::cout << "Test 3: Invalid index (6)" << std::endl;
    std::cout << "v[6] = " << v[6] << std::endl;  // Should print an error message and return the first element (10)

    std::cout << std::endl;

    // Test 4: Check that the size remains unaffected by invalid access
    std::cout << "Test 4: Size check after invalid access" << std::endl;
    std::cout << "Vector size = " << v.size() << std::endl;  // Expected output: 5

    std::cout << std::endl;

    // Test 5: Resize vector and check new element
    v.resize(7, 60);  // Resize to 7, initializing new elements with value 60
    std::cout << "Test 5: After resizing" << std::endl;
    std::cout << "v[5] = " << v[5] << std::endl;  // Expected output: 60
    std::cout << "v[6] = " << v[6] << std::endl;  // Expected output: 60

    std::cout << std::endl;

    // Test 6: Pop an element and check size
    std::cout << "Test 6: After pop_back" << std::endl;
    v.pop_back();  // Should remove the last element
    std::cout << "Vector size after pop_back = " << v.size() << std::endl;  // Expected output: 6
    std::cout << "v[5] = " << v[5] << std::endl;  // Expected output: 60 (since pop_back removes the last element)

    std::cout << std::endl;

    // Test 7: Check empty state
    v.pop_back();  // Remove another element
    v.pop_back();  // Remove another element
    v.pop_back();  // Remove another element
    v.pop_back();  // Remove another element
    v.pop_back();  // Remove another element

    std::cout << "Test 7: After multiple pops" << std::endl;
    std::cout << "Is the vector empty? " << (v.empty() ? "Yes" : "No") << std::endl;  // Expected output: Yes

    return 0;
}
