#include <iostream>

// Cannot be divided into definition and declarations
template <typename T, typename P>
decltype(auto) maximum(T a, P b)
{
    return (a > b) ? a : b;
}

int main()
{
    int x {5};
    double y {32.5};

    auto result = maximum(x,y);
    std::cout << "max : " << result << std::endl;
    std::cout << "sizeof(max) : " << sizeof(result) << std::endl;
    return 0;
}