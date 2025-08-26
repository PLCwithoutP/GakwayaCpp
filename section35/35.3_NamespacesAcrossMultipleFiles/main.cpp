#include <iostream>
#include "point.h"
#include "line.h"
#include "cylinder.h"

int main()
{
    Geom::Point p1(12,25);
    Geom::Point p2(3.4,52);
    p1.print_info();
    p2.print_info();

    std::cout << "----" << std::endl;
    Geom::Line l1(p1,p2);
    l1.print_info();
    
    std::cout << "----" << std::endl;
    Geom::Cylinder c1(24,53);
    c1.volume();

    return 0;
}