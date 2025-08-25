#include <iostream>
#include "exercise.h"


int main()
{
    Box b1(3,3,10);
    std::cout << "volume : " << b1.volume() << std::endl;
    return 0;
}