#include <iostream>
#include "person.h"


int main()
{
    Person p1("Snow","John",25);
    Person p2("Gray","Sam",45);
    Person p3("Drill","Johnny",5);
    p1.print_info();
    p2.print_info();
    p3.print_info();
    
    Person students[] {p1,p2,p3};
    for (size_t i{}; i < std::size(students) ; i++)
    {
        students[i].print_info();
    }

    std::cout << "-------------------" << std::endl;

    for (size_t i{}; i < std::size(students) ; i++)
    {
        students[i].print_info();
    }

    std::cout << "-------------------" << std::endl;

    for (Person p : students)
    {
        p.print_info();
    }

    std::cout << "-------------------" << std::endl;

    for (Person& p : students)
    {
        p.print_info();
    }
    return 0;
}