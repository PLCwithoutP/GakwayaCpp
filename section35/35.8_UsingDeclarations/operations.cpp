#include "operations.h"
#include <iostream>

const double adjustment {0.7234};

namespace Math
{
    double add(double a, double b)
    {
        std::cout << "Math::" << std::endl;
        return a + b;
    }
    double sub(double a, double b)
    {
        std::cout << "Math::" << std::endl;
        return a - b;
    }
    double mult(double a, double b)
    {
        std::cout << "Math::" << std::endl;
        return a * b;
    }
    double div(double a, double b)
    {
        std::cout << "Math::" << std::endl;
        return a / b;
    }
}

namespace Math_Weighted
{
    double add(double a, double b)
    {
        std::cout << "Math_Weighted::" << std::endl;
        return a + b - adjustment;
    }
    double sub(double a, double b)
    {
        std::cout << "Math_Weighted::" << std::endl;
        return a - b - adjustment;
    }
    double mult(double a, double b)
    {
        std::cout << "Math_Weighted::" << std::endl;
        return a * b - adjustment;
    }
    double div(double a, double b)
    {
        std::cout << "Math_Weighted::" << std::endl;
        return a / b - adjustment;
    }
}