#include <iostream>

int main(int argc, char **argv)
{
    // After c++-17 standard
    int scores [] {1,2,3,4,5,6,7};

    int count {std::size(scores)};

    std::cout << "After c++-17 standard" << std::endl;
    for (size_t i{}; i < count; i++)
    {
        std::cout << "scores[" << i << "] : " << scores[i] << std::endl;
    }

    // Before c++-17 standard
    size_t count_before {sizeof(scores) / sizeof(scores[0])};
    std::cout << "Before c++-17 standard" << std::endl;
    std::cout << "sizeof(scores) : " << sizeof(scores) << std::endl;
    std::cout << "sizeof(scores[0]) : " << sizeof(scores[0]) << std::endl;
    for (size_t i{}; i < count; i++)
    {
        std::cout << "scores[" << i << "] : " << scores[i] << std::endl;
    }

    // Using a foreach loop
    for (auto score : scores)
    {
        std::cout << "score :" << score << std::endl;
    }
    return 0;
}
