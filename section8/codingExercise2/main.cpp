#include <iostream>

int main(){
    
    double width {10.0};
    double length {20.1};
    double height {4.5};

    double volume = width * length * height;

    std::cout << "Volume is " << volume << std::endl;
    
    return 0;
}