#include <iostream>

int main(int argc, char **argv)
{
    const size_t COUNT {20};

    // break and continue
    /*
    // For loop
    for (size_t i{0}; i < COUNT; ++i)
    {
        if (i == 16)
        {
            break;
        }

        if (i == 5)
        {
            continue;
        }
        std::cout << "i : " << i << std::endl;
    }
    std::cout << "Loop done!" << std::endl;
    */
    /*
    // While loop
    size_t i{0};

    while (i < COUNT)
    {
        if (i == 16)
        {
            break;
        }

        if (i == 5)
        {
            ++i;
            continue;
        }
        std::cout << "i : " << i << std::endl;
        ++i;
    }
    */
    // Do-while loop
    size_t i{0};

    do
    {
        if (i == 16)
        {
            break;
        }

        if (i == 5)
        {
            ++i;
            continue;
        }
        std::cout << "i : " << i << std::endl;
        ++i;
    }
    while (i < COUNT);
    return 0;
}
