#include <iostream>

int main(int argc, char **argv)
{
    int user_prompt_day {0};
    
    std::cout << "Which day is today [1 : Monday, ... , 7 : Sunday]" << std::endl;
    std::cin >> user_prompt_day;

    switch (user_prompt_day)
    {
    case 1:
        std::cout << "Today is Monday. Let's have some fun." << std::endl;
        break;
    case 2:
        std::cout << "Today is Tuesday. Let's have some fun." << std::endl;
        break;
    case 3:
        std::cout << "Today is Wednesday. Let's have some fun." << std::endl;
        break;
    case 4:
        std::cout << "Today is Thursday. Let's have some fun." << std::endl;
        break;
    case 5:
        std::cout << "Today is Friday. Let's have some fun." << std::endl;
        break;
    case 6:
        std::cout << "Today is Saturday. Let's have some fun." << std::endl;
        break;
    case 7:
        std::cout << "Today is Sunday. Let's have some fun." << std::endl;
        break;
    default:
        std::cout << user_prompt_day << " is not a valid day. Bye !" << std::endl;
        break;
    }
    return 0;
}
