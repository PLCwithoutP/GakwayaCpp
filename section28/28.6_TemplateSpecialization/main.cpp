#include <iostream>
#include <cstring>

template <typename T> T maximum(T a, T b);
template <> const char* maximum <const char*> (const char* a, const char* b);

int main()
{
    auto print = [](auto input){
        std::cout << input << std::endl;
    };
    double a {13.5};
    double b {52.5};

    auto result1 = maximum(a,b); // double type deduced
    
    // We need template specialization
    const char* g{"wild"};
    const char* h{"animal"};

    auto result2 = maximum(g,h); // specialized maximum
    
    print("result1 : ");
    print(result1);
    print("result2 : ");
    print(result2);

    return 0;
}

template <typename T> T maximum(T a, T b)
{
    return (a > b) ? a : b;
}

template <> const char* maximum <const char*> (const char* a, const char* b)
{
    return(std::strcmp(a,b) > 0) ? a : b;
}