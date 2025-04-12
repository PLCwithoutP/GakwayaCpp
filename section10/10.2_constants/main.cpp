#include <iostream>


int main()
{
    const int age {34};
    const float height {1.63f};
    int years {age * 3};

    // const int age; // Compiler error
    // age = 55; // Compiler error
    // height = 1.75; // Compiler error

    std::cout << " age : " << age << std::endl;
    std::cout << " height : " << height << std::endl;
    std::cout << " years : " << years << std::endl;
    
    return 0;
}