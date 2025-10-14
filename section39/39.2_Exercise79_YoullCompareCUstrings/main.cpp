#include <iostream>
#include "print.h"
#include "exercise.h"

int main()
{
    CU::string a("Hello");
    CU::string b("Hello");
 
    std::cout << std::boolalpha;
    std::cout << "a > b : " << (a > b) << std::endl;
    std::cout << "a < b : " << (a < b) << std::endl;
    std::cout << "a >= b : " << (a >= b) << std::endl;
    std::cout << "a <= b : " << (a <= b) << std::endl;
    std::cout << "a == b : " << (a == b) << std::endl;
    std::cout << "a != b : " << (a != b) << std::endl;
    return 0;
}
