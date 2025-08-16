#include <iostream>

/* template <int threshold, typename T>
bool is_valid(T collection[], size_t size)
{
    T sum {};
    for (size_t i {}; i < size; i++)
    {
        sum += collection[i];
    }
    return (sum > threshold) ? true : false;
} */

// Version making a little more sense for the task
template <typename T>
bool is_valid(T collection[],int threshold, size_t size)
{
    T sum {};
    for (size_t i {}; i < size; i++)
    {
        sum += collection[i];
    }
    return (sum > threshold) ? true : false;
}

int main()
{
    double temps[] {10,20,30,40,50,60.5};
/* 
    auto result = is_valid<200, double>(temps, std::size(temps)); */
    auto result = is_valid<double>(temps, 200, std::size(temps));
    std::cout << "result : " << std::boolalpha << result << std::endl;

    return 0;
}