#include <iostream>

void increment(int& value);
void print_out(const int& value);

int main(int argc, char **argv)
{
    int int_var {3};
    increment(int_var);
    print_out(int_var);
    
    double double_var {3.5};
    int data = double_var;
    increment(data);
    print_out(data);


    return 0;
}

void increment(int& value)
{
    value++;
    std::cout << "value incremented to : " << value << std::endl;
}

void print_out(const int& value)
{
    std::cout << "value : " << value << std::endl;
}