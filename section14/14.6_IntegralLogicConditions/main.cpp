#include <iostream>

int main(int argc, char **argv)
{
    int condition {-3};

    bool bool_condition = condition;
    std::cout << std::boolalpha;

    if (bool_condition)
    {
        std::cout << "We have a " << bool_condition << " in our variable" << std::endl; // different than zero
    }
    else
    {
        std::cout << "We have " << bool_condition << " in our variable" << std::endl; // zero
    }
    return 0;
}
