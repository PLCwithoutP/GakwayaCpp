#include <iostream>

int main(int argc, char **argv)
{
    int user_prompt_age {0};

    std::cout << "Please type in your age : " << std::endl;
    std::cin >> user_prompt_age;

    if (user_prompt_age >= 21)
    {
        if (user_prompt_age <= 39)
        {
            std::cout << "You are eligible for the treatment" << std::endl;
        }
        else
        {
            std::cout << "Sorry, you are too old for the treatment" << std::endl;
        }
    }
    else
    {
        std::cout << "Sorry, you are too young for the treatment" << std::endl;
    }
    return 0;
}
