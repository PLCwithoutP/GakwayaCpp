#ifndef FARM_H
#define FARM_H

//#include "dog.h"

class Dog; // Forward declaration

class Farm
{
    public:
        Farm();
        ~Farm();

        void use_dog(const Dog& dog_param); // Doesn't require the definition

/*         void do_something(const Dog& dog_param) // Would not work with forward declaration
        {
            dog_param.print_info();
        } */
    private:

};

#endif // FARM_H