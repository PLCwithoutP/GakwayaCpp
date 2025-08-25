#include <iostream>
#include "cylinder.h"

int main()
{
    Cylinder c1(10,10);
    std::cout << "volume : " << c1.volume() << std::endl;

    Cylinder c2(10);
    std::cout << "volume with default paramater : " << c2.volume() << std::endl;

    Cylinder c3;
    std::cout << "volume with two default parameters : " << c3.volume() << std::endl;
    return 0;
}