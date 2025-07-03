#include <iostream>
#include <ctime>

int main(int argc, char **argv)
{
    std::srand(std::time(0));
    int random_num = std::rand();
    std::cout << "random_num : " << random_num << std::endl; // 0 ~ RAND_MAX
    
    random_num = std::rand();
    std::cout << "random_num : " << random_num << std::endl;
    
    for (size_t i {0}; i < 20; i++)
    {
        random_num = std::rand();
        std::cout << "random_num " << i << " : " << random_num << std::endl; // 0 ~ RAND_MAX 
    }
    
    for (size_t i {0}; i < 20; i++)
    {
        random_num = std::rand() % 11; // [0~10]
        std::cout << "random_num " << i << " : " << random_num << std::endl; // 0 ~ RAND_MAX 
    }

    for (size_t i {0}; i < 20; i++)
    {
        random_num = std::rand() % 11 + 1; // [1~11]
        std::cout << "random_num " << i << " : " << random_num << std::endl; // 0 ~ RAND_MAX 
    }

    return 0;
}
