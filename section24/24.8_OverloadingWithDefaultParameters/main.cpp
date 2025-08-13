#include <iostream>


void print_age(int age = 33);
//void print_age(long int age = 66);


int main()
{
    print_age();
    return 0;
}

void print_age(int age)
{
    std::cout << "Your age is (int version) : " << age << std::endl;
}

/* void print_age(long int age)
{
    std::cout << "Your age is (long int version) : " << age << std::endl;
} */