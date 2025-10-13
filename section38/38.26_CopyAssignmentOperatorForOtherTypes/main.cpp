#include <iostream>
#include "print.h"
#include "point.h"
#include "car.h"

int main()
{
    Point p1(10,10,1);
    Car c1 ("blue", 240);

    p1 = c1;

    print(p1);

    return 0;
}
