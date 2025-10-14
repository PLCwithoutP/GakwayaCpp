#include <iostream>

#include "print.h"
#include "my_utility.h"

#include "number.h"

int main()
{
    Number n1(10);
    Number n2(20);

    std::cout << std::boolalpha;

    print2("n1 < n2 : ", (n1 < n2));
    print2("15 < n2 : ", (15 < n2));
    print2("n1 < 25 : ", (n1 < 25));
    
    return 0;
}
