#include "person.h"

Person::Person(const std::string& names_param, int age_param)
    : full_name {names_param}, age {age_param}
{ 
    ++person_count;
}

int Person::person_count = 8;