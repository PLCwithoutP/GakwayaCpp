#include <iostream>


int main()
{
    double length {};
    double width {};
    double height {};

    std::cout << "Welcome to box calculator. Please type in length, width and height information : " << std::endl;
    std::cout << "lenght : ";
    std::cin >> length;
    std::cout << "width : ";
    std::cin >> width;
    std::cout << "height : ";
    std::cin >> height;

    double base_area {};
    double volume {};

    base_area = width * length;
    volume = base_area * height;
    
    std::cout << "The base area is : " << base_area << std::endl;
    std::cout << "The volume is : " << volume << std::endl;
    
    return 0;
}