#include <iostream>
#include "integer.h"

class Point
{
    public:
        Point() 
        { }
        Point(double x, double y)
            : m_x {x}, m_y {y}
        { }
    
    private:
/*         // No initialization at all
        double m_x;
        double m_y; */

/*         // Explicit assignment
        double m_x = 0.1;
        double m_y = 0.1; */

/*         // Empty braced initializers
        double m_x {};
        double m_y {}; */

        // Braced initializers
        double m_x {1};
        double m_y {1};

        Integer i; // Default constructor called
};

int main()
{
    Point p1;

    return 0;
}