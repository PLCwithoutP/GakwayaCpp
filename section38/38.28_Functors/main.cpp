#include <iostream>
#include <string>

#include "print.h"

class PrintClass
{
    public:
        void operator() (const std::string& name)
        {
            std::cout << "My name is " << name << std::endl;
        }

        std::string operator() (const std::string& first_name, const std::string& last_name) const
        {
            return (first_name + " " + last_name);
        }
};

int main()
{
    PrintClass printClass;

    printClass("Lee Sin");
    std::cout << printClass("Indomitable", "will") << std::endl;
    return 0;
}
