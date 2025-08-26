#include <iostream>
#include "point.h"
#include "line.h"
#include "cylinder.h"
#include "operations.h"

//using Geom::Point; // Just bringing in the name from the namespace
using namespace Geom;

double add(double a, double b)
{
    std::cout << "::" << std::endl;
    return a + b + 0.555;
}

//using Math::add; // Compiler error
//using Math; // Compiler error

int main()
{
    Point p1(12,25);
    Point p2(3.4,52);
    p1.print_info();
    p2.print_info();

    std::cout << "----" << std::endl;
    Line l1(p1,p2);
    l1.print_info();
    
    std::cout << "----" << std::endl;
    Cylinder c1(24,53);
    c1.volume();

    std::cout << "----" << std::endl;

    add(10,20);
    //using std; // Works but not recommended
    return 0;
}