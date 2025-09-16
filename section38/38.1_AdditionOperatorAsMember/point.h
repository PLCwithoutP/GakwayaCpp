#ifndef POINT_H
#define POINT_H
#include <iostream>

class Point
{
    public:
        Point() = default;
        Point(double x, double y) :
            m_x {x}, m_y {y}
        { }

        ~Point() = default;

        void print_info()
        {
            std::cout << "Point [ x : " << m_x << ", y : " << m_y << "]" << std::endl;
        }
    
        Point operator+(const Point& right_operand);
/*         // Member function
        Point operator+(const Point& right_operand)
        {
            return Point(m_x + right_operand.m_x, 
                         m_y + right_operand.m_y);
        } */
    private:
        double length() const; // Function to calculate distance from the point (0,0)
        double m_x {};
        double m_y {};
};

#endif // POINT_H