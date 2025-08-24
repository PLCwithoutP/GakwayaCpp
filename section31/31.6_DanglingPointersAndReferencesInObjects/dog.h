#ifndef DOG_H
#define DOG_H

#include <iostream>
#include <string>

class Dog
{
    public:
        Dog() = default;
        Dog(const std::string& name_param, 
            const std::string& breed_param,
            unsigned int age_param);

        std::string& name();
        std::string& breed();
        unsigned int age();
        const std::string& name() const;
        const std::string& breed() const;
        const unsigned int age() const;
/*         // Getters
        std::string get_name() const;
        std::string get_breed() const;
        unsigned int get_age() const;

        // Setters
        void set_name(std::string name_param);
        void set_breed(std::string breed_param);
        void set_age(unsigned int age_param); */

        // Utility functions
        void print_info() const;
        //const std::string& compile_dog_info(); // Seg fault
        const std::string* compile_dog_info(); // Seg fault

    private:
        std::string m_name;
        std::string m_breed;
        unsigned int m_age;
};

#endif // DOG_H