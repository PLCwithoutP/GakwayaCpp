#include <iostream>
#include "print.h"
#include "point.h"

int main()
{
    Point p1(10,1);
    Point p2(20,5);
    Point p3{55,2};

    p1 += p3;
    p2 -= p3;
    print2("p1 : ", p1);
    print2("p2 : ", p2);

    print2("p1 + p2 : ", p1 + p2);
    print2("p2 - p1 : ", p2 - p1);
    
    return 0;
}
