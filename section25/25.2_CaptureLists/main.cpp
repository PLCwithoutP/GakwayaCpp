#include <iostream>



int main()
{
/*     // Capture lists
    double a {10};
    double b {20};

    auto func = [a,b](){
        std::cout << "a + b : " << a + b << std::endl;
    };

    func(); */

    // Capture by value
/*     int c {42};

    auto func = [c](){
        std::cout << "Inner value : " << c << " Address of c : " << &c << std::endl;
    };

    for (size_t i {}; i < 5; i++)
    {
        std::cout << "Outer value : " << c << " Address of c : " << &c << std::endl;
        func();
        c++;
    } */
   
    // Capture by reference
    int c {42};

    auto func = [&c](){
        std::cout << "Inner value : " << c << " Address of c : " << &c << std::endl;
    };

    for (size_t i {}; i < 5; i++)
    {
        std::cout << "Outer value : " << c << " Address of c : " << &c << std::endl;
        func();
        c++;
    }
    return 0;
}