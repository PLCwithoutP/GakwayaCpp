#include <iostream>


int main(int argc, char **argv)
{
    int data1[] {1,2,4,5,9,3,6,7,44,55};
    int data2[] {11,2,44,45,49,43,46,47,55,88};
    size_t size = 10;
    int commonElements[10] {};
    int common {0};
    for (size_t i {0}; i < size; i++)
    {
        for (size_t j {0}; j < size; j++)
        {
            if (data1[i] == data2[j])
            {
                commonElements[common] = data1[i];
                common++;
            }
        }
    }

    std::cout << "There are " << common << " common elements" << std::endl;
    if (common != 0)
    {
        std::cout << " they are : ";
    }
    for (size_t i {0}; i < common; i++)
    {
        std::cout << commonElements[i] << " ";
    }
    std::cout << std::endl;
    return 0;
}
