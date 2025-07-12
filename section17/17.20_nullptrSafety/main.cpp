#include <iostream>

int main(int argc, char **argv)
{
    // Verbose nullptr check
    std::cout << std::endl;
    std::cout << "Verbose nullptr check" << std::endl;

    int *p_number{}; // Initialized to nullptr
    //p_number = new int{15};


/*     if (!(p_number == nullptr))
    {
        std::cout << "p_number points to a VALID address : " << p_number << std::endl;
        std::cout << "*p_number : " << *p_number << std::endl;
    }
    else
    {
        std::cout << "p_number points to an INVALID address" << std::endl;
    } */

    if (p_number)
    {
        std::cout << "p_number points to a VALID address : " << p_number << std::endl;
        std::cout << "*p_number : " << *p_number << std::endl;
    }
    else
    {
        std::cout << "p_number points to an INVALID address" << std::endl;
    }

    delete p_number;
    p_number = nullptr;

    // Calling delete on a nullptr is OK
    int *p_number1{};

    delete p_number1; // This won't cause any problem if p_number1 contains nullptr
    
    return 0;
}
