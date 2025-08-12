#include <iostream>

// Declare an enum type
// The default type associated with enum classes with C++ is int
enum class Month : int
{
    Jan = -1, January = Jan, Feb, Mar,
    Apr, May, Jun,
    Jul, Aug, Sep,
    Oct = 20, Nov, Dec
};

int main(){

    Month month {Month::January};
    //std::cout << "month : " << month << std::endl; // Compiler Error
    std::cout << "month : " << static_cast<int>(month) << std::endl;
    std::cout << "sizeof(month) : " << sizeof(month) << std::endl;



    return 0;
}