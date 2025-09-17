#include <iostream>
#include "print.h"
#include "point.h"

int main()
{
    Point p1(10,1);
    Point p2(20,5);
    Point p3{p1 + p2};
    Point p4{p1 - p2};

    print2("p3 : ", p3);
    print2("p4 : ", p4);

    double result {p1*p2};
    print("Scalar multiplication for p1 and p2 : ");
    print2("p1 * p2 = ", result);
    return 0;
}
