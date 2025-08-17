#include <iostream>
#include <type_traits>

template <typename T>
void print_number(T a)
{
    static_assert(std::is_integral<T>::value, "print_numbers() only work with integral types");
    std::cout << "number : " << a << std::endl;
}

int main()
{
    auto print = [](auto input)
    {
        std::cout << input << std::endl;
    };

/*     std::cout << std::boolalpha;
    print("std::is_integral<int>::value : ");
    print(std::is_integral<int>::value);
    print("std::is_floating_point<int>::value : ");
    print(std::is_floating_point<int>::value);

    // After C++-17
    print("std::is_integral_v<int> : ");
    print(std::is_integral_v<int>);
    print("std::is_floating_point_v<int> : ");
    print(std::is_floating_point_v<int>);
 */

    int a {7};
    print_number(a);
    /* double b {49.9};
    print_number(b);
     */

    auto func = []<typename T>(T a, T b)
    {
        static_assert(std::is_integral<T>::value, "func() can only be called with integral types");
        return a + b;
    };

    print(func(4,5));
//    print(func(4.3, 4.3)); // Compiler error
    
    return 0;
}