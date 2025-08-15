#include <iostream>

template <typename T> T maximum(T a, T b)
{
    return (a > b) ? a : b;
}

int main()
{
    int a{19};
    int b{25};
    double c{37.4};
    double d{425};
    std::string e{"hello"};
    std::string f{"furkan"};

    //auto max = maximum(a,b);

    // Explicit template arguments
    auto max = maximum<double> (a,d);
    std::cout << "max : " << max << std::endl;
    return 0;
}