#include <iostream>
#include "dog.h"


int main()
{
    Dog dog1("Boncuk", "Shepherd", 2);

/*     const std::string& str_ref = dog1.compile_dog_info(); // Dead reference/pointer
    std::cout << "info : " << (*str_ref) << std::endl; // Seg fault */

/*     const std::string* str_ref = dog1.compile_dog_info(); // Dead reference/pointer
    std::cout << "info : " << (*str_ref) << std::endl; // Seg fault */
    return 0;
}