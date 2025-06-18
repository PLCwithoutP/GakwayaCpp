#include <iostream>

int main()
{
    // Implicit cast will add up the doubles
    // then turn result into int for assignment

    double x {12.5};
    double y {34.6};

    int sum = x + y;

    std::cout << "The sum is : " << sum << std::endl;

    // Static cast
    // Explicitly cast : cast then sum up

    sum = static_cast<int>(x) + static_cast<int>(y);
    std::cout << "Cast then sum, result : " << sum << std::endl;

    sum = static_cast<int>(x + y);
    std::cout << "Sum then cast, result : " << sum << std::endl;

    // Old style C-cast
    double PI {3.14};

    int int_pi = (int)(PI);
    std::cout << "PI : " << PI << std::endl;
    std::cout << "int_pi : " << int_pi << std::endl;

    return 0;
}