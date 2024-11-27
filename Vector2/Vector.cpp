#include "Vector.h"
#include <iostream>
#include <stdexcept>

// Constructor
Vector::Vector(int n)
    : _size(0), _capacity(n < 2 ? 2 : n), _resizeFactor(n < 2 ? 2 : n) {
    _elements = new int[_capacity];
}

// Copy Constructor
Vector::Vector(const Vector& other)
    : _size(other._size), _capacity(other._capacity), _resizeFactor(other._resizeFactor) {
    _elements = new int[_capacity];
    for (int i = 0; i < _size; ++i) {
        _elements[i] = other._elements[i];
    }
}

// Copy Assignment Operator
Vector& Vector::operator=(const Vector& other) {
    if (this != &other) {
        delete[] _elements; // Free existing memory
        _size = other._size;
        _capacity = other._capacity;
        _resizeFactor = other._resizeFactor;

        _elements = new int[_capacity];
        for (int i = 0; i < _size; ++i) {
            _elements[i] = other._elements[i];
        }
    }
    return *this;
}

// Destructor
Vector::~Vector() {
    delete[] _elements;
}

// Get size
int Vector::size() const {
    return _size;
}

// Get capacity
int Vector::capacity() const {
    return _capacity;
}

// Get resize factor
int Vector::resizeFactor() const {
    return _resizeFactor;
}

// Check if vector is empty
bool Vector::empty() const {
    return _size == 0;
}

// Push back a value
void Vector::push_back(const int& val) {
    if (_size == _capacity) {
        reallocate(_capacity + _resizeFactor); // Expand capacity if needed
    }
    _elements[_size++] = val;
}

// Pop back a value
int Vector::pop_back() {
    if (empty()) {
        std::cerr << "Error from pop_back: vector is empty" << std::endl;
        return -9999; // Error code
    }
    return _elements[--_size];
}

// Reserve capacity
void Vector::reserve(int n) {
    if (n > _capacity) {
        int newCapacity = _capacity;
        while (newCapacity < n) {
            newCapacity += _resizeFactor;
        }
        reallocate(newCapacity);
    }
}

// Resize without initializing new elements
void Vector::resize(int n) {
    if (n > _capacity) {
        reserve(n);
    }
    _size = n; // Truncate or expand accessible size
}

// Resize and initialize new elements with a value
void Vector::resize(int n, const int& val) {
    if (n > _capacity) {
        reserve(n);
    }
    if (n > _size) {
        for (int i = _size; i < n; ++i) {
            _elements[i] = val;
        }
    }
    _size = n;
}

// Reallocate memory
void Vector::reallocate(int newCapacity) {
    int* newElements = new int[newCapacity];
    for (int i = 0; i < _size; ++i) {
        newElements[i] = _elements[i];
    }
    delete[] _elements; // Free old memory
    _elements = newElements;
    _capacity = newCapacity;
}
