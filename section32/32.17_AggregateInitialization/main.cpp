#include <iostream>

struct Point
{
    double x;
    double y;
};

void print_point(const Point& p)
{
    std::cout << "Point [ x : " << p.x << ", y : " << p.y << "]" << std::endl;
}

int main()
{
    Point p1{10,20};
    print_point(p1);

    int scores[] {44,513,41234,43,562,5234,63}; // Aggregate Initialization
    return 0;
}