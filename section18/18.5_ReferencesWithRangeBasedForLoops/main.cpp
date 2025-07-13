#include <iostream>

int main(int argc, char **argv)
{
    int scores[] {1,2,3,4,5,6,7,8,9,10};

    // Printing positions
    std::cout << std::endl;

    std::cout << "Scores : ";
    for (auto score : scores)
    {
        std::cout << " " << score;
    }
    std::cout << std::endl;

    std::cout << "Modified Scores : ";
    for (auto& score : scores)
    {
        score = score * 10;
        std::cout << " " << score;
    }
    std::cout << std::endl;

    std::cout << "Scores : ";
    for (auto score : scores)
    {
        std::cout << " " << score;
    }
    std::cout << std::endl;
    return 0;
}
