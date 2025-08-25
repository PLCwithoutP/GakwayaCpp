#include <iostream>
#include "point.h"

int main()
{
    Point p1(10.0, 15.0);
    p1.print_info();
/* 
    // Compiler error bc we marked this as deleted
    Point p3(std::move(Point(20.5,5.8)));
    p3.print_info(); */
    
    return 0;
}