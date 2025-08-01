#include <iostream>
#include <string>
#include <cstring>

int main(int argc, char **argv)
{
/*     // Number to String : the std::to_string function

    std::cout << "Turning numbers into std::string" << std::endl;
    float float_var {22.3f};
    double double_var {1.34847e5};
    int int_var {223};

    std::string float_str {std::to_string(float_var)};
    std::string double_str {std::to_string(double_var)};
    std::string int_str {std::to_string(int_var)};

    std::cout << "size of float_str : " << float_str.size() << std::endl;
    std::cout << "float_var : " << float_var << std::endl;
    std::cout << "float_str : " << float_str << std::endl;

    std::cout << "double_var : " << double_var << std::endl;
    std::cout << "double_str : " << double_str << std::endl;

    std::cout << "int_var : " << int_var << std::endl;
    std::cout << "int_str : " << int_str << std::endl; */

    // std::string number_str{"34.567"};
    std::string number_str {"-34.567"};

/*     // int, long, long long
    // std::stoi, std:stol, std::stoll
    std::cout << std::endl;
    std::cout << "int,long, long long" << std::endl;

    int int_var = std::stoi(number_str);
    std::cout << "int_var : " << int_var << std::endl;
    std::cout << "sizeof(int_var) : " << sizeof(int_var) << std::endl;

    long long_var = std::stol(number_str);
    std::cout << "long_var : " << long_var << std::endl;
    std::cout << "sizeof(long_var) : " << sizeof(long_var) << std::endl;

    long long long_long_var = std::stoll(number_str);
    std::cout << "long_long_var : " << long_long_var << std::endl;
    std::cout << "sizeof(long_long_var) : " << sizeof(long_long_var) << std::endl; */

    // unsigned long, unsigned long long
    // std::stoul, std::stoull
    // Underflows when the std::string contains a negative number

    number_str = "34.567";
    // number_str = "-34.567"; // Resulting unsigned long and long long underflow
                               // and become huge numbers of their type
    
    std::cout << std::endl;
    std::cout << "unsigned long, unsigned long long" << std::endl;

    long u_l_var = std::stoul(number_str);
    std::cout << "u_l_var : " << u_l_var << std::endl;
    std::cout << "sizeof(u_l_var) : " << sizeof(u_l_var) << std::endl;

    long long u_ll_var = std::stoull(number_str);
    std::cout << "u_ll_var : " << u_ll_var << std::endl;
    std::cout << "sizeof(u_ll_var) : " << sizeof(u_ll_var) << std::endl;  
    
    // float, double, long double
    // std::stof, std::stod, std::stold
    std::cout << std::endl;
    std::cout << "float, double, long double : " << std::endl;

    float float_var {22.3f};
    double double_var {1.34847e5};
    long double l_d_var {12341234.1243e5};

    float_var = std::stof(number_str);
    std::cout << "float_var : " << float_var << std::endl;
    std::cout << "sizeof(float_var) : " << sizeof(float_var) << std::endl;

    double_var = std::stof(number_str);
    std::cout << "double_var : " << double_var << std::endl;
    std::cout << "sizeof(double_var) : " << sizeof(double_var) << std::endl;

    l_d_var = std::stof(number_str);
    std::cout << "l_d_var : " << l_d_var << std::endl;
    std::cout << "sizeof(l_d_var) : " << sizeof(l_d_var) << std::endl;

    return 0;
}
