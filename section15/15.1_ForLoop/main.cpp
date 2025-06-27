#include <iostream>

int main(int argc, char **argv)
{
    // for loop
    for (unsigned int i{0}; i < 10; ++i)
    {
        std::cout << i << "." << "My first for loop" << std::endl;
    }

    // Use size_t : a representation of some unsigned int for positive numbers [sizes]

    for (size_t i {0}; i < 10; ++i)
    {
        std::cout << i << " : I may love C++" << std::endl;
    }

    std::cout << "Loop is done!" << std::endl;

    // sizeof(size_t)
    std::cout << "sizeof(size_t) : " << sizeof(size_t) << std::endl;

    // Iterator declared outside of the loop
    size_t i {};
    for (i; i < 10; ++i)
    {
        std::cout << i << " : I may love C++" << std::endl;
    }
    std::cout << "i :" << i << std::endl;

    // Leave out the iterator declaration part
    size_t j {0}; // Iterator defined outside
    for (; j < 10; ++j)
    {
        std::cout << j << " : I may love C++" << std::endl;
    }
    std::cout << "j :" << j << std::endl;

    // Don't hard code values : BAD!
    const size_t COUNT {100};
    
    for (size_t i {0}; i < COUNT; ++i)
    {
        std::cout << i << " : I may love C++" << std::endl;
    }

    std::cout << "Loop is done!" << std::endl;


    return 0;
}
