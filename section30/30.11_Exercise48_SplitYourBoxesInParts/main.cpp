#include <iostream>
#include "box.h"


int main()
{
    Box box(10.1,20.4,30.3);
    std::cout << "base area : " << box.base_area() << std::endl;
    std::cout << "volume : " << box.volume() << std::endl;
    return 0;
}