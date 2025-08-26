#include <iostream>
#include "exercise.h"

namespace Utilities
{
    void print_point(Geom::Point& p)
    {
	std::cout << "Point[x : " << p.x() << ", y : " << p.y() << "]" ;
    }
} // namespace Utilities


namespace Geom
{
    Point::Point(double x, double y)
        : m_x(x), m_y(y){
    }

    Point::Point(const Point& p)
        : m_x(p.x()), m_y(p.y())
    {
    }



    void Point::set_x(double x){
        m_x = x;
    }

    void Point::set_y(double y){
        m_y = y;
    }

        double Point::x() const   {
        return m_x;
    }
        double Point::y() const   {
        return m_y;
    }
} // namespace Geom


