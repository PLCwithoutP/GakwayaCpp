#include <iostream>

const double PI {3.1415};

class Cylinder 
{
    public:
        // Constructors
        /* Cylinder()
        {
            base_radius = 2.0;
            height = 2.0;
        } */

        // Default constructor
        Cylinder() = default;

        Cylinder(double p_radius, double p_height)
        {
            base_radius = p_radius;
            height = p_height;
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
    // Compiler error because there is no default constructor
    // Cylinder cylinder1;
    
    // Now we have default constructor
    Cylinder cylinder1;
    
    std::cout << "volume : " << cylinder1.volume() << std::endl;

    return 0;
}