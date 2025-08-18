#include <iostream>
#include "dog.h"

int main()
{
    Dog dog1("Fluffy", "Shepherd", 2); // Constructor

    dog1.print_info();

    dog1.set_dog_name("Pluto");
    dog1.set_dog_breed("Wire Fox Terrier");
    dog1.set_dog_age(5);
    dog1.print_info();

    Dog dog2("Boncuk", "German Shepherd", 10); // Constructor
    dog2.set_dog_name_chain("Booncuk")->set_dog_age_chain(11)->set_dog_breed_chain("Old German Shepherd");
    dog2.print_info();

    Dog dog3("Generic", "generic", 5); // Constructor
    dog3.set_dog_name_ref_chain("Mucurcuk").set_dog_breed_ref_chain("Anatolian Shepherd").set_dog_age_ref_chain(12);
    dog3.print_info();
    
    std::cout << "Done!" << std::endl;
    // Destructor
    return 0;
}