#ifndef POINT_H
#define POINT_H
#include <iostream>

class Point
{
    friend std::ostream& operator<< (std::ostream& os, const Point& p);
    friend void operator++(Point& operand);

    public:
        Point() = default;
        
        
        Point(double x, double y) :
            m_x {x}, m_y {y}
        { }

        ~Point() = default;

        
    private:
        double length() const; // Function to calculate distance from the point (0,0)
        double m_x {}; // index 0
        double m_y {}; // index 1
};

inline std::ostream& operator<< (std::ostream& os, const Point& p)
{
    os << "Point [ x : " << p.m_x << ", y : " << p.m_y << "]";
    return os;
}

// Inline is necessary for header files which says this function is valid in this translation unit
// In cpp files, inline is not used
inline void operator++(Point& operand)
{
    (operand.m_x)++;
    (operand.m_y)++;
}

#endif // POINT_H