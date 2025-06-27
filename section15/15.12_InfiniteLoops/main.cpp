#include <iostream>

int main(int argc, char **argv)
{
    // Infinite loop : for loop
    for (size_t i {}; ; ++i)
    {
        std::cout << i << std::endl;
    }

    // Infinite loop : while loop
    size_t i {0};
    while (true)
    {
        std::cout << i << std::endl;
        i++;
    }

    // Infinite loop : do-while loop
    do
    {
        std::cout << i << std::endl;
        i++;
    }
    while (true);
    return 0;
}
