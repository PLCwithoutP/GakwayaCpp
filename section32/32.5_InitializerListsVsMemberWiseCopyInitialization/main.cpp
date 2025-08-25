#include <iostream>
#include "cylinder.h"

int main()
{
    Cylinder c1(10);
    std::cout << "base radius : " << c1.get_base_radius() << std::endl;
    std::cout << "height : " << c1.get_height() << std::endl;
    std::cout << "volume : " << c1.volume() << std::endl;

    return 0;
}