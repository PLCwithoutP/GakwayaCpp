#include <iostream>

int main(int argc, char **argv)
{
    /* int * data = new int[10000000000000000]; */

/*     for (size_t i {}; i < 10000000; i++)
    {
        int * data = new int [10000000000000000];
    } */

    /* // exception
    for (size_t i {}; i < 10000000; i++)
    {
        try
        {
            int * data = new int [10000000000000000];
        }
        catch(const std::exception& e)
        {
            std::cerr << e.what() << '\n';
            break;
        }
    } */

    // std::nothrow
    for (size_t i {}; i < 10000000; i++)
    {
        int * data = new(std::nothrow) int [10000000000000000];
        if (data != nullptr)
        {
            std::cout << "Data allocated!" << std::endl;
        }
        else
        {
            std::cout << "Data allocation failed!" << std::endl;
            break;
        }
    } 
    std::cout << "Program ending well" << std::endl;
    return 0;
}
