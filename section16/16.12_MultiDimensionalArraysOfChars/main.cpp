#include <iostream>

int main(int argc, char **argv)
{
    // Declaring a 2D array
    
    const size_t name_length{15};

    char members [][name_length]
    {
        {'J','o','h','n'},
        {'S','a','m'},
        {'R','a','s','h','i','d'},
        {'R','o','d','r','i'}
    };
    /*
    // Printing out like this is unsafe : may go over and print
    // outside your valid memory block
    // until a terminating null character is encountered
    std::cout << "Unsafe printing of members : " << std::endl;
    for (size_t i {0}; i < std::size(members); i++)
    {
        std::cout << members[i] << std::endl;
    }
    */
    /*
    // can loop around manually printing out each character
    std::cout << std::endl;
    std::cout << "Printing out character by character manually : " << std::endl;
    for (size_t i{0}; i < std::size(members); i++)
    {
        for (size_t j{0}; j < std::size(members[i]); j++)
        {
            std::cout << members[i][j];
        }
        std::cout << std::endl;
    }*/

    // Better : Using C-string literals
    // compared to initialization with characters within "", this is even easier
    // to type. The entire string is a single entity you can manage easily.
    char members1 [][name_length]
    {
        "John",
        "Samuel",
        "Rashid",
        "Rodriguez"
    };

    // Printing out members1
    std::cout << "Printing out members1 (C-string literals) : " << std::endl;
    for (size_t i {0}; i < std::size(members1); i++)
    {
        std::cout << members1[i] << std::endl;
    }

    return 0;
}
