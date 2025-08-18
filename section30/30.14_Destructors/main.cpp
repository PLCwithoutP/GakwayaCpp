#include <iostream>
#include "dog.h"

int main()
{
    Dog your_dog("Mucur", "Anatolian Shepherd", 3);
    some_func();
    /* some_other_func(your_dog); */
    some_unc();
    
    Dog my_dog("Boncuk", "German Shepherd", 5);

    std::cout << "Done!" << std::endl;
    return 0;
}