#include <iostream>

int main(int argc, char **argv)
{
    int user_prompt_day {0};
    int days_past {0};
    int real_day_check {0};
    std::cout << "Which day is today [1 : Monday, ... , 7 : Sunday]" << std::endl;
    std::cin >> user_prompt_day;

    if (user_prompt_day > 7 || user_prompt_day < 1)
    {
        std::cout << user_prompt_day << " is not a valid day. Bye!" << std::endl;
    }
    else
    {
        std::cout << "How many days have passed up to today :" << std::endl;
        std::cin >> days_past;
        real_day_check = days_past % 7;
        switch (int check = ((user_prompt_day + (7 - real_day_check)) % 7))
        {
        case 1:
            std::cout << "Today is Monday." << std::endl;
            break;
        case 2:
            std::cout << "Today is Tuesday." << std::endl;
            break;
        case 3:
            std::cout << "Today is Wednesday." << std::endl;
            break;
        case 4:
            std::cout << "Today is Thursday." << std::endl;
            break;
        case 5:
            std::cout << "Today is Friday." << std::endl;
            break;
        case 6:
            std::cout << "Today is Saturday." << std::endl;
            break;
        case 7:
            std::cout << "Today is Sunday." << std::endl;
            break;
        default:
            std::cout << "Unaccounted behaviour." << std::endl;
            break;
        }
    }
    return 0;
}
