#include <iostream>
#include "point.h"

int main()
{
    std::cout << "Point count : " << Point::get_point_count() << std::endl;

    Point p1(5.1, 3.5);

    p1.print_info(p1);

    Point p2(5.1, 3.5);
    std::cout << "Point count : " << Point::get_point_count() << std::endl;

    return 0;
}