#include <iostream>
#include <iomanip>

int main(){

    // std::endl : places a new line character on the output stream
    //             This is identical to placing '\n' on the output stream

    std::cout << "Hello";
    std::cout << "World";

    std::cout << std::endl;

    std::cout << "------------" << std::endl;

    std::cout << "Hello " << std::endl;
    std::cout << "World " << std::endl;

    std::cout << std::endl;

    std::cout << "Hello\n";
    std::cout << "World\n";

    //====================================================================//

    std::cout << std::endl;

    // std::flush : flushes the output buffer to its final destination
    std::cout << "This is a nice message..." << std::endl << std::flush;
    // After this std::flush, we're sure that at this line, the message has been
    // sent to the stream. This may be important in some applications.

    //====================================================================//

    std::cout << std::endl;

    // std::setw() : Adjusts the field with for the item about to be printed.
    // The setw() manipulator only affects the next value to be printed.

    std::cout << "Unformatted table" << std::endl;
    std::cout << "Daniel" << " " << "Gray" << " 25" << std::endl;
    std::cout << "Stanley" << " "  << "Woods" << " 33" << std::endl;
    std::cout << "Jordan" << " " << "Parker" << " 45" << std::endl;
    std::cout << "Joe" << " " << "Ball" << " 21" << std::endl;
    std::cout << "Josh" << " " << "Carr" << " 27" << std::endl;
    std::cout << "Izaiah" << " " << "Robinson" << " 29" << std::endl;

    std::cout << std::endl;
    std::cout << "Formatted table" << std::endl;

    std::cout << std::setw(10) << "Lastname" << std::setw(10) << "Firstname" << std::setw(10) << "Age" << std::endl;
    std::cout << std::setw(10) << "Gray" << std::setw(10) << "Daniel" << std::setw(10) << "25" << std::endl;
    std::cout << std::setw(10) << "Woods" << std::setw(10) << "Stanley" << std::setw(10) << "33" << std::endl;
    std::cout << std::setw(10) << "Parker" << std::setw(10) << "Jordan" << std::setw(10) << "45" << std::endl;
    std::cout << std::setw(10) << "Ball" << std::setw(10) << "Joe" << std::setw(10) << "21" << std::endl;
    std::cout << std::setw(10) << "Carr" << std::setw(10) << "Josh" << std::setw(10) << "27" << std::endl;
    std::cout << std::setw(10) << "Robinson" << std::setw(10) << "Izaiah" << std::setw(10) << "29" << std::endl;

    std::cout << std::endl;
    std::cout << "Formatted table with variables" << std::endl;
    
    return 0;
}