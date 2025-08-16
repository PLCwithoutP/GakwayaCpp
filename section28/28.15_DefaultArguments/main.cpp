#include <iostream>

template <typename ReturnType = double, typename T, typename P>
ReturnType maximum(T a, P b)
{
    return (a > b) ? a : b;
}

template <typename T, typename P, typename ReturnType>
ReturnType minimum(T a, P b)
{
    return (a < b) ? a : b;
}

int main()
{
    int a {5};
    double b {8};
    auto result = maximum(a,b);
    std::cout << "result : " << result << std::endl;
    std::cout << "sizeof(result) : " << sizeof(result) << std::endl;
    
    auto result_min = minimum<int,int,double>(a,b);
    std::cout << "result : " << result_min << std::endl;
    std::cout << "sizeof(result) : " << sizeof(result_min) << std::endl;

    return 0;
}