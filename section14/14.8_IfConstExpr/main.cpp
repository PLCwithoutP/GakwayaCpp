#include <iostream>

int main(int argc, char **argv)
{
    constexpr bool condition {false};

    if constexpr (condition)
    {
        std::cout << "Condition is true" << std::endl;
    }
    else
    {
        std::cout << "Condition is false" << std::endl;
    }
    return 0;
}
