#include <iostream>

int main(int argc, char **argv)
{
    int sum {};

    for (size_t i {0}; i < 100; ++i)
    {
        sum = sum + i;
    }
    std::cout << "sum : " << sum << std::endl;

    return 0;
}
