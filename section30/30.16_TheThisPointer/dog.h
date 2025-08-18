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
        // Default constructor/destructor
        Dog() = default;
        Dog(std::string_view para_name, std::string_view para_breed, int p_para_age);
        ~Dog();

        // Setters
        void set_dog_name(std::string_view name);
        void set_dog_breed(std::string_view breed);
        void set_dog_age(int age);
        Dog* set_dog_name_chain(std::string_view name);
        Dog* set_dog_breed_chain(std::string_view breed);
        Dog* set_dog_age_chain(int age);
        Dog& set_dog_name_ref_chain(std::string_view name);
        Dog& set_dog_breed_ref_chain(std::string_view breed);
        Dog& set_dog_age_ref_chain(int age);
        // Methods
        void print_info();
    private:
        // Member variables
        std::string name;
        std::string breed;
        int * p_age{nullptr};
};

// Compiler error because of pass by value and double free() 
//void some_other_func(Dog dog);

#endif