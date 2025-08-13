#include <iostream>

int max(int a, int b)
{
    std::cout << "int overload is called " << std::endl;
    return (a > b) ? a : b;
}

// Compiler error
/* double max(int a, int b)
{
    return (a > b) ? a : b;
} */

double max(double a, double b)
{
    std::cout << "double overload is called " << std::endl;
    return (a > b) ? a : b;
}

double max(int a, double b)
{
    std::cout << "int-double overload is called " << std::endl;
    return (a > b) ? a : b;
}

double max(double a, int b)
{
    std::cout << "double-int overload is called " << std::endl;
    return (a > b) ? a : b;
}

double max(double a, int b, int c)
{
    std::cout << "double-int-int overload is called " << std::endl;
    return (a > b) ? a : b;
}

std::string_view max(std::string_view a, std::string_view b)
{
    std::cout << "std::string_view overload is called " << std::endl;
    return (a > b) ? a : b;
}

int main()
{
    int x{4};
    int y{9};
    double a{4.5};
    double b{9.9};
    auto result1 = max(x,y);
    auto result2 = max(a,b);
    auto result3 = max(x,b);
    auto result4 = max(a,y);
    auto result5 = max(a,y,x);

    max("Elden", "Ring");

    return 0;
}