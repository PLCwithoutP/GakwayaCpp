#include <iostream>

int main(int argc, char **argv)
{
    char message[] {"The sky is blue my friend."};
    char *result {nullptr};
    size_t size = std::size(message);

    result = new char[size];

    for (size_t i {0}; i < size; i++)
    {
        char chars = message[i];
        if(std::isblank(chars))
        {
            result[i] = '_';
        }
        else
        {
            result[i] = chars;
        }
    }

    std::cout << "After replacing the spaces, we get :" << std::endl;
    std::cout << result << std::endl;

    delete result;
    result = nullptr;

    return 0;
}
