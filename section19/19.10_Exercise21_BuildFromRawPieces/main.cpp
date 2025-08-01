#include <iostream>
#include <string>

int main(int argc, char **argv)
{
    const char str1[] {"Hello there!"};
    const char str2[] {"How are you?"};
    std::string result;

    result = std::string{str1} + ' ' + str2;

    std::cout << result << std::endl;

    return 0;
}
