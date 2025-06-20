#include <iostream>
#include <bitset>

int main()
{
    unsigned short int value {0xff0u};

    std::cout << "value : " << std::bitset<16>(value) << ", dec : " << value << std::endl;
    std::cout << "Size of value is : " << sizeof(short int) << std::endl; // 16 bits
    std::cout << std::endl;
    std::cout << "Shifting right >>>>>" << std::endl;

    // shift right 1 bit position
    value = static_cast<unsigned short int>(value >> 1);
    std::cout << "value : " << std::bitset<16>(value) << ", dec : " << value << "[After shift 1 bit position right] " << std::endl;

    // shift left 1 bit position
    value = static_cast<unsigned short int>(value << 1);
    std::cout << "value : " << std::bitset<16>(value) << ", dec : " << value << "[After shift 1 bit position left] " << std::endl;

    std::cout << std::endl;
    std::cout << "shift left 4 bit positions : " << std::endl;
    value = static_cast<unsigned short int>(value << 4);
    std::cout << "value : " << std::bitset<16>(value) << ", dec : " << value << "[After shift 4 bit positions left] " << std::endl;

    // Shifting right divides by 2^n
    // Shifting left multiplies by 2^n
    // This rule breaks if you throw off 1's either to the right or the left
    // Shift operations must be done within a paranthesis
    return 0;
}