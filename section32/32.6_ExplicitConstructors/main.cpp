#include <iostream>
#include "square.h"

// Is square1 > to square2 ? true or false
bool compare(const Square& square1, const Square& square2)
{
    return (square1.surface() > square2.surface()) ? true : false;
}


int main()
{
    Square s1(100.0);
    Square s2(20.0);

    std::cout << std::boolalpha;
    std::cout << "s1 > s2 : " << compare(s1,s2) << std::endl; // true

/*     // Allows implicit conversion and compiles fine
    // if constructor is not marked as explicit
    std::cout << "s1 > 44.5 : " << compare(s1,44.5) << std::endl; // true */

    // Compiler error because constructor is marked as explicit
    //std::cout << "s1 > 44.5 : " << compare(s1,44.5) << std::endl;

    return 0;
}