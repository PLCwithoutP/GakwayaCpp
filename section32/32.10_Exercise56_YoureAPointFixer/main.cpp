#include <iostream>
#include "exercise.h"

int main()
{
    Point p1(25.1,32.2);
    Point p2(p1);
    print_point(p2);
    return 0;
}