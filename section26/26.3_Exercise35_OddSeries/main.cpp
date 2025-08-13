#include <iostream>

int odd()
{
    static int odd_number {-1};
    odd_number += 2;
    return odd_number;
}

void print_odds(unsigned int count)
{
    for (size_t i {}; i < count; i++)
    {
        std::cout << odd() << " ";
    }
}
int main()
{
    print_odds(5);
    return 0;
}