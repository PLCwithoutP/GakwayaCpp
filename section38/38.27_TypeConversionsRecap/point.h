#ifndef POINT_H
#define POINT_H

// Forward declarations
class Number;

class Point
{
    friend std::ostream& operator << (std::ostream& out, const Point& p);
    public:
        Point() = default;
        Point(double x, double y);
        Point(const Point& p); // Copy constructor
        //Point(const Number& n); // Constructor from number
        ~Point() = default; // destructor

        // Copy assignment operator
        Point& operator=(const Point& right_operand)
        {
            std::cout << "Copy assignment operator is called!" << std::endl;
            if (this != &right_operand)
            {
                m_x = right_operand.m_x;
                m_y = right_operand.m_y;
            }
            return *this;
        }

        void operator=(const Number& n); // Copy assignment operator for Number

    private:
        double m_x {0.0};
        double m_y {0.0};
};

inline std::ostream& operator<< (std::ostream& out, const Point& point)
{
    out << "Point [ x : " << point.m_x << ", y : " << point.m_y << " ]";
    return out;
}
#endif //POINT_H