#include <iostream>
#include <cstring>

//(3) // Function template
template <typename T> T maximum(T a, T b)
{
    std::cout << "Template overload(T) is called" << std::endl;
    return (a > b) ? a : b;
}

//(1) // A raw overload will take precedence over any template instance
// if const char* is passed to maximum
const char* maximum(const char* a, const char* b)
{
    std::cout << "Raw overload called" << std::endl;
    return (std::strcmp(a, b) > 0) ? a : b;
}

//(2) // Overload through templates. Will take precedence over raw T
// if a pointer is passed to maximum
template <typename T> T* maximum(T* a, T* b)
{
    std::cout << "Template overload(T*) called" << std::endl;
    return (*a > *b) ? a : b;
}

int main()
{
    const char* g {"wild"};
    const char* h {"animal"};

    maximum(g,h);

    return 0;
}