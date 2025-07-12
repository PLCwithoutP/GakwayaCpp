#include <iostream>

int main(int argc, char **argv)
{
    int data1[] {1,2,3,4,5,66,77};
    int data2[] {10,20,30,40,50,60};
    size_t size1 {7};
    size_t size2 {6};

    size_t size_merged {size1 + size2};
    int *p_merged {new int[size_merged]};
    int *p_data1 {};
    int *p_data2 {};

    p_data1 = &data1[0];
    p_data2 = &data2[0];

    std::cout << "*p_data1 : " << *p_data1 << std::endl;
    std::cout << "*p_data2 : " << *p_data2 << std::endl;

    for (size_t i {0}; i < size_merged; i++)
    {
        *(p_merged + i) = *(p_data1 + i);
        if (i >= size1)
        {
            *(p_merged + i) = *(p_data2 + i - size1);
        }
    }

    for (size_t i {0}; i < size_merged; i++)
    {
        std::cout << p_merged[i] << " ";
    }

    std::cout << std::endl;

    std::cout << "p_merged : " << p_merged << std::endl;
    std::cout << "p_data1 : " << p_data1 << std::endl;
    std::cout << "p_data2 : " << p_data2 << std::endl;

    std::cout << "First kill" << std::endl;
    delete [] p_merged;
    p_merged = nullptr;

    if (p_data1)
    {   
        std::cout << "*p_data1 : " << *p_data1 << std::endl;
        p_data1 = nullptr;
    }
    
    if (p_data2)
    {
        std::cout << "Third kill" << std::endl;
        p_data2 = nullptr;
    }
    return 0;
}
