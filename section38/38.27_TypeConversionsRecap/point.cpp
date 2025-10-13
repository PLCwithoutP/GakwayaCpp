#include <iostream>
#include "point.h"
#include "number.h"

Point::Point(double x, double y)
:
m_x {x}, m_y {y}
{
}

/* Point::Point(const Number& n)
{
    std::cout << "Point constructor from Number is called!" << std::endl;
    m_x = m_y = n.get_wrapped_number();
} */

void Point::operator= (const Number& n)
{
    std::cout << "Point copy assignment from Number called..." << std::endl;
    m_x = m_y = n.get_wrapped_number();
}

//Point::Point(const Point& p) : Point(p.m_x, p.m_y)
Point::Point(const Point& p)
{
    std::cout << "Copy constructor called to copy " << p << std::endl;
    if (this != &p)
    {
        m_x = p.m_x;
        m_y = p.m_y;
    }
}