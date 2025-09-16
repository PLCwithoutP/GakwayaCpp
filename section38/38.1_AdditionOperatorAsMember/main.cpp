#include <iostream>
#include "print.h"
#include "point.h"

int main()
{
    Point p1(10,1);
    Point p2(20,5);
    Point p3{p1 + p2}; // p1.operator+(p2);

    Point p4{p2 + Point(5,5)};

    p3.print_info();
    p4.print_info();

    (Point(20,12) + Point(2,52)).print_info();
    return 0;
}
