#include <iostream>

int contains_character( const char* str , unsigned int size , char c)
{
    size_t position {};
    for (size_t i {}; i < size; i++)
    {
        if (str[i] == c)
        {
            position = i;
            return position;
        }
        else
        {
            position = -1;
        }
    }
    return position;
}

void find_character(const char* str, unsigned int size, char c)
{
    size_t position = contains_character(str, size, c);
    if (position != -1)
    {
        std::cout << "Found character " << c << " at index " << position;
    }
    else
    {
        std::cout << "Could not find the character " << c << " in " << str;
    }

}