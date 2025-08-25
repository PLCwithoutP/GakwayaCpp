#include <iostream>

class Dog
{
    // Doesn't matter whether it is public or private
    friend void debug_dog_info(const Dog& d);
    friend void print_info();
    friend void change_dog_info(Dog& d);
    public:
        Dog(const std::string& name, int age)
        : m_name{name}, m_age{age}
        { }
    private:
         std::string m_name;
         int m_age;
};

// Without friendship, this is a compiler error
void debug_dog_info(const Dog& d)
{
    std::cout << "Dog [ name : " << d.m_name << ", age : " << d.m_age << "]" << std::endl;
}

// Without friendship, this is a compiler error
void print_info()
{
    Dog dog1("Boncuk", 2);
    std::cout << "Dog [ name : " << dog1.m_name << ", age : " << dog1.m_age << "]" << std::endl;
}

// Without friendship, this is a compiler error
void change_dog_info(Dog& d)
{
    d.m_name = "Mileau";
    std::cout << "Dog [ name : " << d.m_name << ", age : " << d.m_age << "]" << std::endl;
}

int main()
{
    Dog dog1("Fluffy", 4);
    debug_dog_info(dog1);
    print_info();
    change_dog_info(dog1);

    return 0;
}