#include "dog.h"

Dog::Dog(const std::string& name_param,
         const std::string& breed_param,
         unsigned int age_param)
{
    m_name = name_param;
    m_breed = breed_param;
    m_age = age_param;
}

std::string& Dog::name()
{
    return m_name;
}

const std::string& Dog::name() const
{
    return m_name;
}

std::string& Dog::breed()
{
    return m_breed;
}

const std::string& Dog::breed() const
{
    return m_breed;
}

unsigned int Dog::age()
{
    return m_age;
}

const unsigned int Dog::age() const
{
    return m_age;
}

/* // Getters
std::string Dog::get_name()
{
    return this->m_name;
}

std::string Dog::get_breed()
{
    return m_breed;
}

unsigned int Dog::get_age()
{
    return m_age;
}

// Setters
void Dog::set_name(std::string name_param)
{
    this->m_name = name_param;
}

void Dog::set_breed(std::string breed_param)
{
    this->m_breed = breed_param;
}

void Dog::set_age(std::string age_param)
{
    this->m_age = age_param;
} */

// Member functions
void Dog::print_info() const
{
    std::cout << "Dog (" << this << ") : [ name : " << this->m_name
              << ", breed : " << this->m_breed
              << ", age : " << this->m_age << "]" << std::endl; 
}