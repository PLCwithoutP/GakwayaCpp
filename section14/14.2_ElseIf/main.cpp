#include <iostream>

// Tools
const int Pen {10};
const int Marker {20};
const int Eraser {30};
const int Rectangle {40};
const int Circle {50};
const int Ellipse {60};

int main(int argc, char **argv)
{
    int tool {Circle};

    if (tool == Pen)
    {
        std::cout << "Active tool is pen" << std::endl;
    }
    else if (tool == Marker)
    {
        std::cout << "Active tool is marker" << std::endl;
    }
    else if (tool == Eraser)
    {
        std::cout << "Active tool is eraser" << std::endl;
    }
    else if (tool == Rectangle)
    {
        std::cout << "Active tool is rectangle" << std::endl;
    }
    else if (tool == Circle)
    {
        std::cout << "Active tool is circle" << std::endl;
    }
    else if (tool == Ellipse)
    {
        std::cout << "Active tool is ellipse" << std::endl;
    }

    std::cout << "Moving on..." << std::endl;
    
    return 0;
}
