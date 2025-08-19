#include "exercise.h"


double Point::x()  const {
    return m_x;
}
double Point::y()  const {
    return m_y;
}

void print_point(const   Point& p){
	std::cout << "Point[x : " << p.x() << ", y : " << p.y() << "]" ;
}
