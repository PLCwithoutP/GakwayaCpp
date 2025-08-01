#include <iostream>
#include <string>
 
int main(){

/*     // Wastes memory
    std::string message {"Hello World"};
    std::string message_copy {message};

    std::cout << message << std::endl;
    std::cout << message_copy << std::endl;

    char *p1 = message.data();
    char *p2 = message_copy.data();

    std::cout << "&message[0] " << (void*) p1 << std::endl;
    std::cout << "&message_copy[0] " << (void*) p2 << std::endl;
 */

    // Efficient way to use memory, employ reference
    std::string message {"Hello World"};
    std::string& message_copy {message};

    std::cout << message << std::endl;
    std::cout << message_copy << std::endl;

    char *p1 = message.data();
    char *p2 = message_copy.data();

    std::cout << "&message[0] " << (void*) p1 << std::endl;
    std::cout << "&message_copy[0] " << (void*) p2 << std::endl;
    return 0;
}