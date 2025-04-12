#include <iostream>

int main(){
    
    int value {5};

    // Increment by one
    value = value + 1; // 6
    std::cout << "The value is: " << value << std::endl; // 6

    value = 5;

    // Decrement by one
    value = value - 1; // 4
    std::cout << "The value is: " << value << std::endl; // 4

    std::cout << "***** Post-fix increment and decrement *****" << std::endl;

    // Postfix : Incrementing and Decrementing
    std::cout << std::endl;

    // Increment with postfix ++ : Retrieve the current value then increment afterwards

    // Reset value to 5
    value = 5;

    std::cout << "The value is (incrementing) : " << value++ << std::endl; // 5
    std::cout << "The value after incrementing : " << value << std::endl; // 6

    // Decrement with postfix -- : Retrieve the current value then decrement afterwards

    // Reset value to 5
    value = 5;

    std::cout << "The value is (decrementing) : " << value-- << std::endl; // 5
    std::cout << "The value after decrementing : " << value << std::endl; // 4

    std::cout << "***** Post-fix increment and decrement *****" << std::endl;

    // Prefix : Incrementing and Decrementing
    std::cout << std::endl;

    // Increment with prefix ++ : Increment the current value then print it afterwards

    // Reset value to 5
    value = 5;

    std::cout << "The value is (incrementing) : " << ++value << std::endl; // 6
    std::cout << "The value after incrementing : " << value << std::endl; // 6

    std::cout << std::endl;

    // Decrement with prefix -- : Decrement the current value then print it afterwards

    // Reset value to 5
    value = 5;

    std::cout << "The value is (decrementing) : " << --value << std::endl; // 4
    std::cout << "The value after decrementing : " << value << std::endl; // 4

    std::cout << std::endl;

    return 0;
}