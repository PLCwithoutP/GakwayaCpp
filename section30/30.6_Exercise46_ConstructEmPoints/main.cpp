#include <iostream>
#include <cmath>

class Point
{
    public:
        double m_x {};
        double m_y {};
    
    public:
        Point()
        {

        }

        Point(double p_x, double p_y)
        {
            m_x = p_x;
            m_y = p_y;
        }

        double distance_to(Point p2)
        {
            return sqrt(pow(m_x - p2.m_x,2) + pow(m_y - p2.m_y,2));
        }
};

int main()
{
    Point p1(1.1,2.1);
    Point p2(3.2,5.2);
    std::cout << "distance from p1 to p2 : " << p1.distance_to(p2) << std::endl;
    return 0;
}