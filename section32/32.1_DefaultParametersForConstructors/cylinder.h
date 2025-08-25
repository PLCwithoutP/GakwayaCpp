#ifndef CYLINDER_H
#define CYLINDER_H

const double PI {3.141592};

class Cylinder
{
    public:
        // Constructors
        //Cylinder() = default; // When there are two default parameters, this is going to be a compiler error
        //Cylinder(double rad_param = 3, double height_param); // We need to specify both parameters or nothing
                                                               // otherwise compiler error 
        //Cylinder(double rad_param, double height_param = 20);
        Cylinder(double rad_param = 1, double height_param = 2);

        // Functions
        double volume();

        // Setter and getter methods
        double get_base_radius();
        double get_height();

        void set_base_radius(double rad_param);
        void set_height(double height_param);

    private:
        // Member variables
        double base_radius{1};
        double height{1};
};



#endif // CYLINDER_H