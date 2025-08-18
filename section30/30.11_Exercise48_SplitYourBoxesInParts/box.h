#ifndef BOX_H
#define BOX_H

class Box
{
    public:
        double m_width {1};
        double m_length {1};
        double m_height {1};

    public:
        Box() = default;
        Box(double p_width, double p_length, double p_height);

        double base_area();
        double volume();
};

#endif