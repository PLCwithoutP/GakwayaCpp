#ifndef EXERCISE_H
#define EXERCISE_H


class Box {
	public : 
	//methods
	//Box() = default;
	Box(double width_param, double length_param)
    : Box{width_param, length_param, 1}
    {
    }
    Box(double width_param, double length_param, double height_param)
    : m_width{width_param},
      m_length{length_param},
      m_height{height_param}
    {
    }
	double base_area() const{
		return m_width * m_length;
	}
	double volume() const{
		return base_area() * m_height;
	}

	//member variables
	private : 
	double m_width{1};
	double m_length{1};
	double m_height{1};
};

#endif // _EXERCISE_H
