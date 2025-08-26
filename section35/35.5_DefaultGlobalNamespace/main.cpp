#include <iostream>

double add(double a, double b)
{
    return a + b;
}

namespace MyThing
{
    double add(double a, double b)
    {
        return a + b - 1;
    }

    void do_something()
    {
        double result = ::add(5,7); // calls from the global namespace
        std::cout << "result : " << result << std::endl;
    }
} // namespace MyThing


int main()
{
    MyThing::do_something();

    return 0;
}