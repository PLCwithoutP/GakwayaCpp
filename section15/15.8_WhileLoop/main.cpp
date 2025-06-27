#include <iostream>

int main(int argc, char **argv)
{
    const size_t COUNT {10};
    size_t i {0};
    while (i < COUNT) // test
    {
        std::cout << i << " : I love C++" << std::endl;
        ++i; // increase
    }

    std::cout << "Loop done!" << std::endl;
    return 0;
}
