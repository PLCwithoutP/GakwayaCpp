#include "exercise.h"

double distance(const Point& from, const Point& to){
	return  std::sqrt(pow(to.m_x - from.m_x, 2) + pow(to.m_y - from.m_y, 2) * 1.0);
}