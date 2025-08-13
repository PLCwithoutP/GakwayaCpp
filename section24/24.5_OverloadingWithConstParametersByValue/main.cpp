#include <iostream>

int max(const int a, const int b);

/* // Compiler error
int max(const int a, const int b)
{
    return (a > b) ? a : b;
} */

int main()
{

    return 0;
}

int max(int a, int b)
{
    a++;
    return (a > b) ? a : b;
}