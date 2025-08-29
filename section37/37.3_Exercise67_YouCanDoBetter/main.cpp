#include <iostream>
#include "exercise.h"

int main()
{
    std::unique_ptr<Point> p1 = std::make_unique<Point>(1,1);
    std::unique_ptr<Point> p2 = std::make_unique<Point>(2,2);
    Line l1(std::move(p1),std::move(p2)); // Now it's clear that ownership of p1 has moved into l1. l1 now has the responsibility to clean up.
    
    return 0;
}