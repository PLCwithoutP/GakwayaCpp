#include <iostream>
#include <type_traits>

void func_floating_points(double d)
{
    std::cout << "floating point func..." << std::endl;
}

void func_ints(int d)
{
    std::cout << "int point func..." << std::endl;
}

template <typename T>
void func(T t)
{
    if constexpr(std::is_integral<T>::value)
    {
        func_ints(t);
    }
    else if constexpr(std::is_floating_point<T>::value)
    {
        func_floating_points(t);
    }
    else
    {
        static_assert(std::is_integral<T>::value || std::is_floating_point<T>::value,
                        "Argument must be integral type or floating point");
    }
}

int main()
{
    func(12); // Compile
    func(1.2); // Compile
    //func("12"); // Won't compile
    return 0;
}