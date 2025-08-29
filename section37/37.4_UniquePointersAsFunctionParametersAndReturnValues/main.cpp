#include <iostream>
#include <memory>
#include "dog.h"
#include "person.h"

void do_something_with_dog_v1(std::unique_ptr<Dog> d)
{
    d->print_info();
}

void do_something_with_dog_v2(const std::unique_ptr<Dog>& d)
{
    d->set_dog_name("Rior");
    d->print_info();
    //d.reset(); // Compiler error
}


std::unique_ptr<Dog> get_unique_ptr()
{
    std::unique_ptr<Dog> p_dog = std::make_unique<Dog>("Function Local");
    std::cout << "unique_ptr address in function : " << &p_dog << std::endl;
    return p_dog; // The compiler does some optimizations and doesn't return a copy
                  // here, it's returning something like a reference to the local object
                  // We can prove this by looking at the address of objects in memory
                  // This is not standard behaviour, some compilers may actually return
                  // by value by making a copy. The compilers have some freedom to choose
                  // their own way to do things.
}
int main()
{
    auto print = [](auto info)
    {
        std::cout << info << std::endl;
    };

/*     // Passing unique ptr to functions by value
    std::unique_ptr<Dog> p_dog_1 = std::make_unique<Dog>("Dog1");

    // Can't pass unique_ptr by value to a function
    // Copies are not allowed for unique_ptr
    //do_something_with_dog_v1(p_dog_1); // copy detected, compiler error
    
    do_something_with_dog_v1(std::move(p_dog_1)); // Ownership will move to the body
                                                  // of the function and memory will be
                                                  // released when function returns.
                                                  // Not what you typically want. 

    print("p_dog_1 : ");
    print(p_dog_1.get());
    print("Hitting the main function now");
    print("---------------------------------");

    std::unique_ptr<Dog> p_dog_2 = std::make_unique<Dog>("Mercy");

    Person person1("John");
    person1.adopt_dog(std::move(p_dog_2)); // The same behaviour when function is part of the class
    print("Doing something, p_dog_2 points to");
    print(p_dog_2.get());
    print("---------------------------------");

    // An implicit move is done when object is created in place as a temporary
    do_something_with_dog_v1(std::make_unique<Dog>("Temporary Dog"));
    print("delimiter");
    print("---------------------------------");

    // Can pass the std::unique_ptr parameter by reference
    std::unique_ptr p_dog_3 = std::make_unique<Dog>("Azman");
    p_dog_3->print_info();
    do_something_with_dog_v2(p_dog_3);
    print("delimiter");
    p_dog_3->print_info();

    // Return unique ptr from function by value
    std::unique_ptr<Dog> p_dog_4 = get_unique_ptr();
    print("---------------------------------");
    print("unique_ptr address in main");
    print(&p_dog_4);
    p_dog_4->print_info(); */

    print("---------------------------------");
    get_unique_ptr()->print_info(); // Temporary unique_ptr, will be destroyed at the end of full expression
    print("function done");
    return 0;
}