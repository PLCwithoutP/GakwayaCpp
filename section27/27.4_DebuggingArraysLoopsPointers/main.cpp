#include <iostream>

double sum(double array[], size_t count)
{
    double sum_total {};

    for (size_t i {}; i < count; i++)
    {
        sum_total += array[i];
    }

    return sum_total;
}


int main()
{

    double numbers[] {10.0, 20.0, 30.0, 40.0, 50.0}; // Sum should be 150

    double total = sum(numbers, std::size(numbers));

    std::cout << "sum : " << total << std::endl;

    return 0;
}