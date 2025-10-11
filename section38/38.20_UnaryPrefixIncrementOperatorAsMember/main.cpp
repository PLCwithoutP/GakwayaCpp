#include <iostream>
#include "print.h"
#include "point.h"

int main()
{
    Point p1(10,10);

    print2("p1 : ", p1);

    ++p1; // Overloaded
    //p1.operator++(); // This is what compiler calls from p1
    
    print2("p1 : ", p1);

    for(size_t i {}; i < 20; ++i)
    {
        ++p1;
        print2("p1 : ", p1);
    }

    return 0;
}
