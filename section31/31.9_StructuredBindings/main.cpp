#include <iostream>

/* struct Point
{
    double x;
    double y;
};
 */
// Structured bindings can work with classes as well
class Point
{
    public:
        double x;
        double y;
};
/* // Structured bindings cannot work with private members
class Point
{
    double x;
    double y;
}; */

void print_point(const Point p)
{
    std::cout << "Point [ x : " << p.x << ", y : " << p.y << "]" << std::endl;
}

int main()
{
    Point point1;

    point1.x = 5;
    point1.y = 6;
    
    print_point(point1);

    auto [a,b] = point1;
    //auto [&a,&b] = point1; // compiler error

    auto func = [a]()
    {
        std::cout << "a (captured) : " << a << std::endl;
    };

    func();

    std::cout << "a : " << a << ", b : " << b << std::endl;

    point1.x = 5.5;
    point1.y = 3.1;

    print_point(point1);
    std::cout << "a : " << a << ", b : " << b << std::endl;

    return 0;
}