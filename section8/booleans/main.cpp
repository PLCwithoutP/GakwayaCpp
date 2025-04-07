#include <iostream>

int main(){
    
    bool red_light {true};
    bool green_light {false};

    if (red_light == true)
    {
        std::cout << "Stop!" << std::endl;
    }
    else
    {
        std::cout << "Go through!" << std::endl;
    }

    if (green_light)
    {
        std::cout << "The light is green!" << std::endl;
    }
    else
    {
        std::cout << "The light is not green!" << std::endl;
    }

    // Printing out a bool
    // 1 --> true
    // 0 --> false
    std::cout << std::endl;
    std::cout << "red_light : " << red_light << std::endl;
    std::cout << "green_light : " << green_light << std::endl;
    std::cout << "sizeof(red_light) : " << sizeof(red_light) << " bytes" << std::endl;

    return 0;
}