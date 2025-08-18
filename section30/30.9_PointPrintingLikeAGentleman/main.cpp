#include <iostream>
#include <cmath>

class Point
{    
    public:
        Point()
        {

        }

        Point(double p_x, double p_y)
        {
            m_x = p_x;
            m_y = p_y;
        }

        double x()
        {
            return m_x;
        }

        double y()
        {
            return m_y;
        }

        double distance_to(Point p2)
        {
            return sqrt(pow(m_x - p2.m_x,2) + pow(m_y - p2.m_y,2));
        }

    private:
        double m_x {};
        double m_y {};

};


int main()
{
    auto print = [](auto input) -> void
    {
        std::cout << input << std::endl;
    };

    Point point1(2,3);
    print("X of point1");
    print(point1.x());
    print("Y of point1");
    print(point1.y());
    return 0;
}