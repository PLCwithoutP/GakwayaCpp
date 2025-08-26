#include "exercise.h"
#include <iostream>

namespace Utilities
{
    void print_point(Geom::Point& p)
    {
	    std::cout << "Point[x : " << p.x() << ", y : " << p.y() << "]";
    }    
} // namespace Utilities

