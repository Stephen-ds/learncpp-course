//Write a program that asks the user to enter two integers, one named smaller,
//the other named larger.If the user enters a smaller value for the second
//integer, use a block and a temporary variable to swap the smaller and larger
//values.Then print the values of the smallerand larger variables.Add comments
//to your code indicating where each variable dies.Note: When you print the
//values, smaller should hold the smaller input and larger the larger input, no 
//matter which order they were entered in.

#include <iostream>

int getUserInt() {
    
    int x{};
    std::cin >> x;
    
    return x;
} // getUserInt::x destroyed

int main()
{
    std::cout << "Enter an integer: ";
    int smaller{ getUserInt() };
    std::cout << "Enter a larger integer: ";
    int larger{ getUserInt() };

    if (smaller > larger)
    {
        int temp{ smaller };
        smaller = larger;
        larger = temp;

        
    } // temp destroyed

    std::cout << "The smaller value is " << smaller << '\n';
    std::cout << "The larger value is " << larger << '\n';

    return 0;
} // smaller and larger destroyed

//The program output should match the following:
// 
//Enter an integer : 4
//Enter a larger integer : 2
//Swapping the values
//The smaller value is 2
//The larger value is 4