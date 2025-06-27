#include <iostream>
#include <vector>

int main(int argc, char **argv)
{
    std::vector<int> numbers {1,21,4,5,7,3,9,3,5,17,15};

    for (int i : numbers)
    {
        if (i % 3 == 0)
        {
            std::cout << i << " ";
        }
    }
    return 0;
}
