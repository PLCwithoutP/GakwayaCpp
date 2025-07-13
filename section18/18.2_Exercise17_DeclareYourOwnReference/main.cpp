#include <iostream>

int main(int argc, char **argv)
{
    int value1{33};
    
    //Don't modify anything above this line
    //Your code will go below this line
    int& ref_value1 = value1;
    //Your code will go above this line
    //Don't modify anything below this line

   std::cout << value1 << ref_value1;
    return 0;
}
