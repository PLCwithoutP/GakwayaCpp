#include <iostream>

int main(int argc, char **argv)
{
    for (size_t i{}; i < 100; ++i)
    {
        //std::cout << "i : " << i << std::endl;
    }
    std::cout << "Done!" << std::endl;

    size_t i{0}; // Iterator
    while (i < 10000)
    {
        //std::cout << "i : " << i << std::endl;
        ++i;
    }
    std::cout << "Done !" << std::endl;
    return 0;
}
