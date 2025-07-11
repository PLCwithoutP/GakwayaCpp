#include <iostream>

int main(int argc, char **argv)
{
    // If this is not const, it won't compile
    const char * message {"Hello World!"};

    std::cout << "message : " << message << std::endl;

    // *message = "B"; // will cause compiler error
    std::cout << "*message : " << *message << std::endl;

    // Allow users to modify the string
    char message1[] {"Hello World!"};
    message1[0] = 'B';
    std::cout << "message1 : " << message1 << std::endl;
    
    return 0;
}
