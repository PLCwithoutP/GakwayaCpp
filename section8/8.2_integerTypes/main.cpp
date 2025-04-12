#include <iostream>

int main(){
    
    // Braced initializers
    // Variable may contain random garbage value. WARNING!
    int elephant_count;
    int lion_count {}; // Initializes to zero
    int dog_count {10}; // Initializes to 10
    int cat_count {15}; // Initializes to 15

    // Can use expression as initializer
    int domesticated_animals { dog_count + cat_count};

    //int narrowing_conversion {2.9};

    std::cout << "elephant_count : " << elephant_count << std::endl;
    std::cout << "lion_count : " << lion_count << std::endl;
    std::cout << "dog_count : " << dog_count << std::endl;
    std::cout << "cat_count : " << cat_count << std::endl;
    std::cout << "domesticated_animals : " << domesticated_animals << std::endl;
    //std::cout << "narrowing_conversion : " << narrowing_conversion << std::endl;

    // Functional Initialization
    int apple_count(5);
    int orange_count(10);
    int fruit_count (apple_count + orange_count);

    // Lost information, less safe than braced initializers
    int narrowing_conversion_functional(2.9);

    std::cout << "apple_count : " << apple_count << std::endl;
    std::cout << "orange_count : " << orange_count << std::endl;
    std::cout << "fruit_count : " << fruit_count << std::endl;
    std::cout << "narrowing_conversion_functional : " << narrowing_conversion_functional << std::endl;

    // Assignment Notation
    int bike_count = 5;
    int truck_count = 7;
    int vehicle_count = bike_count + truck_count;
    int narrowing_conversion_assg = 2.9;

    std::cout << "bike_count : " << bike_count << std::endl;
    std::cout << "truck_count : " << truck_count << std::endl;
    std::cout << "vehicle_count : " << vehicle_count << std::endl;
    std::cout << "narrowing_conversion_assg : " << narrowing_conversion_assg << std::endl;
    
    // Check the size with sizeof
    std::cout << "sizeof int: " << sizeof(int) << std::endl;
    std::cout << "sizeof(truck_count)" << sizeof(truck_count) << std::endl;
    return 0;
}