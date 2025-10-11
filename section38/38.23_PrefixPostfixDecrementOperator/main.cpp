#include <iostream>
#include "print.h"
#include "point.h"

int main()
{
    Point p1(10,10);

    print2("p1 : ", p1--);
    print2("p1 after post-decrement: ", p1);
    
    return 0;
}
