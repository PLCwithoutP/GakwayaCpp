#include <iostream>

int main(int argc, char **argv)
{
    int data[] {1,3,6,3,9,3,5,7,2,11};
    unsigned int offset{3};
    int * p_requiredData {data};
    p_requiredData += offset;

    std::cout << "The element " << offset << " slots away from the beginning is : " << *(p_requiredData);
    return 0;
}
