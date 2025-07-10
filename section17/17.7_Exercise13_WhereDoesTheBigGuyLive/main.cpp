#include <iostream>

int main(int argc, char **argv)
{
    int data[] {11,2,52,53,9,13,5,7,12,11};
    int *max_address;
    int difference {};
    int max_value {data[0]};
    for (size_t i {1}; i < std::size(data); i++)
    {
        difference = max_value - data[i];
        if (difference < 0)
        {
            max_value = data[i];
            max_address = &data[i];
        }
        else
        {
            continue;
        }
    }
    std::cout << "Max value is : " << max_value << std::endl;
    return 0;
}
