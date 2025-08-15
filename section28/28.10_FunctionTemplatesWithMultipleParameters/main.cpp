#include <iostream>

// Problematic
/* template <typename T, typename P>
T maximum(T a, P b)
{
    return (a > b) ? a : b;
} */

//template <typename T, typename returnType, typename P> // less flexable
//template <typename T, typename P, typename returnType> // least flexable
template <typename returnType, typename T, typename P>
returnType maximum(T a, P b)
{
    return (a > b) ? a : b;
}

int main()
{
    int a {5};
    double b {6.7};
    
    auto result = maximum<int, int, double>(a,b);
    std::cout << "sizeof(result) : " << sizeof(result) << std::endl; // 4
    return 0;
}