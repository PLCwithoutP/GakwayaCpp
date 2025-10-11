#include <iostream>
#include "print.h"
#include "exercise.h"

int main()
{
    CU::string last_name("John ");
    CU::string first_name{"Snow"};
 
     auto result1 = last_name + "Snow";
    std::cout << "result : " << result1 << std::endl;
   
    auto result2 = ( "John " + first_name);
    std::cout << "result : " << result2  << std::endl;

    return 0;
}
