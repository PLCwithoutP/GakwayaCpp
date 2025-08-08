#include <iostream>

void say_age(const int const *age);

int main(int argc, char **argv)
{
    int age{25}; // Local
    std::cout << "age (before call) : " << age << " &age : "  << &age << std::endl;
    say_age(&age); // Argument
    std::cout << "age (after call) : " << age << " &age : "  << &age << std::endl;
    return 0;
}

void say_age(const int const *age)
{
    // ++(*age); not changable
    std::cout << "Hello, you are " << *age << " years old. " << " &age(argument) : "  << age << std::endl;
    //age = &dog_count; // not assignable, compiler error
}