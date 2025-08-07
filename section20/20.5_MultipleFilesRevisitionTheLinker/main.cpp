#include <iostream>
#include "compare.h" // Preprocessor

int main(int argc, char **argv)
{
    int a {52};
    int b {28};

    std::cout << "max between " << a << " and " << b << " is " << max(a,b) << std::endl;
    std::cout << "min between " << a << " and " << b << " is " << min(a,b) << std::endl;
    
    return 0;
}
