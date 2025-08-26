#ifndef EXERCISE_H
#define EXERCISE_H

#pragma once
#include <cmath>

class Point{
	//friend double distance(const Point& from, const Point& to);
	friend class ShapeFactory;
	public : 
	//methods
	Point() = delete;
	Point(double x, double y)
		: m_x(x), m_y(y){
        s_point_count++;
	}

	Point(const Point& p)
	 : m_x(p.x()), m_y(p.y())
	{
        s_point_count++;
	}



	void set_x(double x){
		m_x = x;
	}

	void set_y(double y){
		m_y = y;
	}

	double x() const   {
		return m_x;
	}
	double y() const   {
		return m_y;
	}

    static size_t s_point_count;
    
	//member variables
	private : 
        double m_x{1};
        double m_y{1};
           
};

#endif // _EXERCISE_H
