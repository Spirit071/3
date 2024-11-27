#ifndef VECTOR_H
#define VECTOR_H

class Vector {
private:
    int* _elements;
    int _size;
    int _capacity;
    int _resizeFactor;

public:
    explicit Vector(int n);
    ~Vector();

    int size() const;
    int capacity() const;
    int resizeFactor() const;
    bool empty() const;
};

#endif // VECTOR_H
