#include <iostream>
#include "print.h"
#include "point.h"

int main()
{
/*     Point p1(10,10);
    Point p2(20,20);

    print2("p1 before assignment: ", p1);
    print2("p2 before assignment: ", p2);
    
    // Assignment
    p1 = p2; // Compiler generated copy assignment
             // It works because Point has no pointer
             // Compiler generated copy assignment shallow copies data

    print2("p1: ", p1);
    print2("p2: ", p2); */

/*     Point p1(10,10,1);
    Point p2(20,20,2);

    print2("p1 before assignment: ", p1);
    print2("p2 before assignment: ", p2);

    p1 = p2;

    print2("p1: ", p1);
    print2("p2: ", p2);

    p1.set_data(55);
    print2("p1: ", p1);
    print2("p2: ", p2);
 */

    // wtf?
    Point p3(30,30,3);
    Point p4(p3);
    Point p5 = p3;

    p4.set_data(77);

    print(p3);
    print(p4);
    print(p5);

    print("Chain rule");
    p4 = p5 = p3; // Works

    print(p3);
    print(p4);
    print(p5);

    return 0;
}
