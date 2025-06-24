#include <iostream>

int main(int argc, char **argv)
{
    int user_prompt {0};

    std::cout << "Please type in an integral value : " << std::endl;
    std::cin >> user_prompt;

    if (user_prompt % 2 == 0)
    {
        std::cout << user_prompt <<" is even" << std::endl;
    }
    else
    {
        std::cout << user_prompt <<" is odd" << std::endl;
    }
    return 0;
}
