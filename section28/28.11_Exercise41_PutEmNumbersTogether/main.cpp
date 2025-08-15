#include <iostream>
#include "headers.h"

int main()
{
    std::string message = concatenate(11,22ul);
    std::cout << "result : " << message << std::endl;

    std::string message2 = concatenate(22ul,11);
    std::cout << "result : " << message2 << std::endl;

    return 0;
}