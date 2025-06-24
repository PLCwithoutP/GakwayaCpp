#include <iostream>

int main(int argc, char **argv)
{
    int max{};
    int result{};
    int implicitResult{};
    int a{19};
    int b{20};

    std::cout << std::endl;
    std::cout << "using regular if " << std::endl;

    if (a > b)
    {
        max = a;
    }
    else
    {
        max = b;
    }

    std::cout << "max : " << max << std::endl;

    std::cout << "using ternary operator " << std::endl;

    result = (a > b ? a : b);
    
    std::cout << "result : " << result << std::endl;

    implicitResult = (a > b ? a : 38.5f);

    std::cout << "implicitResult : " << implicitResult << std::endl;

    auto implicitMaxAgain = (a > b ? a : 22.5f);
    std::cout << "implicitMaxAgain : " << implicitMaxAgain << std::endl;

    return 0;
}
