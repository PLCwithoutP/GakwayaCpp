#include <iostream>
#include "point.h"


int main()
{
    /* Point p1(10,20);
    p1.print_info();
    Point p2(5,50);
    p2.print_info(); */
    
    // Print the point count
    std::cout << "Point count : " << Point::m_point_count << std::endl;

    Point p1(12.5,24.5);

    std::cout << "Point count : " << Point::m_point_count << std::endl;

    Point points[] {Point(1,1), Point(), Point(4)};

    std::cout << "Point count : " << Point::m_point_count << std::endl;

    return 0;
}