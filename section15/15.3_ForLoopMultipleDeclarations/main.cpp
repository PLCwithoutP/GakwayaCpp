#include <iostream>

int main(int argc, char **argv)
{
    for (size_t i{0}, x{5}, y{22} ; y > 15 ; ++i, x+=5, y-=1)
    {
        std::cout << "i: " << i << ", x: " << x << ", y: " << y << std::endl;
//        std::cout << "sizeof(i) : " << sizeof(i) << std::endl;
//        std::cout << "sizeof(x) : " << sizeof(x) << std::endl;
//        std::cout << "sizeof(y) : " << sizeof(y) << std::endl;
//        std::cout << "--------------------------------------" << std::endl;
    }
    return 0;
}
