#include <iostream>

void say_my_name (std::string_view name)
{
    std::cout << "Hello, your name is " << name << std::endl;
}

int main(int argc, char **argv)
{
    /* std::string some_name {"Halit"};
    say_my_name(some_name); */
    say_my_name("John");
    say_my_name(std::string_view("İbrahim"));
    say_my_name(std::string("Furkan"));
    return 0;
}
