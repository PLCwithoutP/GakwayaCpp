#include <iostream>
#include <memory>

#include "dog.h"

int main()
{
    auto print = [](auto thing)
    {
        std::cout << thing << std::endl;
    };

/*     // Array allocated on the stack
    {
        print("Working with dog array on the stack");
        Dog dog_array[3] { Dog("Fido"), Dog("Rex"), Dog("Buddy") };
        for (size_t i {0}; i < std::size(dog_array); ++i)
        {
            print(dog_array[i].get_name());
        }
    } */

/*     // Array allocated on the heap
    {
        print("Working with dog array on the heap");
        print("Have to explicitly release the memory when done");
        Dog* p_dog_array_raw = new Dog[3] { Dog("Fili"), Dog("Bili"), Dog("Gami") };

        for (size_t i {0}; i < 3; ++i)
        {
            print(p_dog_array_raw[i].get_name());
        }
        delete[] p_dog_array_raw;

        // If we don't delete explicitly like above, have the line commented out
        // the memory for the array won't be released and we won't see the destructors for
        // Fili, Bili, and Gami called. If we delete explicitly, we will see the destructors called.
    } */

    // Array allocated on the heap with unique_ptr. Releases space for array automatically
    {
        print("");
        print("Array on heap with unique_ptr");

        auto arr_ptr = std::unique_ptr<Dog[]>(new Dog[3] { Dog("Kili"), Dog("Mili"), Dog("Lami") });
        // auto arr_ptr = std::make_unique<Dog[]>(3); // Also works. Cannot initialize individual elements this way
        // auto arr_ptr = std::make_unique<Dog[]>(3) { Dog("Kili"), Dog("Mili"), Dog("Lami") }; // Compiler error
        // auto arr_ptr = std::make_unique<Dog[]>{ Dog("Kili"), Dog("Mili"), Dog("Lami") }; // Compiler error
        
        for (size_t i {0}; i < 3; ++i)
        {
            print(arr_ptr[i].get_name());
        }
    }
    print("Done");
    return 0;
}