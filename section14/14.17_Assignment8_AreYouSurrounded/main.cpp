#include <iostream>

int main(int argc, char **argv)
{
    int x_location {0};
    int y_location {0};
    int rectangleCenterX {0};
    int rectangleCenterY {0};
    int x_distance {0};
    int y_distance {0};
    int x_limit {10};
    int y_limit {5};
 
    std::cout << "Welcome to territory control. Please type in your x and y positions." << std::endl;
 
    std::cout << "Type in your x location : " << std::endl;
    std::cin >> x_location;
    std::cout << "Type in your y location : " << std::endl;
    std::cin >> y_location;

    x_distance = x_location - rectangleCenterX;
    if (x_distance < 0)
    {
        x_distance = rectangleCenterX - x_location;
    }
    y_distance = y_location - rectangleCenterY;
    if (y_distance < 0)
    {
        y_distance = rectangleCenterY - y_location;
    }

    if (x_distance <= x_limit && y_distance <= y_limit)
    {
        std::cout << "You are completely surrounded. Don't move!" << std::endl;
    }
    else
    {
        std::cout << "You're out of reach!" << std::endl;
    }
    return 0;
}
