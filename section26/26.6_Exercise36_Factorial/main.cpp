#include <iostream>

unsigned int factorial(unsigned int n)
{
    if (n != 1)
    {
        return n * factorial(n - 1);
    }
    else
    {
        return 1;
    }
}

int main()
{
    std::cout << "result : " << factorial(4) << std::endl;
    
    return 0;
}