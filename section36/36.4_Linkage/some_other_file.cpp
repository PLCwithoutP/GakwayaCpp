#include <iostream>

const double distance {12.2}; // Declaration and definition of something different than main.cpp
extern int age; // Declaration of some variable defined in some other TU

void print_distance()
{
    std::cout << "age(some_other_file) : " << age << " &age : " << &age << std::endl;
    std::cout << "distance (other_file) : " << distance << " &distance : " << &distance << std::endl;
}