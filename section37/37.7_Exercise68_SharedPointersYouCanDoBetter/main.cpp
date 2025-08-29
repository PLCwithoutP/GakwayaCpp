#include <iostream>
#include "exercise.h"


int main()
{
    std::shared_ptr<Point> p1 = std::make_shared<Point>(1,1);
    std::shared_ptr<Point> p2 = std::make_shared<Point>(2,2);
    Line l1(p1,p2);
    return 0;
}