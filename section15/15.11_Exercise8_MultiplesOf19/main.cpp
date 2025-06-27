#include <iostream>

int main(int argc, char **argv)
{
    size_t i {100};
    const int COUNT {1000};

    while(i < COUNT)
    {
        if (i % 19 == 0)
        {
            std::cout << i << " ";
        }
        i++;
    }
    return 0;
}
