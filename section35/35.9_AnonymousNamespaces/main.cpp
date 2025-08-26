#include <iostream>


namespace 
{
    double add(double a, double b);    
} // namespace


int main()
{
    double result = add(10,2); // Compiler error bc some_other_file.cpp namespace is not same as here
    std::cout << result << std::endl;

    return 0;
}

/* namespace 
{
    double add(double a, double b)
    {
        return a + b;
    }    
} */