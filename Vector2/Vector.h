#ifndef VECTOR_H
#define VECTOR_H

class Vector {
private:
    int* _elements;
    int _size;
    int _capacity;
    int _resizeFactor;

    void reallocate(int newCapacity); // Helper for reallocation

public:
    explicit Vector(int n);
    ~Vector();

    int size() const;
    int capacity() const;
    int resizeFactor() const;
    bool empty() const;

    void push_back(const int& val);
    int pop_back();
    void reserve(int n);
};

#endif // VECTOR_H
