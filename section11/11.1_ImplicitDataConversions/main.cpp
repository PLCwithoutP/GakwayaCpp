#include <iostream>

int main()
{
    // The compiler applies implicit conversions when types are different in an expression
    // Conversion are always done from the smallest to the largest type. 
    // In this case int is transformed to double before the expression is evaluated unless
    // we are doing an assignment

    double price {45.6};
    int units {10};

    double total_price = price * units;

    std::cout << "Total price : " << total_price << std::endl;
    std::cout << "sizeof total_price : " << sizeof(total_price) << std::endl;
    
    return 0;
}