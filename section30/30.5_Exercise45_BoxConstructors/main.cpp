#include <iostream>

class Box
{
    public:
        double m_width {1};
        double m_length {1};
        double m_height {1};

    public:
        Box()
        {

        }

        Box(double p_width, double p_length, double p_height)
        {
            m_width = p_width;
            m_length = p_length;
            m_height = p_height;
        }

        double base_area()
        {
            return m_width * m_length;
        }

        double volume()
        {
            return m_width * m_length * m_height;
        }
};

int main()
{
    Box box(10.1,20.4,30.3);
    std::cout << "base area : " << box.base_area() << std::endl;
    std::cout << "volume : " << box.volume() << std::endl;
    return 0;
}