#include <iostream>

const double PI {3.1415926535897932384626433832795};

class Cylinder
{
    public:
        Cylinder() // Default constructor
        {
            base_radius = 2.0;
            height = 2.0;
        }
        Cylinder(double radius_parameter, double height_parameter)
        {
            base_radius = radius_parameter;
            height = height_parameter;
        }
        double volume()
        {
            return PI * base_radius * base_radius * height;
        }

    private:
        double base_radius {1};
        double height {1};
};

int main()
{
    auto print = [](auto input) -> void
    {
        std::cout << input << std::endl;
    };
    Cylinder cylinder1;
    print("Default volume is : ");
    print(cylinder1.volume());

    Cylinder cylinder2(10,4);
    print("Volume for cylinder2 is : ");
    print(cylinder2.volume());

    return 0;
}