#include <iostream>

struct Component 
{
    double x;
    double y;
    double z;
};

void print_component(const Component& c)
{
    std::cout << "Component [ x : " << c.x << ", y : " << c.y << ", z : " << c.z << " ]" << std::endl;
}

int main()
{
    // C++ 20 feature
    Component c1{.x = 5.7, .y = 8.2, .z = 5.2};
    print_component(c1);

    Component c2{.x = 5.7, .z = 84};
    print_component(c2);

    Component c3{.y = 5.7, .z = 84};
    print_component(c3);
    
    // Default values are 0
    //Component c4{.z = 5.7, .x = 84}; // Compiler error
    //print_component(c4);

    return 0;
}