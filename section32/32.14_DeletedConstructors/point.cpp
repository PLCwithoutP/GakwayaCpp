#include "point.h"

Point::Point(double x_param, double y_param)
    : x(new double(x_param)),
      y(new double(y_param))
{}

/* // Copy constructor - deep copy
Point::Point(const Point& source_point)
    : x(new double(*(source_point.get_x()))),
      y(new double(*(source_point.get_y())))
{
    std::cout << "Body of copy constructor" << std::endl;
} */

/* // Move constructor
Point::Point(Point&& source_point)
    : x(source_point.get_x()),
      y(source_point.get_y())
{
    source_point.invalidate();
    std::cout << "Body of move constructor" << std::endl;
}
 */

/* // Invalidate within steal_x/y() methods
Point::Point(Point&& source_point)
    : x(source_point.steal_x()),
      y(source_point.steal_y())
{
    std::cout << "Body of move constructor" << std::endl;
} */

Point::~Point()
{
    delete x;
    delete y;
}