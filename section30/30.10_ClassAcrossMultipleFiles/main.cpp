#include <iostream>
#include "cylinder.h"




int main()
{
    auto print = [](auto input) -> void
    {
        std::cout << input << std::endl;
    };

    Cylinder cylinder1(2,3);

    print("Cylinder1 height");
    print(cylinder1.get_height());
    print("Cylinder1 base radius");
    print(cylinder1.get_base_radius());
    print("Cylinder1 volume");
    print(cylinder1.volume());
    return 0;
}