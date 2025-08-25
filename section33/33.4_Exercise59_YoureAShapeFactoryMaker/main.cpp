#include <iostream>
#include "exercise.h"


int main()
{
    Point p1(1,1);
    Point p2(2,2);
    ShapeFactory sf;
    std::cout << "distance : " << sf.distance(p2,p1) << std::endl;
    return 0;
}