#ifndef VECTOR_H
#define VECTOR_H

class Vector {
private:
    int* _elements;
    int _size;
    int _capacity;
    int _resizeFactor;

    void reallocate(int newCapacity);

public:
    explicit Vector(int n);
    Vector(const Vector& other);              // Copy Constructor
    Vector& operator=(const Vector& other);   // Copy Assignment Operator
    ~Vector();                                // Destructor

    int size() const;
    int capacity() const;
    int resizeFactor() const;
    bool empty() const;

    void push_back(const int& val);
    int pop_back();
    void reserve(int n);
    void resize(int n);
    void resize(int n, const int& val);
};

#endif // VECTOR_H
