#include "Array.hpp"
#include "Array.cpp"
#include <iostream>
#include <string>
int main()
{
    try
    {
        Array<int> empty;
        std::cout << "Empty array size: " << empty.size() << std::endl;

        Array<int> ArrayOfInt(5);
        std::cout << "ArrayOfInt size: " << ArrayOfInt.size() << std::endl;
        for (unsigned int i = 0; i < ArrayOfInt.size(); ++i)
            ArrayOfInt[i] = i * 2;
        for (unsigned int i = 0; i < ArrayOfInt.size(); ++i)
            std::cout << "ArrayOfInt[" << i << "] = " << ArrayOfInt[i] << std::endl;

        Array<int> copy(ArrayOfInt);
        std::cout << "Copy ArrayOfInt size: " << copy.size() << std::endl;
        for (unsigned int i = 0; i < copy.size(); ++i)
            std::cout << "copy[" << i << "] = " << copy[i] << std::endl;
        copy[0] = 999;
        std::cout << "After modify Copy[0]. \nArrayOfInt[0] = " << ArrayOfInt[0] << std::endl;
        // std::cout << "After modify Copy ArrayOfInt. \nArrayOfInt[0] = " << copy[0] << std::endl;

        Array<int> secondCopy;
        secondCopy = ArrayOfInt;
        std::cout << "secondCopy array size: " << secondCopy.size() << std::endl;
        secondCopy[1] = 6; 
        std::cout << "After modify secondCopy[1], ArrayOfInt[1] = " << ArrayOfInt[1] << std::endl;
        std::cout << "Testing out-of-bounds access..." << std::endl;
        std::cout << ArrayOfInt[ArrayOfInt.size()] << std::endl;
    }
    catch (const std::exception &e)
    {
        std::cout << "Exception caught: " << e.what() << std::endl;
    }
    return 0;
}