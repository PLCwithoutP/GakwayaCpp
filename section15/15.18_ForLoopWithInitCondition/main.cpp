#include <iostream>

int main(int argc, char **argv)
{
    // Range based for loop with initializer
    for (auto multiplier2 {4}; int value : {1,2,3,4,5,6,7,8,9,10})
    {
        // value holds a copy of the current iteration in the whole bag
        std::cout << " result : " << (value * multiplier2) << std::endl;
    }

    // Error : multiplier2 is not in scope here
    // std::cout << "multiplier2 : " << multiplier2 << std::endl;
    
    return 0;
}
