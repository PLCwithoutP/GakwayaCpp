#include <iostream>

int main(int argc, char **argv)
{
    // No if initializer
    int speed {10};

    bool go {false};

    if (go)
    {
        if(speed < 5)
        {
            std::cout << "speed : " << speed << std::endl;
            std::cout << "Slow down!" << std::endl;
        }
        else
        {
            std::cout << "speed : " << speed << std::endl;
            std::cout << "All good :)" << std::endl;
        }
    }
    else
    {
        std::cout << "speed : " << speed << std::endl;
        std::cout << "Stop" << std::endl;
    }


    if (int high_speed {20}; go)
    {
        if(high_speed < 5)
        {
            std::cout << "speed : " << high_speed << std::endl;
            std::cout << "Slow down!" << std::endl;
        }
        else
        {
            std::cout << "speed : " << high_speed << std::endl;
            std::cout << "All good :)" << std::endl;
        }
    }
    else
    {
        std::cout << "speed : " << high_speed << std::endl;
        std::cout << "Stop" << std::endl;
    }
    return 0;
}
