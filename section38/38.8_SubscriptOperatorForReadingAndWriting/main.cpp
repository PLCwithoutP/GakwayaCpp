#include <iostream>
#include "print.h"
#include "point.h"

int main()
{
    Point p1(10,1);
    Point p2(20,5);

    p1.print_info();

    p1[0] = 23.5;
    p1[1] = 54.3;

    p1.print_info();

    return 0;
}
