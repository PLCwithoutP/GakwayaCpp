#include <iostream>

int main(int argc, char **argv)
{
    const int COUNT {10};
    size_t i {0};

    do
    {
        std::cout << i << " : I love C++" << std::endl;
        ++i;
    } while (i < COUNT);
    
    std::cout << "Loop done!" << std::endl;

    return 0;
}
