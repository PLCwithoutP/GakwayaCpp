#include <iostream>
#include "cylinder.h"

int main()
{
    auto print = [](auto input) -> void
    {
        std::cout << input << std::endl;
    };

    // Created in heap
    Cylinder cylinder1(2,3);

    print("Cylinder1 volume");
    print(cylinder1.volume());
    
    // Managing a stack object through pointers
    Cylinder* p_cylinder1 = &cylinder1;
    print("Cylinder1 volume with pointer");
    print("------------------------------");
    print("First way is (*p_cylinder1).volume()");
    print((*p_cylinder1).volume());
    print("Second way is p_cylinder1->volume()");
    print(p_cylinder1->volume());

    // Create a cylinder heap object through the new operator
    Cylinder* p_cylinder2 = new Cylinder(100,2); // Heap

    print("Volume of Cylinder2");
    print(p_cylinder2->volume());
    print("Get base radius of Cylinder2");
    print(p_cylinder2->get_base_radius());

    delete p_cylinder2;
    return 0;
}