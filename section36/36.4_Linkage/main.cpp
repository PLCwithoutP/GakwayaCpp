#include <iostream>

void print_distance();

// External linkage
void some_function()
{
    int age {34}; // No linkage
    std::cout << "age : " << age << " &age : " << &age << std::endl;
}

int age {33}; // External linkage

const double distance {34.5}; // Internal linkage

int main()
{
    some_function();
    print_distance();

    // std::cout << age << std::endl; // Compiler error bc no linkage of some_function's inside

    std::cout << "age(main) : " << age << " &age : " << &age << std::endl;

    return 0;
}