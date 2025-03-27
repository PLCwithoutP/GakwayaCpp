#include <iostream>

int main(){


    std::string userCountry;
    
    std::cout << "Where do you live?" << std::endl;
    std::cin >> userCountry;
    std::cout << "I've heard great things about " << userCountry << ". I'd like to go sometime." << std::endl;

    return 0;
}