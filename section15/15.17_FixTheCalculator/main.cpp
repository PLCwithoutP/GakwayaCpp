#include <iostream>

int main(int argc, char **argv)
{
    int number1 {55};
    int number2 {60};

    bool result = (number1 < number2); // Expression yielding the condition
    /*
    std::cout << std::boolalpha << "result : " << result << std::endl;

    std::cout << std::endl;
    std::cout << "free standing if statement" << std::endl;

    // if (result){
    if (result == true) {
        std::cout << number1 << " is less than " << number2 << std::endl;
    }

    // if (!result){
    if (!(result == true))
    {
        std::cout << number1 << " is NOT less than " << number2 << std::endl;
    }
    */
    /*
    // Using else
    std::cout << std::endl;
    std::cout << "using the else clause : " << std::endl;

    if (result == true)
    {
        std::cout << number1 << " is less than " << number2 << std::endl;
    }
    else
    {
        std::cout << number1 << " is NOT less than" << number2 << std::endl;
    }
    */
    /*   
    if (number1 < number2)
    {
        std::cout << number1 << " is less than " << number2 << std::endl;
    }
    else
    {
        std::cout << number1 << " is NOT less than" << number2 << std::endl;
    }
    */
    // Nesting if statements
    std::cout << std::endl;
    std::cout << "Nesting if statements" << std::endl;

    bool red {false};
    bool yellow {false};
    bool green {true};
    bool police_stop {true};

    /*
    if (red)
    {
        std::cout << "Stop" << std::endl;
    }
    if (yellow)
    {
        std::cout << "Be ready" << std::endl;
    }
    if (green)
    {
        if (police_stop)
        {
            std::cout << "Stop" << std::endl;
        }
        else
        {
            std::cout << "Pass" << std::endl;
        }
    }
    */

    std::cout << std::endl;
    std::cout << "Police officer stops (less verbose)" << std::endl;
    if (green && !police_stop)
    {
        std::cout << "Go" << std::endl;
    }
    else
    {
        std::cout << "Stop" << std::endl;
    }
    return 0;
}
