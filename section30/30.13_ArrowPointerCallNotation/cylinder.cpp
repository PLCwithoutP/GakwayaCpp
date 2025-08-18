#include "cylinder.h"

Cylinder::Cylinder(double para_radius, double para_height)
        {
            base_radius = para_radius;
            height = para_height;
        }

double Cylinder::volume()
        {
            return PI * base_radius * base_radius * height;
        }

double Cylinder::get_base_radius()
{
    return base_radius;
}

double Cylinder::get_height()
{
    return height;
}

void Cylinder::set_base_radius(double para_radius)
{
    base_radius = para_radius;
}

void Cylinder::set_height(double para_height)
{
    height = para_height;
}
