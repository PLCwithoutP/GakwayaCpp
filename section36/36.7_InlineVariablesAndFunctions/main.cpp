#include <iostream>

//void some_function();

void print_age_utility1();
void print_age_utility2();

int main()
{
    //some_function(); // inline confines this function to its own TU
    print_age_utility2();
    print_age_utility1();
    
    return 0;
}