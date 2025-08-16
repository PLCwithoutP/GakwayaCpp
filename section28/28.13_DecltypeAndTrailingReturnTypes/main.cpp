#include <iostream>
#include "headers.h"

/* // Can be divided between declaration and definition now
template <typename T, typename P>
auto maximum(T a, P b) -> decltype((a > b) ? a : b); */

/* // Works
template <typename T, typename P>
auto maximum(T a, P b) -> decltype((a > b) ? a : b)
{
    return (a > b) ? a : b;
} */

/* // Won't be compiled, error
template <typename T, typename P>
decltype((a > b) ? a : b) maximum(T a, T b)
{
    return (a > b) ? a : b;
} */

int main()
{
    auto result = add(11,22ul);
    std::cout << "result : " << result << std::endl;
/*     // decltype
    int a {5};
    char b {7};

    std::cout << "size : " << sizeof(decltype((a > b) ? a : b)) << std::endl;

    decltype((a > b) ? a : b) c {7};
    std::cout << "c : " << c << std::endl;
    std::cout << "sizeof(c) : " << sizeof(c) << std::endl;
    
    auto result = maximum(a,b);
    std::cout << "result : " << result << std::endl;
    std::cout << "sizeof(result) : " << sizeof(result) << std::endl; */

    return 0;
}

template <typename T, typename P>
auto maximum(T a, P b) -> decltype((a > b) ? a : b)
{
    return (a > b) ? a : b;
}