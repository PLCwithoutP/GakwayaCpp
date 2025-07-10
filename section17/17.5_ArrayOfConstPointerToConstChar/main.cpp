#include <iostream>

int main(int argc, char **argv)
{
    const char * const students[]
    {
        "Daniel Gray",
        "Tuna Philbe",
        "The Rock",
        "Kumar Singh",
        "Sam Ali",
        "Dave Mahoro"
    };

    // Print out the students
    std::cout << std::endl;
    std::cout << "Printing out the students : " << std::endl;
    for (const char *student : students)
    {
        std::cout << student << std::endl;
    }

    //*students[0] = 'K'; // Won't compile
    
    /*
    // Can swap for new student though if * is not const
    const char *new_student {"Bob the Great"};
    students[0] = new_student;
    */
    // Print out the students
    std::cout << std::endl;
    std::cout << "Printing out the students : " << std::endl;
    for (const char *student : students)
    {
        std::cout << student << std::endl;
    }
    
    return 0;
}
