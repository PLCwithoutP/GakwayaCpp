#include <iostream>


int main(){

    using HugeInt = unsigned long long int; // Recommended in modern C++
    typedef unsigned char HugeChar; // Older way to assign alias

    unsigned long long int huge_number {12341235125};
    HugeInt huge_number2 {123412341234};
    HugeChar char1 {123};

    std::cout << "sizeof(unsigned long long int) : " << sizeof(unsigned long long int) << std::endl;
    std::cout << "sizeof(HugeInt) : " << sizeof(HugeInt) << std::endl; 
    std::cout << "sizeof(unsigned char) : " << sizeof(unsigned char) << std::endl;
    std::cout << "sizeof(HugeChar) : " << sizeof(HugeChar) << std::endl;
    std::cout << "huge_number : " << huge_number << std::endl;
    std::cout << "huge_number2 : " << huge_number2 << std::endl;
    std::cout << "char1 : " << char1 << std::endl;

    return 0;
}