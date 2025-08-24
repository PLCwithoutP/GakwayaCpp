#ifndef EXERCISE_H
#define EXERCISE_H

#include <iostream>

struct Point{
	public : 
	//methods
	Point() = default;
	Point(double x, double y){
		m_x = x; 
		m_y = y;
	}

	void set_x(double x){
		m_x = x;
	}

	void set_y(double y){
		m_y = y;
	}

	double x()  const ;
	double y()  const ;
	//member variables
	private : 
	double m_x{1};
	double m_y{1};
};

void print_point(const Point& p);

#endif // _EXERCISE_H
