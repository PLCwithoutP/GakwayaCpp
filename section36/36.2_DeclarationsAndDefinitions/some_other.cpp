#include "person.h"

// Definition - Linker searches for definitions
double add(double a, double b)
{
    return a + b;
}

int Person::person_count = 8;

Person::Person(const std::string& names_param, int age_param)
            : full_name {names_param}, age {age_param}
        {}