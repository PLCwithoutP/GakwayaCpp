#include <iostream>
#include <string>

// Tools
const int Pen {10};
const int Marker {20};
const int Eraser {30};
const int Rectangle {40};
const int Circle {50};
const int Ellipse {60};

int main(int argc, char **argv)
{
    int tool {Eraser};

    switch (double strength{3.56}; tool)
    {
    case Pen:
        {
            std::cout << "Active tool is Pen. strength : " <<  strength << std::endl;
        }
        break;
    
    case Marker:
        {
            std::cout << "Active tool is Marker. strength : " <<  strength << std::endl;
        }
        break;
    
    case Eraser:
        {
            std::cout << "Active tool is Eraser. strength : " <<  strength << std::endl;
        }
        break;
    
    case Rectangle:
        {
            std::cout << "Active tool is Rectangle. strength : " <<  strength << std::endl;
        }
        break;
    
    case Circle:
        {
            std::cout << "Active tool is Circle. strength : " <<  strength << std::endl;
        }
        break;
    
    case Ellipse:
        {
            std::cout << "Active tool is Ellipse. strength : " <<  strength << std::endl;
        }
        break;
    
    default:
        {
            std::cout << "No match found" << std::endl;
        }
        break;
    }
    return 0;
}
