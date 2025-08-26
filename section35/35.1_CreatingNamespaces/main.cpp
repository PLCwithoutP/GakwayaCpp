#include <iostream>

const double adjustment {0.725};

namespace Adjust
{
    double add(double x, double y);
} // namespace Adjust

namespace NoAdjust
{
    double add(double x, double y);
} // namespace NoAdjust


int main()
{
    auto print = [](auto thing)
    {
        std::cout << thing << std::endl;
    };

    double a = NoAdjust::add(2.0,3.0);
    print("No Adjust Add");
    print(a);

    double b = Adjust::add(2.0,3.0);
    print("Adjust Add");
    print(b);
    return 0;
}

namespace NoAdjust
{
    double add(double x, double y)
    {
        return x + y;
    }
}

namespace Adjust
{
    double add(double x, double y)
    {
        return x + y - adjustment;
    }    
}