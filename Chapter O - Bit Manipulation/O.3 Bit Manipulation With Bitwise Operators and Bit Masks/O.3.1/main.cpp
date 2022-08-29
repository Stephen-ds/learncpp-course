//Do not use std::bitset in this quiz.We’re only using std::bitset for printing.

#include <bitset>
#include <cstdint>
#include <iostream>

int main()
{
    constexpr std::uint8_t option_viewed{ 0x01 };
    constexpr std::uint8_t option_edited{ 0x02 };
    constexpr std::uint8_t option_favorited{ 0x04 };
    constexpr std::uint8_t option_shared{ 0x08 };
    constexpr std::uint8_t option_deleted{ 0x10 };

    std::uint8_t myArticleFlags{ option_favorited };

    //a) Write a line of code to set the article as viewed.
    myArticleFlags |= option_viewed;

    //b) Write a line of code to check if the article was deleted.
    if (myArticleFlags & option_deleted)
        std::cout << "Article was deleted";
    else
        std::cout << "Article was not deleted";

    //c) Write a line of code to clear the article as a favorite.
    myArticleFlags &= ~option_favorited;

    //d) Extra credit: why are the following two lines identical?
    //myflags &= ~(option4 | option5);
    //myflags &= ~option4 & ~option5;

    //Answer: De Morgan's laws.

    std::cout << std::bitset<8>{ myArticleFlags } << '\n';

    return 0;
}