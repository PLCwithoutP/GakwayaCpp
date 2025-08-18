#include <iostream>

const double PI {3.1415};

class Cylinder 
{
    public:
        // Constructors
        // Default constructor
        Cylinder() = default;

        Cylinder(double para_radius, double para_height)
        {
            base_radius = para_radius;
            height = para_height;
        }

        // Setter and getter methods
        double get_base_radius()
        {
            return base_radius;
        }

        double get_height()
        {
            return height;
        }

        void set_base_radius(double para_radius)
        {
            base_radius = para_radius;
        }

        void set_height(double para_height)
        {
            height = para_height;
        }

        // Functions (methods)
        double volume()
        {
            return PI * base_radius * base_radius * height;
        }

    private:
        // Member variables
        double base_radius {1};
        double height {1};
};

int main()
{
    auto print = [](auto input) -> void
    {
        std::cout << input << std::endl;
    };

    Cylinder cylinder1(2,3);
    // Compiler error, private members
    // Cannot be reached directly
/*     print(cylinder1.base_radius);
    print(cylinder1.height); */

    // Acceptable
    print("Cylinder1 height");
    print(cylinder1.get_height());
    print("Cylinder1 base radius");
    print(cylinder1.get_base_radius());
    print("Cylinder1 volume");
    print(cylinder1.volume());
    return 0;
}