#include <iostream>
#include <memory>

#include "print.h"
#include "dog.h"
#include "person.h"

int main()
{
/*     // Playing with basic use of weak_ptr
    std::shared_ptr<Dog> shared_ptr_dog_1 = std::make_shared<Dog>("Dog1");
    std::shared_ptr<int> shared_ptr_int_1 = std::make_shared<int>(200);

    std::weak_ptr<Dog> weak_ptr_dog_1 (shared_ptr_dog_1);
    std::weak_ptr<int> weak_ptr_int_1 (shared_ptr_int_1); */

/*     // No *, or -> operators you would expect from regular pointers
    // std::cout << "weak_ptr_dog_1 use count : " << weak_ptr_dog_1.use_count() << std::endl;
    print2("Dog name :", weak_ptr_dog_1->get_name()); // Compiler error : no -> operator
    print2("Pointed to value :", *weak_ptr_int_1); // Compiler error : no * operator
    print2("Pointed to address :", weak_ptr_dog_1.get()); // Compiler error : no get() method */

/*     // To use a weak ptr you have to turn it into a shared_ptr with the lock method
    print("");
    std::shared_ptr<Dog> weak_turned_shared = weak_ptr_dog_1.lock();
    print2("weak_turned_shared use count :", weak_turned_shared.use_count());
    print2("Dog name(weak-to-shared) :", weak_turned_shared->get_name());
    print2("Dog name(shared_ptr) :", shared_ptr_dog_1->get_name()); */

    // Cycling dependency problem
    // Circular dependencies
    std::shared_ptr<Person> person_a = std::make_shared<Person>("Alison");
    std::shared_ptr<Person> person_b = std::make_shared<Person>("Beth");

    person_a->set_friend(person_b);
    person_b->set_friend(person_a);

    return 0;
}