#include <iostream>
#include "person.h"
// Variable : Declaration & definition
// Can be defined only once
double weight {};

double add(double a, double b);

// Struct and class definition can show up more than once in cpp files
// But they cannot show up more than once in a single file
struct Point
{
    double x;
    double y;
};


int main()
{
/*     std::cout << weight << std::endl;
    std::cout << add(10,20) << std::endl;
    Point p1;
    std::cout << "p1.x : " << p1.x << " , p1.y : " << p1.y << std::endl; */

    Person p1("John Snow", 35);
    p1.print_info();
    
    return 0;
}

double add(double a, double b)
{
    return a + b;
}