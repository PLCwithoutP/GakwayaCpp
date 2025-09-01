#include <iostream>
#include <memory>

#include "print.h"
#include "dog.h"

int main()
{
    // C++-17 only: Recommended
    std::shared_ptr<int[]> shared_ptr_int_arr_1 (new int[10]{1,2,3,4,5,6,7,8,9,1});
    std::shared_ptr<Dog[]> shared_ptr_dog_arr_1 (new Dog[10]{Dog("Dog1"), Dog("Dog2")});

    // Setting elements
    shared_ptr_int_arr_1[3] = 28;
    shared_ptr_dog_arr_1[5] = Dog("Bernardo");

    // Read int array
    print("");
    print("Reading data from arrays");
    print("Reading shared_ptr_int_arr_1");
    for(size_t i{0}; i < 10; ++i)
    {
        std::cout << "shared_ptr_int_arr_1" << "[" << i << "] : " << shared_ptr_int_arr_1[i] << std::endl;
    }

    print("");
    print("Reading shared_ptr_dog_arr_1");
    for(size_t i{0}; i < 10; ++i)
    {
        std::cout << "shared_ptr_dog_arr_1" << "[" << i << "] : " << shared_ptr_dog_arr_1[i].get_name() << std::endl;
    }
    return 0;
}