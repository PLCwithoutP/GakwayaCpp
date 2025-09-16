#include <iostream>
#include "print.h"
#include "exercise.h"

int main()
{
    CU::Point_nD p1 {1.1,2.2,3.3};
    CU::Point_nD p2 {4.1,5.2,6.3};
    auto result = p1 + p2;
    result.print();
    
    return 0;
}
