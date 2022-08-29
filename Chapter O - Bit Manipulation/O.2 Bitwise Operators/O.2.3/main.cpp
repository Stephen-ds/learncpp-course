//Extra credit : Redo quiz #2 but don’t use the test and set functions.

#include <bitset>
#include <iostream>

//The following code should execute:

//"rotl" stands for "rotate left"
std::bitset<4> rotl(std::bitset<4> bits)
{
	// Your code here
	return (bits << 1) | (bits >> 3);

}

int main()
{
	std::bitset<4> bits1{ 0b0001 };
	std::cout << rotl(bits1) << '\n';

	std::bitset<4> bits2{ 0b1001 };
	std::cout << rotl(bits2) << '\n';

	return 0;
}

//The output should match:
//0010
//0011