#include <iostream>
#include <string>
#include <cstring>
#include <typeinfo>
#include "headers.h"

int main()
{
    auto print = [](auto input)
    {
        std::cout << input << std::endl;
    };

    std::string students[] {"Steve","Karly","Sally","Salim"} ;
    std::string to_find{"Bart"};
    auto result1 = hunt_down(to_find,students,4);
    print("Result 1 is : ");
    print(result1);
    
    unsigned int ids[] {1122,4432,7828,9022,3903,3015,2072};
    unsigned int id_to_find {7828};
    auto result2 = hunt_down(id_to_find,ids,7);
    print("Result 2 is : ");
    print(result2);

    std::string student_to_find{ "Kumar" };
    const char* students_cstr[]{ "Mary", "Steve", "Kumar", "Ahmed" };
    auto result3 = hunt_down(student_to_find.c_str(), students_cstr, 4);
    print("Result 3 is : ");
    print(result3);

    return 0;
}