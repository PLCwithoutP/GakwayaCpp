#ifndef DOG_H
#define DOG_H

#include <string>
#include <string_view>
#include <iostream> 

void some_func();
void some_unc();

class Dog 
{
    public:
        // Constructors
        // Default constructor
        Dog() = default;
        Dog(std::string_view para_name, std::string_view para_breed, int p_para_age);
        ~Dog();

    private:
        // Member variables
        std::string name;
        std::string breed;
        int * p_age{nullptr};
};

// Compiler error because of pass by value and double free() 
//void some_other_func(Dog dog);

#endif