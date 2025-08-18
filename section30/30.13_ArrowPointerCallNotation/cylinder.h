#ifndef CYLINDER_H
#define CYLINDER_H

#include "constants.h"

class Cylinder 
{
    public:
        // Constructors
        // Default constructor
        Cylinder() = default;
        Cylinder(double para_radius, double para_height);

        // Setter and getter methods
        double get_base_radius();
        double get_height();
        void set_base_radius(double para_radius);
        void set_height(double para_height);

        // Functions (methods)
        double volume();

    private:
        // Member variables
        double base_radius {1};
        double height {1};
};

#endif