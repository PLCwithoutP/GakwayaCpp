#include <iostream>

template <typename T> int hunt_down(const T& value, const T* collection, size_t size)
{
    for (size_t i {0}; i < size; i++)
    {
        if (collection[i] == value)
        {
            return i;
        }
    }
    return -1;
}

int main(){

    auto print = [](auto input)
    {
        std::cout << input << std::endl;
    };

    const std::string students[] {"Steve","Karly","Sally","Salim"} ;
    std::string to_find{"Bart"};
    auto result1 = hunt_down(to_find,students,4);
    print("Result 1 is : ");
    print(result1);
    
    const unsigned int ids[] {1122,4432,7828,9022,3903,3015,2072};
    unsigned int id_to_find {7828};
    auto result2 = hunt_down(id_to_find,ids,7);
    print("Result 2 is : ");
    print(result2);
    
    
    
    return 0;
}