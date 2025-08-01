#include <iostream>
#include <cstring>

int main(int argc, char **argv)
{
    const char src1[] {"will old space the replace"};
    const char src2[] {"sense sky  hit has"};
    const char src3[] {"hello went is get"};
    const char src4[] {"red blue yellow orange"};

    char *result;
    result = new char[20]; // Dynamically allocate for space


    std::strncpy(result, src1+15, 4);
    std::strncpy(result+4, src2+6, 4);
    std::strncpy(result+8, src3+11, 3);
    std::strncpy(result+11, src4+4, 4);

    std::cout << "result : " << result;

    delete[] result;
    result = nullptr;

    return 0;
}
