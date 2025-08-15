#include <iostream>

template <typename T> T maximum(T a, T b);
//template <typename T> const T& maximum(const T& a, const T& b);

int main()
{
    double a {13.5};
    double b {52.5};

    std::cout << "Out - &a : " << &a << std::endl;    
    auto result = maximum(a,b);
    std::cout << "Out - &a : " << &a << std::endl;
    return 0;
}

template <typename T> const T& maximum(const T& a, const T& b)
{
    std::cout << "In - &a : " << &a << std::endl;
    return (a > b) ? a : b;
}

/* // Pass by value overload - Compiler error
template <typename T> T maximum(T a, T b)
{
    std::cout << "In - &a : " << &a << std::endl;
    return (a > b) ? a : b;
} */