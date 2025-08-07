#include <iostream>
#include <string>

bool is_palindrome(unsigned long long int num)
{
    std::string input_string {std::to_string(num)};
    std::string first_half {};
    std::string second_half {};
    size_t sizeOf = input_string.size();
    bool isItEven = (sizeOf % 2 == 0);
    if(isItEven)
    {
        for (size_t i {0}; i < sizeOf/2; i++)
        {
            first_half.append(std::string(1, input_string[i]));
        }  
        for (size_t i {sizeOf - 1}; i >= sizeOf/2; i--)
        {
            second_half.append(std::string(1, input_string[i]));
        }
    }
    else
    {
        for (size_t i {0}; i < sizeOf/2; i++)
        {
            first_half.append(std::string(1, input_string[i]));
        }  
        for (size_t i {sizeOf - 1}; i > sizeOf/2; i--)
        {
            second_half.append(std::string(1, input_string[i]));
        }
    }
    if (first_half == second_half)
    {
        return true;
    }
    else
    {
        return false;
    }
}