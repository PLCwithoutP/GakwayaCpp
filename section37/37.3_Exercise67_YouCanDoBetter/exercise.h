#ifndef EXERCISE_H
#define EXERCISE_H
#include <memory>


struct Point {
    Point (double x, double y) : m_x(x), m_y(y) {}
	double m_x{};
	double m_y{};
};



class Line{
    public : 
    Line(std::unique_ptr<Point> start, std::unique_ptr<Point> end)
        : m_start{std::move(start)}, m_end(std::move(end)){}
    ~Line() 
    {
        
    }
 
    double start_x() const{
        return m_start->m_x;
    }
    double start_y() const{
        return m_start->m_y;
    }
 
    double end_x() const{
        return m_end->m_x;
    }
    double end_y() const{
        return m_end->m_y;
    }
 
    private : 
        std::unique_ptr<Point> m_start{};
        std::unique_ptr<Point> m_end{};
};





#endif // _EXERCISE_H
