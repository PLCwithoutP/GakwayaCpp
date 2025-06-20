#include <iostream>
#include <iomanip>
#include <bitset>

const unsigned char mask_bit_0 {0b00000001}; // Bit 0
const unsigned char mask_bit_1 {0b00000010}; // Bit 1
const unsigned char mask_bit_2 {0b00000100}; // Bit 2
const unsigned char mask_bit_3 {0b00001000}; // Bit 3
const unsigned char mask_bit_4 {0b00010000}; // Bit 4
const unsigned char mask_bit_5 {0b00100000}; // Bit 5
const unsigned char mask_bit_6 {0b01000000}; // Bit 6
const unsigned char mask_bit_7 {0b10000000}; // Bit 7

void use_options_v0 (bool flag0, bool flag1, bool flag2, bool flag3, bool flag4, bool flag5, bool flag6, bool flag7)
{
    std::cout << "Flag0 is : " << flag0 << ", do something with it." << std::endl;
    std::cout << "Flag1 is : " << flag1 << ", do something with it." << std::endl;
    std::cout << "Flag2 is : " << flag2 << ", do something with it." << std::endl;
    std::cout << "Flag3 is : " << flag3 << ", do something with it." << std::endl;
    std::cout << "Flag4 is : " << flag4 << ", do something with it." << std::endl;
    std::cout << "Flag5 is : " << flag5 << ", do something with it." << std::endl;
    std::cout << "Flag6 is : " << flag6 << ", do something with it." << std::endl;
    std::cout << "Flag7 is : " << flag7 << ", do something with it." << std::endl;
}

void use_options_v1 (unsigned char flags)
{
    std::cout << "Flag0 is : " << ((flags & mask_bit_0) >> 0) << ", do something with it." << std::endl;
    std::cout << "Flag1 is : " << ((flags & mask_bit_1) >> 1) << ", do something with it." << std::endl;
    std::cout << "Flag2 is : " << ((flags & mask_bit_2) >> 2) << ", do something with it." << std::endl;
    std::cout << "Flag3 is : " << ((flags & mask_bit_3) >> 3) << ", do something with it." << std::endl;
    std::cout << "Flag4 is : " << ((flags & mask_bit_4) >> 4) << ", do something with it." << std::endl;
    std::cout << "Flag5 is : " << ((flags & mask_bit_5) >> 5) << ", do something with it." << std::endl;
    std::cout << "Flag6 is : " << ((flags & mask_bit_6) >> 6) << ", do something with it." << std::endl;
    std::cout << "Flag7 is : " << ((flags & mask_bit_7) >> 7) << ", do something with it." << std::endl;
}

int main()
{
    std::cout << "Version 0 function" << std::endl;
    use_options_v0(0,0,1,1,1,0,1,0);
    std::cout << "Version 1 function" << std::endl;
    use_options_v1(mask_bit_0 | mask_bit_1 | mask_bit_3 | mask_bit_4);
    
    return 0;
}