#include <iostream>
#include "print.h"
#include "exercise.h"

int main()
{
    CU::string full_name("John ");
    CU::string first_name{"Snow"};
    auto result = full_name + first_name;
    std::cout << result << std::endl;

    return 0;
}
