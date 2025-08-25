#include <iostream>

class Point
{
    public:
        Point(double x, double y)
        : m_x{x}, m_y{y}
        {
            std::cout << "Point constructor called!" << std::endl;
        }
    private:
        double m_x;
        double m_y;
};

struct Person
{
    std::string m_name;
    unsigned int m_age;
};

int main()
{
    // Uniform initialization : () or {}
    Point p1(10.1,39.1); 
    Point p2{10.5,39.2};
    
    // Struct
        // {}
        Person person1 {"Daniel", 35};
        //Person person2 {"Furkan", 12.5}; // Compiler error because of narrowing conversion
    
        // ()
        Person person3 ("John", 35);
        Person person4 ("Mehmet", 12.5); // No error because () allows narrowing conversion

    return 0;
}