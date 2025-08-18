#include <iostream>
#include <cmath>

class Point
{
    public:
        double m_x {};
        double m_y {};
    
    public:
        // Constructors
        Point() = default;

        Point(double p_x, double p_y)
        {
            m_x = p_x;
            m_y = p_y;
        }

        // Setters
        Point* set_x(double para_x)
        {
            m_x = para_x;
            return this;
        }

        Point* set_y(double para_y)
        {
            m_y = para_y;
            return this;
        }

        // Getters
        double x()
        {
            return m_x;
        }

        double y()
        {
            return m_y;
        }

        // Methods
        double distance_to(Point p2)
        {
            return sqrt(pow(m_x - p2.m_x,2) + pow(m_y - p2.m_y,2));
        }

        void print_point(Point& p)
        {
            std::cout << "Point[x : " << p.x() << ", y : " << p.y() << "]" ;
        }
};


int main()
{
    Point p1;
    Point* p_ptr {&p1};
    p_ptr->set_x(21.2)->set_y(4.2);
    p1.print_point(p1);

    return 0;
}