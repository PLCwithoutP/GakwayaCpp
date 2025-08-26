#ifndef POINT_H
#define POINT_H

#include <iostream>

class Point
{
    public:
        //Constructor
        Point(double x, double y);

        Point(double xy_coord);
        Point();
        Point(const Point& point);
        ~Point();

        double length() const; // Function to calculate distance
                               // from the point(0,0)

        static void print_info(const Point& point_ex);

        // static methods can only access to static variables
        static size_t get_point_count()
        {
            return m_point_count;
        }

        // static methods cannot be const, compiler error
        /* static size_t get_point_count() const
        {
            return m_point_count;
        } */
    private:
        double m_x;
        double m_y;
        static size_t m_point_count;
};


#endif // POINT_H