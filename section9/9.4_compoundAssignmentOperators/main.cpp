#include <iostream>

int main(){
    int value {45};

    std::cout << "The value is : " << value << std::endl;

    std::cout << std::endl;

    value += 5; // equivalent to value = value + 5

    std::cout << "The value is (after += 5) : " << value << std::endl; // 50
    
    std::cout << std::endl;

    value -= 5; // equivalent to value = value - 5

    std::cout << "The value is (after -= 5) : " << value << std::endl; // 45

    std::cout << std::endl;

    value *= 5; // equivalent to value = value * 5

    std::cout << "The value is (after *= 5) : " << value << std::endl; // 225
    
    std::cout << std::endl;

    value /= 10; // equivalent to value = value / 10

    std::cout << "The value is (after /= 10) : " << value << std::endl; // 22
    
    std::cout << std::endl;

    value %= 7; // equivalent to value = value % 7

    std::cout << "The value is (after %= 7) : " << value << std::endl; // 1
    

    return 0;
}