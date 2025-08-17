#include <iostream>

unsigned int digit_sum(unsigned int input)
{
    unsigned int test {input / 10};
    size_t count {1};
    unsigned int sum {};

    while (test != 0)
    {
        count++;
        test = test/10;
    }
    test = input;

    for (size_t i {0}; i < count; i++)
    {
        if ((test % 10) != 0)
        {
            sum += test % 10;
            test = test - (test % 10);
        }
        test = test / 10;

        if (i == count - 1)
        {
            sum += test;
        }
    }
    return sum;
}

int main(){

    digit_sum(79);
    digit_sum(62727289);

    return 0;
}