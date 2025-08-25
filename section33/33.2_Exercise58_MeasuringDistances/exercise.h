#ifndef EXERCISE_H
#define EXERCISE_H

#include <cmath>

class Point
{
    public:
        Point(double x_param, double y_param)
        : m_x{x_param}, m_y{y_param}
        {}

    //Computes and returns the distance between to points as double
    friend double distance(const Point& from, const Point& to);    
    
	//member variables
	private : 
        double m_x{1};
        double m_y{1};
};


#endif // _EXERCISE_H
