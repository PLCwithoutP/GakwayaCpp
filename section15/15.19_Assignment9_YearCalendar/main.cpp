#include <iostream>
#include <iomanip>
int main(int argc, char **argv)
{
    int user_prompt_year {0};
    int user_prompt_day {0};
    int start_day {0};
    int check_month {0};
    int days_of_month {30};
    const size_t MAX_DAYS {41};
    bool loop_check {true};
    bool inner_loop_check {true};
    unsigned char user_cont_check {0};
    while (loop_check)
    {
        std::cout << std::endl;
        std::cout << "Enter a year : ";
        std::cin >> user_prompt_year;
        std::cout << "Enter the first day of the year [1: Monday, ... 7: Sunday]: ";
        std::cin >> user_prompt_day;
        if (user_prompt_day > 7 || user_prompt_day < 1)
        {
            std::cout << "Invalid day, try again!" << std::endl;
            continue;
        }
        
        switch (user_prompt_day)
        {
            case 1:
                start_day = 0;
                break;
            case 2:
                start_day = 1;
                break;
            case 3:
                start_day = 2;
                break;
            case 4:
                start_day = 3;
                break;
            case 5:
                start_day = 4;
                break;
            case 6:
                start_day = 5;
                break;
            case 7:
                start_day = 6;
                break;
            default:
                break;
        }
        std::cout << std::endl;
        std::cout << "Calendar for " << user_prompt_year << std::endl;
        while(inner_loop_check)
        {
            switch (check_month)
            {
            case 0:
                std::cout << "--January " << user_prompt_year << " --" << std::endl;
                check_month++;
                days_of_month = 31;
                break;
            case 1:
                std::cout << "--February " << user_prompt_year << " --" << std::endl;
                check_month++;
                if (user_prompt_year % 4 == 0)
                {
                    days_of_month = 29;    
                }
                else
                {
                    days_of_month = 28;
                }
                break;
            case 2:
                std::cout << "--March " << user_prompt_year << " --" << std::endl;
                check_month++;
                days_of_month = 31;
                break;
            case 3:
                std::cout << "--April  " << user_prompt_year << " --" << std::endl;
                check_month++;
                days_of_month = 30;
                break;
            case 4:
                std::cout << "--May " << user_prompt_year << " --" << std::endl;
                check_month++;
                days_of_month = 31;
                break;
            case 5:
                std::cout << "--June " << user_prompt_year << " --" << std::endl;
                check_month++;
                days_of_month = 30;
                break;
            case 6:
                std::cout << "--July " << user_prompt_year << " --" << std::endl;
                check_month++;
                days_of_month = 31;
                break;
            case 7:
                std::cout << "--August " << user_prompt_year << " --" << std::endl;
                check_month++;
                days_of_month = 31;
                break;
            case 8:
                std::cout << "--September " << user_prompt_year << " --" << std::endl;
                check_month++;
                days_of_month = 30;
                break;
            case 9:
                std::cout << "--October " << user_prompt_year << " --" << std::endl;
                check_month++;
                days_of_month = 31;
                break;
            case 10:
                std::cout << "--November " << user_prompt_year << " --" << std::endl;
                check_month++;
                days_of_month = 30;
                break;
            case 11:
                std::cout << "--December " << user_prompt_year << " --" << std::endl;
                check_month++;
                days_of_month = 31;
                break;
            default:
                inner_loop_check = false;
                break;
            }
            std::cout << std::setw(5) << "  Mon" << "  Tue" << "  Wed" << "  Thu" << "  Fri" << "  Sat" << "  Sun" << std::endl;
            for (size_t i {0}; i <= MAX_DAYS; i++)
            {
                if (i < start_day)
                {
                    std::cout << std::setw(5) << "     ";
                }
                else
                {
                    auto calendar_day = i - start_day + 1;
                    std::cout << std::setw(5) << calendar_day;
                    if (i % 7 == 6)
                    {
                        std::cout << std::endl;
                    }
                    if (auto calendar_day = i - start_day + 1; calendar_day == days_of_month)
                    {
                        auto end_day = i % 7;
                        start_day = (end_day + 1)%7;
                        std::cout << std::endl;
                        break;
                    }
                }
            }
            if (check_month > 11)
            {
                break;
            }
        }

        std::cout << std::endl;
        std::cout << "Do you want to continue ? (Y | N) ";
        std::cin >> user_cont_check;
        if ((user_cont_check != 'Y') && (user_cont_check != 'y'))
        {
            break;
        }
        inner_loop_check = true;
        check_month = 0;
    }
    

    return 0;
}
