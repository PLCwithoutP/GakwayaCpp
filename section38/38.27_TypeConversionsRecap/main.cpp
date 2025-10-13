/*
    Putting together all the conversion techniques between types
        we have learnt so far.
            - Custom type conversion operator : Number -> Point
            - Constructors (constructing Point from Number) : Number -> Point
            - Copy assignment operator (copying from Number): Number -> Point
            
        Start with all these in, and show that the compiler uses this priority
            for the assignment p1 = n1:
                - Copy assignment operator
                - Constructor
                - Type conversion operator
        
        For the function
            - Constructor
            - Type conversion operator
            - Copy assignment operator is not a candidate

        Big note:
            Strive for using forward declarations in your classes
*/

#include <iostream>
#include "print.h"
#include "point.h"
#include "number.h"

void do_something_with_point(const Point& p)
{
    std::cout << "point : " << p << std::endl;
}

int main()
{
    Point p1(10,10);
    Number n1(22);

    //p1 = n1;
    // (1) copy assignment operator
    // (2) constructor taking in a Number
    // (3) type conversion operator : Number -> Point
    
    
    do_something_with_point(n1);
    // (1) constructor
    // (2) type conversion operator
    return 0;
}
