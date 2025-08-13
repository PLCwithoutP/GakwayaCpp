#include <iostream>

int max(int* a, int* b)
{
    std::cout << "max with int* called" << std::endl;
    return (*a > *b) ? *a : *b;
}

/* int max(const int* a, const int* b)
{
    std::cout << "max with const int* called" << std::endl;
    return (*a > *b) ? *a : *b;
}
 */
// Compiler error
int max(const int* const a, const int* const b)
{
    std::cout << "max with const int* const called" << std::endl;
    std::cout << "&a : " << &a << std::endl;
    std::cout << "&b : " << &b << std::endl;
    return (*a > *b) ? *a : *b;
}


int main()
{
    int a {10};
    int b {12};

    const int c {30};
    const int d {15};

    const int* p_c {&c};
    const int* p_d {&d};
    auto result0 = max(&a, &b);
    auto result1 = max(p_c, p_d);
    std::cout << "&c : " << p_c << std::endl;
    std::cout << "&d : " << p_d << std::endl;

    return 0;
}