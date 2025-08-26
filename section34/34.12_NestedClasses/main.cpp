#include <iostream>
#include "outer.h"


int main()
{
    //Outer::Inner inner1(5.6);
    // Compiler error bc inner is private
    //Outer::Inner inner1(5.6); // No error bc inner is now public
    //inner1.get_double();
    
    Outer outer1(10,20.1);
    outer1.do_something();

    return 0;
}