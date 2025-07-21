#include "iter.hpp"
#include <cstddef>

template <class T>
void iter(T *array, unsigned long lenght, void (*f)(T &))
{
    for (size_t i = 0; i < lenght; i++)
        f(array[i]);
}