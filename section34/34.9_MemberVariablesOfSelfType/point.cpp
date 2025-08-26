#include "point.h"
#include <cmath>

const Point Point::m_point4 {Point{4,5}};
Point Point::m_point5 {Point{3,8}}; 

Point::Point(double x, double y)
: m_x{x}, m_y{y}, p_m_point4{nullptr}
{
    ++m_point_count;
    std::cout << "Constructor is called!" << std::endl;
}

Point::Point(double xy_coords)
: Point(xy_coords, xy_coords)
{ }

Point::Point()
: Point(0,0)
{ }

Point::Point(const Point& point)
: Point(point.m_x,point.m_y)
{ }

Point::~Point()
{
    --m_point_count;
    delete p_m_point4;
}

// Function to calculate distance from the point(0,0)
double Point::length() const
{
    return sqrt(pow(m_x - 0,2)*1.0 + pow(m_y - 0,2)*1.0);
}

