#include <iostream>
#include <typeinfo>
#include "exercise.h"

int main(int argc, char **argv)
{
    //char message[] {"Hello there"};
    char message[] {"12341234"};
    
    find_character(message, sizeof(message)/sizeof(char), 'o');


    return 0;
}
