#include <iostream>


int main()
{
/*     // Capturing everything by value
    int c {42};

    auto func = [=](){
        std::cout << "Inner value : " << c << " Address of c : " << &c << std::endl;
    };

    for (size_t i {}; i < 5; i++)
    {
        std::cout << "Outer value : " << c << " Address of c : " << &c << std::endl;
        func();
        c++;
    } */


    // Capturing everything by reference
    int c {42};
    double d {2.5};

    auto func = [&](){
        std::cout << "Inner value : " << c << " Address of c : " << &c << std::endl;
    };

    for (size_t i {}; i < 5; i++)
    {
        std::cout << "Outer value : " << c << " Address of c : " << &c << std::endl;
        func();
        c++;
        d+=0.5;
    }
    return 0;
}