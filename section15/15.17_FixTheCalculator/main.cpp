#include <iostream>

int main(int argc, char **argv)
{
    char operation;
    double operand1;
    double operand2;
    bool end {false};

    std::cout << "Welcome to My Calculator" << std::endl;

    while((end == false))
    {
        // Do some processing
        std::cout << "---------------------------------------------------" << std::endl;
        std::cout << "What operation do you want help with?" << std::endl;
        std::cout << "+,-,* and / are supported. Please choose one and type below" << std::endl;
        std::cout << "Your operation : ";
        std::cin >> operation;

        if ((operation != '+') &&
            (operation != '-') &&
            (operation != '*') &&
            (operation != '/'))
        {
            std::cout << "operation " << operation << " NOT SUPPORTED!" << std::endl;
            continue;
        }

        std::cout << std::endl;
        std::cout << "Please type in your two operands separated by a space and hit enter. " << std::endl;
        std::cin >> operand1 >> operand2;
        std::cout << std::endl; 

        switch (operation)
        {
            case '+':
                std::cout << operand1 << " + " << operand2 << " = " << operand1 + operand2 << std::endl;
                break;
            case '-':
                std::cout << operand1 << " - " << operand2 << " = " << operand1 - operand2 << std::endl;
                break;
            case '*':
                std::cout << operand1 << " * " << operand2 << " = " << operand1 * operand2 << std::endl;
                break;
            case '/':
                std::cout << operand1 << " / " << operand2 << " = " << operand1 / operand2 << std::endl;
                break;
            default:
                std::cout << "Please enter a valid operand!" << std::endl;
                break;
        }
        std::cout << "Continue ? (Y | N) : ";

        char go_on {'N'};
        std::cin >> go_on;

        end = ((go_on == 'Y') || (go_on == 'y')) ? false : true;
    }

    std::cout << "Done helping out. BYE!" << std::endl;
    return 0;
}
