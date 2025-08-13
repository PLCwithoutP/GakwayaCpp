#include <iostream>

size_t dog_count{}; // Global scope

unsigned int add_student()
{
    static unsigned int student_count{0}; // The scope of this var is in add_student,
                                          // but its lifetime goes beyond the function execution
    student_count++;
    dog_count++;
    return student_count;
}


void do_something()
{
    //--student_count; // Compiler error
    dog_count++;
}
int main()
{
    for (size_t i {}; i < 5; i++)
    {
        std::cout << "student count : " << add_student() << std::endl;
    }     
    return 0;
}