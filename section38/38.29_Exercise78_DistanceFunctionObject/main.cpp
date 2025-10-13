#include <iostream>
#include "print.h"
#include "exercise.h"

int main()
{
    Line l(Point(1,1),Point(2,2));
    std::cout << "distance : " << l() << std::endl;
    return 0;
}
