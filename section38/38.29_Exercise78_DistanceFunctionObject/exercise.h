#ifndef EXERCISE_H
#define EXERCISE_H
#include <cmath>


struct Point {
	Point (double x, double y) : m_x(x), m_y(y) {}
	~Point(){
	}
	double m_x{};
	double m_y{};
};

//YOUR CODE WILL BO BELOW THIS LINE
//DON'T MODIFY ANYTHING ABOVE THIS LINE

class Line 
{
    public:
        Line(const Point& p1, const Point& p2)
        : l_x1 {p1.m_x}, l_y1 {p1.m_y},
          l_x2 {p2.m_x}, l_y2 {p2.m_y}
        {

        }
        double operator()() const
        {
            return (sqrt(pow((l_x1 - l_x2),2) + pow((l_y1 - l_y2),2)));
        }
    private:
        double l_x1 {0};
        double l_y1 {0};
        double l_x2 {0};
        double l_y2 {0};
};

//YOUR CODE WILL GO ABOVE THIS LINE
//DON'T MODIFY ANYTHING BELOW THIS LINE


#endif // _EXERCISE_H
