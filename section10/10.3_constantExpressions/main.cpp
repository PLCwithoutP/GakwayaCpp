#include <iostream>

int main()
{
    constexpr int SOME_LIB_MAJOR_VERSION {123};
    constexpr int eye_count {2};
    constexpr double PI {3.14};

    std::cout << "eye count : " << eye_count << std::endl;
    std::cout << "PI : " << PI << std::endl;

    // eye_count = 4; // Compile Error

    int leg_count = {2}; // Non constexpr
                         // leg_count is not known at compile time
    //constexpr int arm_count {leg_count}; // Error

    constexpr int room_count {10};
    constexpr int door_count {room_count}; // OK

    const int table_count{5};
    constexpr int chair_count {table_count * 5}; // Works

    // If static_assert fails, compile time error
    static_assert(SOME_LIB_MAJOR_VERSION == 123);

    // static_assert(leg_count == 2); // Compile time error, only const values
    std::cout << "App doing background checks ..." << std::endl;


    return 0;
}