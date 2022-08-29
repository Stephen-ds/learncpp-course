//Write a program that asks the user to input a number between 0 and 255.
//Print this number as an 8-bit binary number (of the form #### ####).
//Don’t use any bitwise operators. Don’t use std::bitset.

#include <iostream>

int getUserNumber()
{
    std::cout << "Enter an integer between 0 and 255: ";
    int x{};
    std::cin >> x;

    return x;
}
// pow is a power of 2
int decrementBit(int x, int pow)
{
    std::cout << '1';
    return x - pow;
}

int compareBit(int x, int pow)
{
    if (x >= pow)
        return decrementBit(x, pow);
   
    std::cout << '0';
    return x;
}

int main()
{
    int x{ getUserNumber() };

    x = compareBit(x, 128);
    x = compareBit(x, 64);
    x = compareBit(x, 32);
    x = compareBit(x, 16);

    std::cout << ' ';

    x = compareBit(x, 8);
    x = compareBit(x, 4);
    x = compareBit(x, 2);
    x = compareBit(x, 1);

    return 0;
}