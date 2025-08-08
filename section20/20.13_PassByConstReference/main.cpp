#include <iostream>

void say_age(const int& age);

int main(int argc, char **argv)
{
    int age{25}; // Local
    std::cout << "age (before call) : " << age << std::endl;
    say_age(age); // Argument
    std::cout << "age (after call) : " << age  << std::endl;
    return 0;
}

void say_age(const int& age)
{
    //++age; // Compiler error
    std::cout << "Hello, you are " << age << " years old. " << std::endl;
}