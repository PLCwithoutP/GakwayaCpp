#include <iostream>
#include "exercise.h"

size_t Point::s_point_count {0};

int main()
{
    
    Point p1(1,1);
    Point p2(p1); // Making a copy
    std::cout << "Point count : " << Point::s_point_count << std::endl;
    return 0;
}