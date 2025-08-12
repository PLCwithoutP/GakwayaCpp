#include <iostream>

// Marking a function as constexpr gives it the potential
// to be evaluated at compile time
constexpr int get_value(int multiplier)
{
    return 3 * multiplier;
}

int main(int argc, char **argv)
{
    // Compile time calculation
    constexpr int result = get_value(4);
    std::cout << "Result is : " << result << std::endl;

    // Run time calculation
    int b {6};
    int result_another = get_value(b);
    std::cout << "Result is : " << result_another << std::endl;
    return 0;
}
