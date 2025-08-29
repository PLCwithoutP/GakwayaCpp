#ifndef EXERCISE_H
#define EXERCISE_H
#include <memory>

struct Point {
	Point (double x, double y) : m_x(x), m_y(y) {}
	~Point(){
	}
	double m_x{};
	double m_y{};
};
 
class Line{
	public : 
	Line(std::shared_ptr<Point> start, std::shared_ptr<Point> end)
		: m_start(start), m_end(end){}
	~Line(){

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
        std::shared_ptr<Point> m_start{};
        std::shared_ptr<Point> m_end{};
};



#endif // _EXERCISE_H
