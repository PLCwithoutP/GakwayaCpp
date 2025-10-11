#include <iostream>
#include "print.h"
#include "point.h"
#include "number.h"

double sum(double a, double b)
{
    return a + b;
}

void use_point(const Point& p)
{
    print2("Printing the point from use_point func : ", p);
}

int main()
{
    Number n1(22);
    Number n2(12);

    double result = sum(static_cast<double>(n1), static_cast<double>(n2));
    use_point(static_cast<Point>(n1));

    print(result);
    
    return 0;
}
