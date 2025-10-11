#include <iostream>
#include "print.h"
#include "number.h"

int main()
{
    Number n1(22);
    print(n1);
    print2("n1 + 2 : ", n1 + 2); // Works because implicit conversion is allowed
    print2("2 + n1 : ", 2 + n1); // Works only if + is defined globally
                                 // If + operator marked as member function this is a COMPILER ERROR
    return 0;
}
