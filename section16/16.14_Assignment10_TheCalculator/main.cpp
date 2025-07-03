#include <iostream>
#include <ctime>

int main(int argc, char **argv)
{
    // srand() has to run at least once for seeding purposes
    std::srand(std::time(0));

    std::cout << "Welcome to the greatest calculator on Earth!" << std::endl;

    char operations[][2]
    {
        "+",
        "-",
        "*"
    };
    bool end_check {false};

    while(!end_check)
    {
        size_t randomNum1 = static_cast<size_t>((std::rand() % 200));
        size_t randomNum2 = static_cast<size_t>((std::rand() % 200));
        size_t randomOperation = static_cast<size_t>((std::rand() % 3));
    
        int user_input {};
        int correct_result {};

        std::cout << "What's the result of " << randomNum1 << " " << operations[randomOperation] << " " << randomNum2 << " : ";
        std::cin >> user_input;
        switch (randomOperation)
        {
        case 0:
            correct_result = randomNum1 + randomNum2;
            break;
        case 1:
            correct_result = randomNum1 - randomNum2;
            break;
        case 2:
            correct_result = randomNum1 * randomNum2;
            break;
        default:
            break;
        }
        if (correct_result == user_input)
        {
            std::cout << "Congratulations! You got the result " << correct_result << " right!" << std::endl;
        }
        else
        {
            std::cout << "Naah! the correct result is : " << correct_result << std::endl;
        }
        
        std::cout << "Do you want me to try again ? ( Y | N )" << std::endl;

        char go_on;
        std::cin >> go_on;

        end_check = ((go_on == 'Y') || (go_on == 'y')) ? false : true;
    }
    std::cout << "See you later!" << std::endl;
    return 0;
}
