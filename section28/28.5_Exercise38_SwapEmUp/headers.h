#include <iostream>

template<typename T> void swap_data(T& input1, T& input2)
{
    auto temporary {input1};
    input1 = input2;
    input2 = temporary;
}