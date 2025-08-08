#include <iostream>

void print_sum(int a, int b)
{
    int sum = a + b;
    std::cout << "sizeof(a) : " << sizeof(a) << std::endl;
    std::cout << "sizeof(b) : " << sizeof(b) << std::endl;
    std::cout << "sizeof(int) : " << sizeof(int) << std::endl;
    std::cout << "sizeof(double) : " << sizeof(double) << std::endl;
    std::cout << "sum : " << sum << std::endl;
    std::cout << std::endl;
}

int main(int argc, char **argv)
{
    int a {5};
    int b {8};

    print_sum(a,b);

    double x {5.1};
    double y {8.7};

    print_sum(x,y);

    // Compiler error
    /* std::string k {"3.5"};
    std::string l {"3.8"};
    print_sum(k,l); */
    return 0;
}
