#include <iostream>

/* // Compiler produces something like this
template <typename T, typename P>
decltype(auto) func_add(T a, P b)
{
    return a + b;
}
*/

auto func_add(auto a, auto b)
{
    return a + b;
}

int main(){

    int a {7};
    double b {8.83};

    auto result = func_add(a, b);
    auto print = [](auto input) -> void {
        std::cout << input << std::endl;
    };

    print("Result is : ");
    print(result);
    print("sizeof(result) : ");
    print(sizeof(result));

    return 0;
}