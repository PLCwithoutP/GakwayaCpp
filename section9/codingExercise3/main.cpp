#include <iostream>
#include <cmath> 

int main()
{
    double coefficient {};
    coefficient = 3 * std::sqrt(3) / 2;
    double side_length {6.7};
    double hex_area = coefficient * std::pow(side_length,2);
    std::cout << "Hexagonal area for 6.7 units side length is : " << hex_area << std::endl;

    return 0;
}