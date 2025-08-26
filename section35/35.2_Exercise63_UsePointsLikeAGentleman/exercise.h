#ifndef EXERCISE_H
#define EXERCISE_H

#include <cmath>
	
namespace Geom
{
    class Point
    {
	public : 
        //methods
        Point() = delete;
        Point(double x, double y)
            : m_x(x), m_y(y)
        { }

        Point(const Point& p)
        : m_x(p.x()), m_y(p.y())
        { }

        void set_x(double x)
        {
            m_x = x;
        }

        void set_y(double y)
        {
            m_y = y;
        }

        double x() const   
        {
            return m_x;
        }
        double y() const   
        {
            return m_y;
        }

    //member variables
    private : 
        double m_x{1};
        double m_y{1};
    };
} // namespace Geom


namespace Utilities
{
    void print_point(Geom::Point& p);
} // namespace Utilities






#endif // _EXERCISE_H
