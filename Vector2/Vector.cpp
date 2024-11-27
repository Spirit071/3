#include "Vector.h"
#include <iostream>

Vector::Vector(int n)
    : _size(0), _capacity(n < 2 ? 2 : n), _resizeFactor(n < 2 ? 2 : n) {
    _elements = new int[_capacity];
}

Vector::~Vector() {
    delete[] _elements;
}

int Vector::size() const {
    return _size;
}

int Vector::capacity() const {
    return _capacity;
}

int Vector::resizeFactor() const {
    return _resizeFactor;
}

bool Vector::empty() const {
    return _size == 0;
}

void Vector::reallocate(int newCapacity) {
    int* newElements = new int[newCapacity];
    for (int i = 0; i < _size; ++i) {
        newElements[i] = _elements[i];
    }
    delete[] _elements;
    _elements = newElements;
    _capacity = newCapacity;
}

void Vector::push_back(const int& val) {
    if (_size == _capacity) {
        reallocate(_capacity + _resizeFactor);
    }
    _elements[_size++] = val;
}

int Vector::pop_back() {
    if (empty()) {
        std::cout << "Error: pop from empty vector\n";
        return -9999;
    }
    return _elements[--_size];
}

void Vector::reserve(int n) {
    if (n > _capacity) {
        int newCapacity = _capacity;
        while (newCapacity < n) {
            newCapacity += _resizeFactor;
        }
        reallocate(newCapacity);
    }
}
