#include <iostream>

int main(int argc, char **argv)
{
    for (unsigned char i {}; i < 255; ++i)
    {
        if (i > 64 && i < 91)
        {
            std::cout << i << std::endl;
        }
    }
    return 0;
}
