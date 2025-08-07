#include <iostream>
#include "palindrome.h"

int main(int argc, char **argv)
{
    std::cout << is_palindrome(1234321) << std::endl;
    std::cout << is_palindrome(12321354321) << std::endl;    
    
    return 0;
}
