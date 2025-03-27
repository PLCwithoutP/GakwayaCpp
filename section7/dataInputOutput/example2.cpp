#include <iostream>
#include <string>

int main(){

    int age;
    //std::string name;
    std::string full_name;

    /*std::cout << "Please type in your Last Name : " << std::endl;
    std::cin >> name;

    std::cout << "Please type in your age : " << std::endl;
    std::cin >> age;*/

    /*std::cout << "Please type in your Last name and age, separated by spaces : " << std::endl;
    std::cin >> name >> age;
    std::cout << "Hello " << name << "! You are " << age << " years old" << std::endl;*/

    std::cout << "Please type in your full name : " << std::endl;
    std::getline(std::cin, full_name);

    std::cout << "Type in your age : " << std::endl;
    std::cin >> age;
    std::cout << "Hello " << full_name 
            << "! You are " << age << " years old." << std::endl;
    
    return 0;
}