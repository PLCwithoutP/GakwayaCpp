#include <iostream>

int main(){
    int a {5};
    int b {6};
    int c {7};
    int d {8};
    int e {9};
    int f {10};
    int g {11};

    int result = a + b * c - d / e - f + g;

    std::cout << "Result is " << result << std::endl;

    result = a / b * c + d - e + f;
    std::cout << "Result is " << result << std::endl;

    result = a / b * (c + d) - e + f;
    std::cout << "Result is () " << result << std::endl;

    return 0;
}