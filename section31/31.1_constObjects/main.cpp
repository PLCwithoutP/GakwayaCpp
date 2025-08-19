#include <iostream>
#include "dog.h"


int main()
{
    // Works without a hassle
/*     Dog dog1("Fluffy", "Shepherd", 2);
    
    dog1.print_info();
    
    dog1.set_name("Milou");
    
    dog1.print_info(); */

    // Direct Access
/*     const Dog dog2("mcFluffy", "mcShepherd", 1);
    dog2.print_info(); // Compiler error
    
    dog2.set_name("mcMilou"); // Compiler error
    
    dog2.print_info(); // Compiler error */
    
    const Dog dog2("mcFluffy", "mcShepherd", 1);

    // Pointer to non const
    //Dog *dog_ptr = &dog2; // Compiler error

    // Non const reference
    //Dog& dog_ref = dog2; // Compiler error
    
    // Pointer to const
    //const Dog* const_dog_ptr = &dog2; // Allows compile but doesn't allow to access
    
    //const_dog_ptr->set_name("Milou"); // Compiler error
    //const_dog_ptr->get_name(); // Compiler error
    
    // Const reference
    //const Dog& const_dog_ref = dog2; // Allows compile but doesn't allow to access
    
    //const_dog_ref.set_name("Milou"); // Compiler error
    //const_dog_ref.get_name(); // Compiler error
    
    return 0;
}