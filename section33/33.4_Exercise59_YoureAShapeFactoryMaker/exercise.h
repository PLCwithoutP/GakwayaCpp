#ifndef EXERCISE_H
#define EXERCISE_H

#include <cmath>

class Point
{
    friend class ShapeFactory;
    public:
        Point(double x_param, double y_param)
        : m_x{x_param}, m_y{y_param}
        {}
	//member variables
	private : 
        double m_x{1};
        double m_y{1};
};



class ShapeFactory{
	public : 
	double distance(const Point& from, const Point& to){
	return  std::sqrt(pow(to.m_x - from.m_x, 2) + pow(to.m_y - from.m_y, 2) * 1.0);
    }
};


#endif // _EXERCISE_H
