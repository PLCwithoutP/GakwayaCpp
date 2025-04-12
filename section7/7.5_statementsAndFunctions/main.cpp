#include <iostream>

int addNumbers(int a, int b)
{
    int result = a + b;
    return result;
}

int main(){

    int firstNum {2};
    int secondNum {5};
    int sum = addNumbers(firstNum, secondNum);

    std::cout << "Result is: " << sum << std::endl;

    return 0;
}