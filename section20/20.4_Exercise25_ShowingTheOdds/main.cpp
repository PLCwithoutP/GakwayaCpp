#include <iostream>
#include <string>
#include <typeinfo>

void show_odds(unsigned long long int input);

int main(int argc, char **argv)
{
    show_odds(98723713);

    return 0;
}

void show_odds(unsigned long long int input)
{
    std::string input_string {std::to_string(input)};
    for (int i {input_string.size() - 1}; i > -1; i--)
    {
        int digit = std::stoi(std::string(1, input_string[i])); 
        if (( digit % 2) == 1)
        {
            std::cout << input_string[i];
        }
    }
    std::cout << std::endl;
}