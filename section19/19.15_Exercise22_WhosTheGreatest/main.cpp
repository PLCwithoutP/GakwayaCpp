#include <iostream>

int main(int argc, char **argv)
{
    //std::string data[] {"I", "am", "the", "king", "of", "the", "jungle"};
    std::string data[] {"catching", "some", "fresh", "air"};
    size_t size = sizeof(data)/sizeof(data[0]);
    std::cout << size << std::endl;
    std::string result;

    result = data[0];
    
    for (size_t i{0}; i < size - 1; i++)
    {
        if (data[i+1] > result)
        {
            result.clear();
            result = data[i];
        }
    }

    std::cout << "The result : " << result << std::endl;
    return 0;
}
