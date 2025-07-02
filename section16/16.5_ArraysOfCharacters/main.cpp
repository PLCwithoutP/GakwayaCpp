#include <iostream>

int main(int argc, char **argv)
{
/*    // Declare array
    char message[6] {'H', 'e', 'l', 'l', 'o', '\0'};

    // Print out the array through looping
    std::cout << "message : ";
    for (auto c : message)
    {
        std::cout << c;
    }
    std::cout << std::endl;

    // Change characters in our array
    message[1] = 'a';

    std::cout << "message : ";
    for (auto c : message)
    {
        std::cout << c;
    }
    std::cout << std::endl;
    // Will probably print garbage after your char array
    std::cout << "message : " << message << std::endl;
*/
    // If a character array is null terminated, it's called as a C-string
    char message1 [] {'H', 'e', 'l', 'l', 'o', '\0'};
    std::cout << "message : " << message1 << std::endl;
    
    // \0 will be added at the end of the string
    char message2 [6] {'W', 'o', 'r', 'l', 'd'};
    std::cout << "message : " << message2 << std::endl;
    std::cout << "sizeof(message2) : " << std::size(message2) << std::endl;
    
    // This is not a proper C-string
    char message3[] {'F', 'i', 'l', 'e'};
    std::cout << "message : " << message3 << std::endl;
    std::cout << "sizeof(message3) : " << std::size(message3) << std::endl;
    
    // String literal, best practice
    char message4 [] {"StringLiteral"};
    std::cout << "message : " << message4 << std::endl;
    std::cout << "sizeof(message3) : " << std::size(message4) << std::endl;

    // Will not work properly
    int numbers[] {1,2,4,5,5};
    std::cout << "numbers : " << numbers << std::endl;
    return 0;
}
