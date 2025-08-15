#include <string>

template <typename T, typename P> 
std::string concatenate(T input1, P input2)
{
    return (std::to_string(input1) + std::to_string(input2));
} 