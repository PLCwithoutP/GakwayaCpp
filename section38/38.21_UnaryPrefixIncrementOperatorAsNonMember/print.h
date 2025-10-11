#include <iostream>

auto print = [](auto thing)
{
    std::cout << thing << std::endl;
};

auto print2 = [](auto thing1, auto thing2)
{
    std::cout << thing1 << " " << thing2 << std::endl;
};