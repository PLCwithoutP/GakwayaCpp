#include <iostream>
#include "dog.h"


int main()
{
    Dog dog1("Boncuk", "Shepherd", 2);
    dog1.print_info();

    std::cout << "dog name : " << dog1.name() << std::endl; // Getter

    //Modify the name
    dog1.name() = "Milord"; // Setter
    dog1.print_info();

    const Dog dog2("Çakır", "Shepherd", 2);
    dog2.print_info();

    std::cout << "dog name : " << dog2.name() << std::endl; // Getter
    std::cout << "dog breed : " << dog2.breed() << std::endl; // Getter
    std::cout << "dog age : " << dog2.age() << std::endl; // Getter

    //Modify the name
    //dog2.name() = "Arsız"; // Setter does not work upon const objects
    dog2.print_info();

    return 0;
}