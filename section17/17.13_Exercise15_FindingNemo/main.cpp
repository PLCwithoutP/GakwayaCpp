#include <iostream>

int main(int argc, char **argv)
{
    int data[] {11,2,52,53,9,13,5,7,12,11};
    int * p_data {data};
    int size {10};
    int * min_address;
    int min_value{data[0]};
    int difference{};
    for (size_t i{1}; i < size; i++)
    {
        difference = min_value - *(p_data + i);
        std::cout << "difference for iteration " << i << " is " << difference << std::endl;
        if (difference > 0)
        {
            min_value = *(p_data + i);
            min_address = p_data + i;
        }
        else
        {
            continue;
        }
    }

    std::cout << "min value is : " << min_value << std::endl;
    std::cout << "min address is : " << min_address << std::endl;
    std::cout << "min element address is : " << &data[1] << std::endl;
    return 0;
}
