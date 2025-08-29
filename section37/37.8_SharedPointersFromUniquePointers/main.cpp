#include <iostream>
#include <memory>

#include "print.h"
#include "dog.h"

std::unique_ptr<Dog> get_unique_ptr()
{
    std::unique_ptr<Dog> dog_ptr_internal = std::make_unique<Dog>("Phil");
    return dog_ptr_internal;
}

int main()
{
    // Create shared pointers from unique_ptrs
    std::unique_ptr<int> up_int_1 = std::make_unique<int> (2); // Heap objects
    std::unique_ptr<Dog> up_dog_1 = std::make_unique<Dog> ("Halz"); // Heap objects

    // Create shared pointers from unique_ptrs
    // Ownership moves from unique_ptrs to shared_ptrs from now on
    std::shared_ptr<int> shared_ptr_int_1 = std::move(up_int_1);
    std::shared_ptr<Dog> shared_ptr_dog_1 = std::move(up_dog_1);
    // std::shared_ptr<Dog> shared_ptr_dog_2 = unique_ptr_dog_1; // Direct assignment
                                                                 // Doesn't work, you have to do
                                                                 // an explicit std::move
                                                                 // to move ownership

    print2("shared_ptr_int_1 use count : ", shared_ptr_int_1.use_count());
    print2("shared_ptr_dog_1 use count : ", shared_ptr_dog_1.use_count());
    std::cout << std::boolalpha;
    print2("up_int_1 :", static_cast<bool> (up_int_1));
    print2("up_dog_1 :", static_cast<bool> (up_dog_1));

    print2("up_int_1 (real value):", std::move(up_int_1));
    print2("up_dog_1 (real value):", std::move(up_dog_1));

    // Can create copies because now we hold a shared ptr
    print("------------------------------------------------------");
    print("Making copies...");
    std::shared_ptr<int> shared_ptr_int_2 {shared_ptr_int_1};
    std::shared_ptr<Dog> shared_ptr_dog_2 {shared_ptr_dog_1};

    print2("shared_ptr_int_1 use count:", shared_ptr_int_1.use_count());
    print2("shared_ptr_dog_1 use count:", shared_ptr_dog_1.use_count());
    print2("shared_ptr_int_2 use count:", shared_ptr_int_2.use_count());
    print2("shared_ptr_dog_2 use count:", shared_ptr_dog_2.use_count());

/*     // Can't transform from std::shared_ptr to std::unique_ptr
        // The reason this transformation is disabled isn't hard to think of
        // At any given moment, there may be any number of shared pointers
        // spread through your entire application working on the same object.
        // If you were to instantly make one of those a unique_ptr, what do
        // you do with the remaining copies? Unique ptr can't have copies
        // anyway. So the compiler prevents you from doing this.
    std::unique_ptr<int> up_illegal_1 {shared_ptr_int_3}; // Compiler error
    std::unique_ptr<int> up_illegal_2 = shared_ptr_int_3; // Compiler error
    std::unique_ptr<int> up_illegal_3 = std::move(shared_ptr_int_3); // Compiler error */
    
    print("------------------------------------------------------");
    
    // Returning unique_ptr to shared_ptr
    print(" ");
    print("Returning unique_ptr from function to shared_ptr");
    std::shared_ptr<Dog> shared_ptr_dog_3 = get_unique_ptr(); // This implicitly moves ownership from
                                                      // dog_ptr_internal to shared_ptr_dog_3
                                                      // Does something like this
                                                      // std::shared_ptr<Dog> shared_ptr_dog_3 = 
                                                      // std::move(dog_ptr_internal)
                                                      
    if (shared_ptr_dog_3)
    {
        print2("shared_ptr_dog_3 name:",shared_ptr_dog_3->get_name());
    }

    print("------------------------------------------------------");
    // Returning unique_ptr to unique_ptr
    print(" ");
    print("Returning unique_ptr from function to unique_ptr");
    std::unique_ptr<Dog> up_dog_2 = get_unique_ptr(); // This implicitly moves ownership from
                                                      // dog_ptr_internal to up_dog_2
                                                      
    if (up_dog_2)
    {
        print2("up_dog_2 name:",up_dog_2->get_name());
    }
    return 0;
}