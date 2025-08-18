#include <iostream>

class Dog
{
    private:
        std::string m_name;
    // Override default
    public:
        std::string m_breed;
};

struct Cat
{
    public:
        std::string m_name;
    // Override default
    private:
        std::string m_breed;
};

struct Point
{
    double x;
    double y;
};  

void print_point(const Point& point)
{
    std::cout << "Point [x : " << point.x << ", y : " << point.y << "]" << std::endl;
}

int main()
{
    Dog dog1;
    Cat cat1;

    // dog1.m_name = "Fluffy"; // Compiler error
    cat1.m_name = "Juny"; // Works fine

    dog1.m_breed = "Shepherd"; // Works fine
    //cat1.m_breed = "House Cat"; // Compiler error
    
    Point point1;
    point1.x = 10;
    point1.y = 55.5;

    print_point(point1);

    point1.x = 20;
    point1.y = 45.5;

    print_point(point1);


    return 0;
}