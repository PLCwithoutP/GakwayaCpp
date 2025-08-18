#include "box.h"

Box::Box(double p_width, double p_length, double p_height)
{
    m_width = p_width;
    m_length = p_length;
    m_height = p_height;
}

double Box::base_area()
{
    return m_width * m_length;
}

double Box::volume()
{
    return m_width * m_length * m_height;
}