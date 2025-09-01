#include <iostream>
#include <memory>

#include "print.h"
#include "dog.h"

// Passing by value
void use_dog_v1(std::shared_ptr<Dog> dog)
{
    print2("shared_ptr passed by value, dog_name: ", dog->get_name());
    print2("use count in use_dog_v1 : ", dog.use_count());
}

// Passing by non-const reference
void use_dog_v2(std::shared_ptr<Dog>& dog)
{
    // Since no copy is made, we will not see the reference count increment here
    dog->set_dog_name("Riley");
    dog.reset(new Dog()); // Passed by non const ref
    print2("shared_ptr passed by non const ref, dog_name: ", dog->get_name());
    print2("use count in use_dog_v2 : ", dog.use_count());
}

// Passing by const reference
void use_dog_v3(const std::shared_ptr<Dog>& dog)
{
    // Since no copy is made, we will not see the reference count increment here
    dog->set_dog_name("Simy"); // We can change the dog object even though
                               // shared_ptr is passed by ref. The const protect the shared_ptr
                               // object itself, not the pointed to object
    //dog.reset(new Dog()); // Passed by const ref, Compiler error
    print2("shared_ptr passed by non const ref, dog_name: ", dog->get_name());
    print2("use count in use_dog_v3 : ", dog.use_count());
}

// Returning by value
// Returning a shared_ptr by value goes through return value optimization and at the
// end no copy is made, we have a single shared ptr with a reference count of 1,
// just like when we create a shared directly with make_shared
std::shared_ptr<Dog> get_shared_ptr_v1()
{
    std::shared_ptr<Dog> dog_ptr = std::make_shared<Dog>("Internal Dog_v1");
    print2("Managed dog address(in) :", dog_ptr.get());
    return dog_ptr;
}

// Returning shared_ptr by ref (const or non-const) is a recipe for disaster
// Don't do it
// Returning shared_ptr by reference does not properly increment the reference count,
// which opens up the risk of deleting something at the wrong time. We'll get a crash.
int main()
{
/*     // Passing by value. A copy will be made, increment the ref count in function body
    print("");
    print("Passing shared_ptr by value");

    std::shared_ptr<Dog> shared_ptr_dog_1 = std::make_shared<Dog>("Filler one");
    print2("shared_ptr_dog_1 use count(before)", shared_ptr_dog_1.use_count());
    use_dog_v1(shared_ptr_dog_1);

    print2("shared_ptr_dog_1 use count(after)", shared_ptr_dog_1.use_count());
    
    // Passing by non const reference. 
    // No copy will be made, no increment the ref count in function body
    print("");
    print("Passing shared_ptr by non-const ref");

    std::shared_ptr<Dog> shared_ptr_dog_2 = std::make_shared<Dog>("Filler one");
    print2("shared_ptr_dog_2 use count(before)", shared_ptr_dog_2.use_count());
    use_dog_v2(shared_ptr_dog_2);

    print2("shared_ptr_dog_2 use count(after)", shared_ptr_dog_2.use_count());
    
    // Passing by const reference. 
    // No copy will be made, no increment the ref count in function body
    print("");
    print("Passing shared_ptr by const ref");

    std::shared_ptr<Dog> shared_ptr_dog_3 = std::make_shared<Dog>("Filler one");
    print2("shared_ptr_dog_3 use count(before)", shared_ptr_dog_3.use_count());
    use_dog_v3(shared_ptr_dog_3);

    print2("shared_ptr_dog_3 use count(after)", shared_ptr_dog_3.use_count()); */


    // Returning by value
    // Returning a shared_ptr by value goes through return value optimization and at the
    // end no copy is made, we have a single shared ptr with a reference count of 1,
    // just like when we create a shared directly with make_shared
    std::shared_ptr<Dog> shared_ptr_dog_4 = get_shared_ptr_v1();
    print2("Managed dog address (out) :", shared_ptr_dog_4.get());
    print2("shared_ptr_dog_4 use count :", shared_ptr_dog_4.use_count());
    return 0;
}