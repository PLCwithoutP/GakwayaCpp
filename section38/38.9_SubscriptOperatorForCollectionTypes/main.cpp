#include <iostream>
#include "print.h"
#include "scores.h"

int main()
{
/*     Scores math("Math");
    math.print_info();

    math[5] = 66.4;
    math.print_info();

    for(size_t i{}; i < 20; ++i)
    {
        if (i == 0)
        {
            math[0] = 73.7;
        }
        else
        {
            math[i] = math[i - 1] + 0.56;
        }
    }

    math.print_info(); */

    // Const object
    const Scores geo("Geography");
    print2("geo[5] : ", geo[5]);
    return 0;
}
