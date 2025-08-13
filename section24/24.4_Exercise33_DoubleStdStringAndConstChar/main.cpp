#include <iostream>
#include <string>
#include <cstring>

double add(double a, double b);

std::string add( std::string& a,std::string& b);

const char* add( char* a, const char* b);

void stitch_them();

int main()
{
    stitch_them();

    return 0;
}

void stitch_them()
{
    char name[20] {"The sky"};
    auto result_str  = add(name," is blue");
    std::cout << "result_str : " <<  result_str;
}

double add(double a, double b)
{
    return a + b;
}


std::string add( std::string& a, std::string& b)
{
    return a + b;
}

const char* add( char* a, const char* b)
{
    std::strcat(a,b);

    return a;
}