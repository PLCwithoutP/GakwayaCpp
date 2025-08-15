#include <iostream>
#include "headers.h"


int main()
{
    std::string x{"Hello"};
    std::string y{"There"};
    auto print = [](auto data){
        std::cout << data << std::endl;
    };

    print("x");
    print(x);
    print("y");
    print(y);

    swap_data(x,y);

    print("x");
    print(x);
    print("y");
    print(y);

    int a{10};
    int b{20};

    print("a");
    print(a);
    print("b");
    print(b);

    swap_data(a,b);

    print("a");
    print(a);
    print("b");
    print(b);

    return 0;
}