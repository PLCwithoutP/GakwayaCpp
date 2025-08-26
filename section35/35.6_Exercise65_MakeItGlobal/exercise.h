#pragma once
#include <cmath>

namespace Geom {
	
class Point{
	public : 
	//methods
	Point() = delete;
    Point(double x, double y);
	Point(const Point& p);



	void set_x(double x);

	void set_y(double y);

	 double x() const ;
	 double y() const ;
    

	//member variables
	private : 
	double m_x{1};
	double m_y{1};
};

}


void print_point(Geom::Point& p);
