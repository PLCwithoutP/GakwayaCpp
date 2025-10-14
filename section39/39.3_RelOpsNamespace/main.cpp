#include <iostream>

#include "print.h"
#include "my_utility.h"
#include "point.h"

int main()
{

    Point point1(10.0, 10.0);
    Point point2(20.0, 20.0);

    std::cout << std::boolalpha;

    print2("point1 : ", point1);
    print2("point2 : ", point2);

    // If you don't overload these operators, compiler error
    print2("point1 > point2 : ", (point1 > point2));
    print2("point1 < point2 : ", (point1 < point2));
    print2("point1 >= point2 : ", (point1 >= point2));
    print2("point1 <= point2 : ", (point1 <= point2));
    print2("point1 != point2 : ", (point1 != point2));
    print2("point1 == point2 : ", (point1 == point2));
    return 0;
}
