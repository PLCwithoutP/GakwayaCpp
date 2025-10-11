#include <iostream>
#include "print.h"
#include "exercise.h"

int main()
{
    CU::string last_name("John ");
    CU::string first_name{"Snow"};
    
    std::cout << "full name : " <<  (last_name += first_name) << std::endl;
    auto result = last_name + first_name;
    std::cout << "full name : " << result << std::endl;

    return 0;
}