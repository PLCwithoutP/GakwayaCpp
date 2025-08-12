#include <iostream>

consteval int get_value(int multiplier)
{
    return 3 * multiplier;
}

int main(int argc, char **argv)
{
    // Must be literal to be evaluated at compile time
    int val1 = get_value(5);
    std::cout << "Result is : " << val1 << std::endl;
/* 
    int val2 {6};
    int result = get_value(val2); // Compiler error */
    return 0;
}
