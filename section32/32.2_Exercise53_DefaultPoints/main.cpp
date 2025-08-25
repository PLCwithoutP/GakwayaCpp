#include <iostream>
#include "exercise.h"


int main()
{
    Point p1;
    std::cout << "x-value : " << p1.x() << std::endl;
    std::cout << "y-value : " << p1.y() << std::endl;
    
    Point p2(33.3);
    std::cout << "x-value : " << p2.x() << std::endl;
    std::cout << "y-value : " << p2.y() << std::endl;
    
    return 0;
}