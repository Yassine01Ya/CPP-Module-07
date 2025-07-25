#include "whatever.hpp"

template <class T>
void swap(T &a, T &b)
{
    T tmp = a;
    a = b;
    b = tmp;
}

template <class T>
T &max(T &a, T &b)
{
    if (a > b)
        return a;
    return b;
}

template <class T>
T &min(T &a, T &b)
{
    if (a < b)
        return a;
    return b;
}
