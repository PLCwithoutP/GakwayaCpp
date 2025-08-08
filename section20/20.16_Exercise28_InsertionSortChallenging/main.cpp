#include <iostream>
#include "headers.h"

int main(int argc, char **argv)
{
    int data[] = {6,3,5,7,4,2 }; 
    int size = sizeof(data)/sizeof(int);

    std::cout << "Before :" << std::endl;

    print_array(data,size);
    insertion_sort(data,size);

    std::cout << "After :" << std::endl;
    
    print_array(data,size);

    return 0;
}
