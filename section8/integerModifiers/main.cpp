#include <iostream>

int main(){
    
    int value1 {10};
    int value2 {-300};

    std::cout << "value1 : " << value1 << std::endl;
    std::cout << "value2 : " << value2 << std::endl;
    std::cout << "sizeof(value1) : " << sizeof(value1) << std::endl;
    std::cout << "sizeof(value2) : " << sizeof(value2) << std::endl;
    std::cout << "-------------------------------------------------" << std::endl;

    unsigned int value3 {4};
    // unsigned int value4{-5}; // Compiler error

    std::cout << "value3 : " << value3 << std::endl;
    std::cout << "sizeof(value3) : " << sizeof(value3) << std::endl;
    std::cout << "-------------------------------------------------" << std::endl;

    // Short and Long Modifiers
    short short_var {-32768}; // 2 Bytes
    short int short_int {455};
    signed short signed_short {122};
    signed short int signed_short_int {-253};
    unsigned short int unsigned_short_int {456};

    std::cout << "Short variable : " << short_var << " , size : " << sizeof(short_var) << " bytes" << std::endl;
    std::cout << "Short int variable : " << short_int << " , size : " << sizeof(short_int) << " bytes" << std::endl;
    std::cout << "Signed short variable : " << signed_short << " , size : " << sizeof(signed_short) << " bytes" << std::endl;
    std::cout << "Signed short int variable : " << signed_short_int << " , size : " << sizeof(signed_short_int) << " bytes" << std::endl;
    std::cout << "Unsigned short int variable : " << unsigned_short_int << " , size : " << sizeof(unsigned_short_int) << " bytes" << std::endl;
    std::cout << "-------------------------------------------------" << std::endl;

    int int_var {55}; // 4 bytes
    signed signed_var {66};
    signed int signed_int {77};
    unsigned int unsigned_int {88};

    std::cout << "Int variable : " << int_var << " , size : " << sizeof(int_var) << " bytes" << std::endl;
    std::cout << "Signed variable : " << signed_var << " , size : " << sizeof(signed_var) << " bytes" << std::endl;
    std::cout << "Signed int variable : " << signed_int << " , size : " << sizeof(signed_int) << " bytes" << std::endl;
    std::cout << "Unsigned int variable : " << unsigned_int << " , size : " << sizeof(unsigned_int) << " bytes" << std::endl;
    std::cout << "-------------------------------------------------" << std::endl;
    
    long long_var {99}; // 4 or 8 bytes
    long int long_int {33};
    signed long signed_long {-12};
    signed long int signed_long_int {-12};
    unsigned long unsigned_long {21};
    unsigned long int unsigned_long_int {26};


    std::cout << "Long variable : " << long_var << " , size : " << sizeof(long_var) << " bytes" << std::endl;
    std::cout << "Long int variable : " << long_int << " , size : " << sizeof(long_int) << " bytes" << std::endl;
    std::cout << "Signed long variable : " << signed_long << " , size : " << sizeof(signed_long) << " bytes" << std::endl;
    std::cout << "Signed long int variable : " << signed_long_int << " , size : " << sizeof(signed_long_int) << " bytes" << std::endl;
    std::cout << "Unsigned long int variable : " << unsigned_long_int << " , size : " << sizeof(unsigned_long_int) << " bytes" << std::endl;
    std::cout << "-------------------------------------------------" << std::endl;

    long long long_long {888}; // 8 bytes
    long long int long_long_int {999};
    signed long long signed_long_long {444};
    signed long long int signed_long_long_int {12345};
    unsigned long long int unsigned_long_long_int {2345};


    std::cout << "Long long variable : " << long_long << " , size : " << sizeof(long_long) << " bytes" << std::endl;
    std::cout << "Long long int variable : " << long_long_int << " , size : " << sizeof(long_long_int) << " bytes" << std::endl;
    std::cout << "Signed long long variable : " << signed_long_long << " , size : " << sizeof(signed_long_long) << " bytes" << std::endl;
    std::cout << "Signed long long int variable : " << signed_long_long_int << " , size : " << sizeof(signed_long_long_int) << " bytes" << std::endl;
    std::cout << "Unsigned long long int variable : " << unsigned_long_long_int << " , size : " << sizeof(unsigned_long_long_int) << " bytes" << std::endl;
    std::cout << "-------------------------------------------------" << std::endl;

    return 0;
}