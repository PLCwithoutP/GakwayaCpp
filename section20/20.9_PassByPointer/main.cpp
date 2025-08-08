#include <iostream>

void say_age(int *age);

int main(int argc, char **argv)
{
    int age{25}; // Local
    std::cout << "age (before call) : " << age << " &age : "  << &age << std::endl;
    say_age(&age); // Argument
    std::cout << "age (after call) : " << age << " &age : "  << &age << std::endl;
    return 0;
}

void say_age(int *age)
{
    ++(*age);
    std::cout << "Hello, you are " << *age << " years old. " << " &age(argument) : "  << age << std::endl;
}