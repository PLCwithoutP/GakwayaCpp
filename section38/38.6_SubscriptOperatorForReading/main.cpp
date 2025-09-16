#include <iostream>
#include "print.h"
#include "point.h"

int main()
{
    Point p1(10,1);
    Point p2(20,5);

    print2("p1.x : ", p1[0]); // x coord: 10
    print2("p1.y : ", p1[1]); // y coord: 1

    // Also works
    print2("p2.operator[](0) : ", p2.operator[](0)); 
    print2("p2.operator[](1) : ", p2.operator[](1)); 

    return 0;
}
