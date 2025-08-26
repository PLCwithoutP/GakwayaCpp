#include <iostream>
#include "point.h"


int main()
{
    //Point p1(); // problematic definition
    //Point p1; // Acceptable
    Point p1(12.5,24.5);
    //p1.initialize_pointer(10,10);

    p1.print_info();
    p1.m_point4.print_info();

    return 0;
}