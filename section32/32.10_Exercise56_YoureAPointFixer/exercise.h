#ifndef EXERCISE_H
#define EXERCISE_H

#include <iostream>

class Point
{
	public: 
	    // methods
        Point(double x = 10.1, double y = 100.1)
            : m_x(x), m_y(y)
        {
        }


        Point(const Point& p)
        : m_x(p.x()), m_y(p.y())
        {
            
        }

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
	   // member variables
	private: 
        double m_x{1};
        double m_y{1};
};


void print_point(Point& p);

#endif // _EXERCISE_H
