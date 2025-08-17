#include <iostream>

const double PI {3.1415926535897932384626433832795};

class Cylinder
{
    public:
        double volume()
        {
            return PI * base_radius * base_radius * height;
        }

    public:
        double base_radius {1};
        double height {1};
};

int main()
{
    auto print = [](auto print) -> void
    {
        std::cout << print << std::endl;
    };
    
    Cylinder cylinder1; // Object created from class 
    print("Volume : ");
    print(cylinder1.volume());

    // Change the member variables
    cylinder1.base_radius = 10;
    cylinder1.height = 3;

    print("New Volume : ");
    print(cylinder1.volume());

    return 0;
}