#include "dog.h"

Dog::Dog(std::string_view para_name, std::string_view para_breed, int p_para_age)
{
    name = para_name;
    breed = para_breed;
    p_age = new int;
    *p_age = p_para_age;
    std::cout << "Dog constructor is called for " << name << " at " << this << std::endl;
}

Dog::~Dog()
{
    delete p_age;
    std::cout << "Dog destructor is called for " << name << std::endl;
}

void Dog::set_dog_name(std::string_view name)
{
    this->name = name;
}

void Dog::set_dog_breed(std::string_view breed)
{
    this->breed = breed;
}

void Dog::set_dog_age(int age)
{
    *(this->p_age) = age;
}

Dog* Dog::set_dog_name_chain(std::string_view name)
{
    this->name = name;
    return this;
}

Dog* Dog::set_dog_breed_chain(std::string_view breed)
{
    this->breed = breed;
    return this;
}

Dog* Dog::set_dog_age_chain(int age)
{
    *(this->p_age) = age;
    return this;
}

Dog& Dog::set_dog_name_ref_chain(std::string_view name)
{
    this->name = name;
    return (*this);
}

Dog& Dog::set_dog_breed_ref_chain(std::string_view breed)
{
    this->breed = breed;
    return (*this);
}

Dog& Dog::set_dog_age_ref_chain(int age)
{
    *(this->p_age) = age;
    return (*this);
}

void Dog::print_info()
{
    std::cout << "Dog (" << this << ") : " << "\n[ name : " << name
            << " \nbreed : " << breed << " \nage : " << (*p_age) << " ]" << std::endl;
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