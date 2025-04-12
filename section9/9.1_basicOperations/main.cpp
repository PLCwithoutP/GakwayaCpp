#include <iostream>

int main(){
    
    // Addition

    int number1 {10};
    int number2 {11};

    int result = number1 + number2;

    std::cout << "Result is " << result << std::endl;

    // Substraction

    result = number1 - number2;
    std::cout << "Result is " << result << std::endl;

    result = number2 - number1;
    std::cout << "Result is " << result << std::endl;

    // Multiplication

    result = number1 * number2;
    std::cout << "Result is " << result << std::endl;

    // Division

    result = number2 / number1;
    std::cout << "Result is " << result << std::endl;

    // Modulus

    result = number2 % number1;
    std::cout << "Result is " << result << std::endl;

    return 0;
}