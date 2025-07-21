#include "iter.cpp"
#include <iostream>
#include <string>
#include <cstring>

template <class T>
void printArray(T &c)
{
    std::cout << c << " ";
}

void Double(int &i)
{
    i*= 2;
}

int main()
{
    int array[] = {1, 2, 4, 8, 9};
    std::cout << "Before: \n";
    iter(array, 5, printArray);
    iter(array, 5, Double);
    std::cout << "\nAfter: \n";
    iter(array, 5, printArray);
    std::cout << "\n";

}