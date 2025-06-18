#include <iostream>

int main()
{
    unsigned char char_var {55};
    unsigned char char_var2 {55};
    unsigned char val1 {130};
    unsigned char val2 {131};

    char_var = val1 + val2; // overflow
    char_var2 = val1 - val2; // underflow

    std::cout << "char_var : " << static_cast<int>(char_var) << std::endl;
    std::cout << "char_var2 : " << static_cast<int>(char_var2) << std::endl;

    
    return 0;
}