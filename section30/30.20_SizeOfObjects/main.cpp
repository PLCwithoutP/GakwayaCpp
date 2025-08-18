#include <iostream>

class Dog
{
    public:
        Dog() = default;
        void some_unc()
        {

        }
    private:
        size_t leg_count;
        size_t arm_count;
        int* p_age;
        std::string my_account {"My beautiful account. It is the biggest, baddest"};
};

int main()
{
    Dog dog1;
    std::cout << "sizeof(size_t) : " << sizeof(size_t) << std::endl;
    std::cout << "sizeof(int*) : " << sizeof(int*) << std::endl;
    std::cout << "sizeof(Dog) : " << sizeof(dog1) << std::endl;

    std::string name{"Hello World!"};
    std::cout << "sizeof(name) : " << sizeof(name) << std::endl;

    name = "We are the lions of the north!";
    std::cout << "sizeof(name) : " << sizeof(name) << std::endl;
    return 0;
}