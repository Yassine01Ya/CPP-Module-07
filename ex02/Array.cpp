#include "Array.hpp"

template <class T>
const char *Array<T>::IndexOutOfBoundException::what() const throw()
{
    return "Array::IndexOutOfBoundException";
}

template <class T>
Array<T>::Array() : buff(NULL), count(0)
{
}

template <class T>
Array<T>::Array(unsigned int count) : count(count)
{
    buff = new T[count];
    for (size_t i = 0; i < count; i++)
        buff[i] = 0;
}

template <class T>
Array<T>::Array(const Array<T> &arr) : buff(NULL), count(arr.count)
{
    if (count == 0)
        return;
    *this = arr;
}

template <class T>
Array<T> &Array<T>::operator=(const Array<T> &arr)
{
    delete[] buff;
    buff = new T[count];
    for (size_t i = 0; i < count; i++)
        buff[i] = arr.buff[i];
    return *this;
}