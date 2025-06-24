#include <iostream>

int global_var {45};

int main(int argc, char **argv)
{
    bool green {false};

    global_var++; // 46
    if (green)
    {
        global_var++; // 47
        int car_count {23};
        std::cout << "The color is green" << car_count << " cars on the move!" << std::endl;
    }
    else
    {
        global_var++; // 47
        std::cout << "The color is not green. Y'all behave yourselves." << std::endl;
    }

    std::cout << "Global variable is : " << global_var << std::endl;
    
    return 0;
}
