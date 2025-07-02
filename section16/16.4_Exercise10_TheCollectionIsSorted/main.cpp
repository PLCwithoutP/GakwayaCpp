#include <iostream>

int main(int argc, char **argv)
{
    int data[] {1,2,4,5,8,12,13,16,71,92};
    int data2[] {1,112,4,5,12,13,16,71,92};

    bool sorted {true};

    int collection_size = std::size(data);
    int collection_size2 = std::size(data2);

    for (size_t i {1}; i < (collection_size); i++)
    {
        int value = data[i] - data[i-1];
        if (value < 0)
        {
            sorted = false;
        } 
    }
    std::cout << "sorted is " << std::boolalpha << sorted << std::endl;
    return 0;
}
