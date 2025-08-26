#ifndef POINT_H
#define POINT_H

#include <iostream> // Included just to get access to size_t

class Point
{
    public:
        // Constructors
        Point(double x, double y);
        Point(double xy_coords); // Point constructor
        Point(); // Default constructor
        Point(const Point& point); // Point copy constructor

        // Destructors
        ~Point();

        // Utilities
        double length() const; // Function to calculate distance
                               // from the point (0,0)
        size_t get_point_count() const
        {
            // This function can modify m_point_count even though
            // it is valid for const because static vars belongs to
            // class itself
            return m_point_count;
        }

        static size_t m_point_count;

        void print_info() const
        {
            std::cout << "Point [ &m_x : " << &m_x << ", &m_y : " << &m_y
                      << " ]" << std::endl;
        }

        private:
            double m_x;
            double m_y;
            // static size_t m_point_count;
            // If static var is defined as private, it can only
            // be accessed by get_point_count();
            // It needs an object instance, however it is still
            // belonging to class itself
};

#endif // POINT_H