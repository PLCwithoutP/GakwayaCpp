#include <iostream>
#include "print.h"
#include "exercise.h"

int main()
{
    CU::Point_nD p1 {1.1,2.2,3.3};
    std::cout << "value [0] : " << p1[0] << std::endl;
    std::cout << "value [1] : " << p1[1] << std::endl;
    std::cout << "value [2] : " << p1[2] << std::endl;
    return 0;
}
