#include "dog.h"

Dog::Dog(std::string_view para_name, std::string_view para_breed, int p_para_age)
{
    name = para_name;
    breed = para_breed;
    p_age = new int;
    *p_age = p_para_age;
    std::cout << "Dog constructor is called for " << name << std::endl;
}

Dog::~Dog()
{
    delete p_age;
    std::cout << "Dog destructor is called for " << name << std::endl;
}

void some_func()
{
    Dog my_dog("Pamuk", "Alaskan", 10);
}

// Compiler error because of pass by value and double free()
/* void some_other_func(Dog dog)
{
    
} */

void some_unc()
{
    Dog* p_dog = new Dog("Girly", "Shepherd", 5);

    delete p_dog; // Causes for the destructor of Dog to be called
}