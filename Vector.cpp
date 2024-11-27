#include "Vector.h"

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
