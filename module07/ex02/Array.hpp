#ifndef ARRAY_HPP
#define ARRAY_HPP
#include <exception>
#include <iostream>

template <typename T>
class Array
{
private:
    size_t _size;
    T *_array;

public:
    Array() : _size(0), _array(NULL) {}

    Array(unsigned int n) : _size(n)
    {
        _array = new T[n];
        memset(_array, 0, sizeof(T) * _size);
    }

    Array(Array const &obj): _array(NULL)
    {
        *this = obj;
    }

    Array &operator=(Array const &obj)
    {
        if (this != &obj)
        {
            delete [] _array;
            _size = obj._size;
            _array = new T[_size];
            std::copy(obj._array, obj._array + _size, _array);
        }
        return (*this);
    }

    T &operator[] (size_t index)
    {
        if (index >= _size)
        {
            throw std::runtime_error( "invalid index" );
        }
        return (_array[index]);
    }

    ~Array()
    {
        delete [] _array;
    }

    size_t size() const {
        return (_size);
    }
};

#endif