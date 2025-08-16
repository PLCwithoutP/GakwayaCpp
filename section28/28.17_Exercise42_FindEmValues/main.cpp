#include "headers.h"

int main()
{
    unsigned int ids[] {222333,44556,123555,917666};
    auto index =  find_value<4,unsigned int>(ids,4455622);
    std::cout << "index : " << index << std::endl;

    unsigned int ids_2[] {222333,44556,123555,917666};
    auto index_2 =  find_value<4,unsigned int>(ids_2,44556);
    std::cout << "index_2 : " << index_2 << std::endl;
    return 0;
}