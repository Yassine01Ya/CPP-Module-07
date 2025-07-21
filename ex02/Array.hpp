#pragma once 
#include <cstddef>
#include <exception>

template <class T>
class Array
{
public:
class IndexOutOfBoundException : public std::exception
{
    public:
    const char* what() const throw();
};
private:
T *buff;
unsigned int count;
public:
    Array();
    Array(unsigned int cout);
    Array(const Array<T> &arr);
    Array<T> &operator=(const Array<T> &arr);
    ~Array();
    size_t size() const;
    T &operator[](unsigned int index);
};

