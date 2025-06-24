#include <iostream>

int main(int argc, char **argv)
{
    int year {2012};
    bool is_leap {};
    if (year % 4 == 0)
    {
        is_leap = true;
        std::cout << "This is a leap year" << std::endl;
    }
    else
    {
        is_leap = false;
        std::cout << "This is not a leap year" << std::endl;
    }
    return 0;
}
