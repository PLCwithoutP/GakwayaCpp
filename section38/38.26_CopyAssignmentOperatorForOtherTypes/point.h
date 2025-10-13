#ifndef POINT_H
#define POINT_H
#include <iostream>

// Forward declaration
class Car;

class Point
{
    friend std::ostream& operator<< (std::ostream& os, const Point& p);

    public:
        Point() = default;
        
        Point(double x, double y, int data) :
            m_x {x}, 
            m_y {y}, 
            p_data {new int (data)}
        { }

        // Copy constructor
        Point(const Point& p);

        ~Point() = default;

        void set_data(int data)
        {
            *p_data = data;
        }

        void operator=(const Car& c);

        Point& operator=(const Point& right_operand)
        {
            std::cout << "Copy assignment is called!" << std::endl;
            if (this != &right_operand)
            {
                delete p_data;
                p_data = new int(*(right_operand.p_data)); 
                m_x = right_operand.m_x;
                m_y = right_operand.m_y;
            }

            return *this;
        }

    private:
        double length() const; // Function to calculate distance from the point (0,0)
        double m_x {}; // index 0
        double m_y {}; // index 1
        int* p_data;
};

inline std::ostream& operator<< (std::ostream& os, const Point& p)
{
    os << "Point [ x : " << p.m_x << ", y : " << p.m_y 
    << ", index : " << *(p.p_data) << "]";
    return os;
}


#endif // POINT_H