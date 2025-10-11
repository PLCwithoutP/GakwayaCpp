#include <iostream>
#include "print.h"
#include "point.h"

int main()
{
    Point p1(10,10);
    print2("p1 : ", p1++); // (10,10)
    print2("p1 after postfix :", p1); // (11,11)

    return 0;
}
