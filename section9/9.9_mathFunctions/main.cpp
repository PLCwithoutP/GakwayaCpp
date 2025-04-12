#include <iostream>
#include <cmath> 

int main()
{
    double weight { 7.7 };

    // floor
    std::cout << "Weight rounded to floor is : " << std::floor(weight) << std::endl;

    // ceil
    std::cout << "Weight rounded to ceiling is : " << std::ceil(weight) << std::endl;

    // abs
    double savings {-5000};

    std::cout << "Abs of weight is : " << std::abs(weight) << std::endl;
    std::cout << "Abs of savings is : " << std::abs(savings) << std::endl;

    // exp : f(x) = e ^ x , where e = 2.71828 . Test the results here against a calculator
    double exponential = std::exp(10);
    std::cout << "The exponential of 10 is : " << exponential << std::endl;

    // pow
    std::cout << "3 ^ 4 is : " << std::pow(3,4) << std::endl;
    std::cout << "9 ^ 3 is : " << std::pow(9,3) << std::endl;

    // log : reverse function of pow. if 2 ^ 3 = 8, log 8 in base 2 = 3. Log is like answer
    // to which exponent should we elevate 2 to get eight question. Log, by default computes
    // in base e. There is also another function which uses base 10 called log10.

    // Try the reverse operation of e^4 = 54.59, it will be log 54.59 in base e.
    std::cout << "Log; to get 54.59, you would elevate e to the power of : " << std::log(54.59) << std::endl;
    
    // log10, 10 ^ 4 = 10000 , to get 10k, you would need to elevate 10 to the power of 4. 
    std::cout << "To get 100, you would need to elevate 10 to the power of : " << std::log10(10000) << std::endl;

    // sqrt : square root of given parameter
    std::cout << "The square root of 81 is : " << std::sqrt(81) << std::endl;

    // round. Halfway points are rounded away from 0. 2.5 is rounded to 3 for example
    std::cout << "3.654 is rounded to : " << std::round(3.654) << std::endl;
    std::cout << "2.5 is rounded to : " << std::round(2.5) << std::endl;
    std::cout << "2.4 is rounded to : " << std::round(2.4) << std::endl;

    return 0;
}