#include <iostream>



int main()
{
    // Classicial lambda
/*     auto func = [](auto a, auto b)
    {
        return a + b;
    }; */
    
    // Templated lambda functions
    // Valid after C++-20
/*     auto func = []<typename T>(T a, T b)
    {
        return a + b;
    }; */

    auto func = []<typename T, typename P>(T a, P b)
    {
        return a + b;
    };

    std::cout << func(10, 'c') << std::endl;

    return 0;
}