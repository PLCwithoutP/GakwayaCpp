#include <iostream>

void print_sum(int* param1, int* param2)
{
    std::cout << " sum : " << (*param1 + *param2) << std::endl;
}

int main(int argc, char **argv)
{
    int a{3};
    int b{9};

    print_sum(&a, &b);

    double c{10.2};
    double d{53.5};

    // Compiler error
    // print_sum(&c, &d);
    return 0;
}
