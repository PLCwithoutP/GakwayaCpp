#include <iostream>
#include <memory>
#include "dog.h"
#include "print.h"

int main()
{

    // shared pointer to fundamental types
/*     {
        std::shared_ptr<int> int_ptr_1 {new int{43}};

        print("The pointed value is ");
        print(*int_ptr_1);
        *int_ptr_1 = 42;
        print("The pointed value is ");
        print(*int_ptr_1);  
        print("Use count is ");
        print(int_ptr_1.use_count()); // 1
        print2("The pointed value is ", *int_ptr_1);
        
        // Copying
        print("-----------------------------------------------------");
        std::shared_ptr<int> int_ptr_2 = int_ptr_1; // Use count 2
        print2("The pointed value is (through int_ptr2)", *int_ptr_2);
        *int_ptr_2 = 70;
        print2("The pointed value is (through int_ptr2)", *int_ptr_2);
        
        print2("Use count for int_ptr_1 :" , int_ptr_1.use_count());
        print2("Use count for int_ptr_2 :" , int_ptr_2.use_count());

        print("-----------------------------------------------------");
        // Other ways to initialize shared pointers
        std::shared_ptr<int> int_ptr_3;
        int_ptr_3 = int_ptr_1; // Use count 3

        std::shared_ptr<int> int_ptr_4 {nullptr};
        int_ptr_4 = int_ptr_1; // Use count 4

        std::shared_ptr<int> int_ptr_5 {int_ptr_1}; // Use count 5

        print2("The pointed to value is (through int_ptr5):", *int_ptr_5);
        *int_ptr_5 = 100;
        print2("The pointed to value is (through int_ptr5):", *int_ptr_5);

        print2("Use count for int_ptr_1:", int_ptr_1.use_count());
        print2("Use count for int_ptr_2:", int_ptr_2.use_count());
        print2("Use count for int_ptr_3:", int_ptr_3.use_count());
        print2("Use count for int_ptr_4:", int_ptr_4.use_count());
        print2("Use count for int_ptr_5:", int_ptr_5.use_count());

        print("-----------------------------------------------------");

        // Use a shared pointer to manage an already existing piece of memory
        print("Use a shared pointer to manage an already existing piece of memory");
        int* int_ptr_raw = new int(33);

        std::shared_ptr<int> int_ptr_6 {int_ptr_raw};
        print2("The value pointed to by int_ptr_raw is (through int_ptr_6):", *int_ptr_6);
        print2("Use count for int_ptr_6 is ", int_ptr_6.use_count());
        print2("Raw pointer :", int_ptr_raw);
        print2("Shared pointer :", int_ptr_6.get());

        // It is a good practice to set raw pointer to nullptr after using shared_ptr
        int_ptr_raw = nullptr;

        print("-----------------------------------------------------");
        // Reset decrements the use count and sets the pointer to nullptr
        print("Reset...");

        int_ptr_5.reset(); // decrements reference count and sets int_ptr_5 to nullptr
                           // after this if you show use count, for int_ptr_5, you'll get 0
        print2("Use count for int_ptr_1:", int_ptr_1.use_count());
        print2("Use count for int_ptr_2:", int_ptr_2.use_count());
        print2("Use count for int_ptr_3:", int_ptr_3.use_count());
        print2("Use count for int_ptr_4:", int_ptr_4.use_count());
        print2("Use count for int_ptr_5:", int_ptr_5.use_count());

        print2("int_ptr_5.get():", int_ptr_5.get());

        print("-----------------------------------------------------");
        // Can get the raw pointer address and use the ptr in if statements (castable to bool)
        print("Casting to bool and using in if statements");
        print2("int_ptr_4:", int_ptr_4);
        print2("int_ptr_4.get():",int_ptr_4.get());
        std::cout << std::boolalpha;
        print("int_ptr_4->bool:");
        std::cout << static_cast<bool>(int_ptr_4) << std::endl;
        std::cout << static_cast<bool>(int_ptr_5) << std::endl;

        if (int_ptr_4)
        {
            print("int_ptr_4 point to something valid");
        }
        else
        {
            print("404");
        }

        print("Reset...");

        int_ptr_4.reset();

        print2("Use count for int_ptr_1:", int_ptr_1.use_count());
        print2("Use count for int_ptr_2:", int_ptr_2.use_count());
        print2("Use count for int_ptr_3:", int_ptr_3.use_count());
        print2("Use count for int_ptr_4:", int_ptr_4.use_count());
        print2("Use count for int_ptr_5:", int_ptr_5.use_count());
    } */
    // Shared pointer with custom types
/*     {
        std::shared_ptr<Dog> dog_ptr_1 {new Dog("Filifili")};
        dog_ptr_1 -> print_info();

        print2("Use count:", dog_ptr_1.use_count());

        std::shared_ptr<Dog> dog_ptr_2 = dog_ptr_1; // Use count : 2

        print2("Use count for dog_ptr_1:", dog_ptr_1.use_count());
        print2("Use count for dog_ptr_2:", dog_ptr_2.use_count());

        print("-----------------------------------------------------");

        // Initializing
        print("Initializing");
        std::shared_ptr<Dog> dog_ptr_3;
        dog_ptr_3 = dog_ptr_1; // Use count 3

        std::shared_ptr<Dog> dog_ptr_4 {nullptr};
        dog_ptr_4 = dog_ptr_1; // Use count 4

        std::shared_ptr<Dog> dog_ptr_5 {dog_ptr_1}; // Use count : 5

        print(" ");
        print2("Use count for dog_ptr_1:", dog_ptr_1.use_count());
        print2("Use count for dog_ptr_2:", dog_ptr_2.use_count());
        print2("Use count for dog_ptr_3:", dog_ptr_3.use_count());
        print2("Use count for dog_ptr_4:", dog_ptr_4.use_count());
        print2("Use count for dog_ptr_5:", dog_ptr_5.use_count());

        print("-----------------------------------------------------");
        // Can also initialize from an already existing raw pointer

        print(" ");
        print("Initializing from already existing raw pointer");

        Dog* dog_ptr_raw = new Dog("Ralso");
        
        std::shared_ptr<Dog> dog_ptr_6 {dog_ptr_raw};
        dog_ptr_raw = nullptr;
        
        dog_ptr_6 -> print_info();
        print2("Use count for dog_ptr_6 is", dog_ptr_6.use_count());

        print("-----------------------------------------------------");
        // Reset decrements the use count and sets the pointer to nullptr
        print("Reset...");

        dog_ptr_5.reset(); // decrements reference count and sets dog_ptr_5 to nullptr
                           // after this if you show use count, for dog_ptr_5, you'll get 0
        print2("Use count for dog_ptr_1:", dog_ptr_1.use_count());
        print2("Use count for dog_ptr_2:", dog_ptr_2.use_count());
        print2("Use count for dog_ptr_3:", dog_ptr_3.use_count());
        print2("Use count for dog_ptr_4:", dog_ptr_4.use_count());
        print2("Use count for dog_ptr_5:", dog_ptr_5.use_count());

        print2("dog_ptr_5.get():", dog_ptr_5.get());

        print("-----------------------------------------------------");
        // Can get the raw pointer address and use the ptr in if statements (castable to bool)
        print("Casting to bool and using in if statements");
        print2("dog_ptr_4:", dog_ptr_4);
        print2("dog_ptr_4.get():",dog_ptr_4.get());
        std::cout << std::boolalpha;
        print("dog_ptr_4->bool:");
        std::cout << static_cast<bool>(dog_ptr_4) << std::endl;
        std::cout << static_cast<bool>(dog_ptr_5) << std::endl;

        if (dog_ptr_4)
        {
            print("dog_ptr_4 point to something valid");
        }
        else
        {
            print("404");
        }

        print("Reset...");

        dog_ptr_4.reset();

        print2("Use count for dog_ptr_1:", dog_ptr_1.use_count());
        print2("Use count for dog_ptr_2:", dog_ptr_2.use_count());
        print2("Use count for dog_ptr_3:", dog_ptr_3.use_count());
        print2("Use count for dog_ptr_4:", dog_ptr_4.use_count());
        print2("Use count for dog_ptr_5:", dog_ptr_5.use_count());
    } */

    // make_shared
    {
        std::shared_ptr<int> int_ptr_6 = std::make_shared<int>(55);
        print2("The value pointed to by int_ptr_6 is",*int_ptr_6);

        std::shared_ptr<Dog> dog_ptr_6 = std::make_shared<Dog>("Salz");
        dog_ptr_6 -> print_info();

        print2("int_ptr_6 use count:", int_ptr_6.use_count()); // 1
        print2("dog_ptr_6 use count:", dog_ptr_6.use_count()); // 1

        // Share the object (data) with other shared_ptr's
        print("-----------------------------------------------------");
        print("Share the object (data) with other shared_ptr's");
        std::shared_ptr<int> int_ptr_7 {nullptr};
        int_ptr_7 = int_ptr_6;

        std::shared_ptr<Dog> dog_ptr_7 {nullptr};
        dog_ptr_7 = dog_ptr_6;

        print2("int_ptr_6 use count:", int_ptr_6.use_count());
        print2("dog_ptr_6 use count:", dog_ptr_6.use_count());

        print(" ");
        print("Reset ptr6s");
        int_ptr_6.reset(); // decrement reference count, and set int_ptr_6 to nullptr
                           // if reference count is zero, release the managed memory
        dog_ptr_6.reset();
        print2("int_ptr_6 use count:", int_ptr_6.use_count());
        print2("dog_ptr_6 use count:", dog_ptr_6.use_count());
        print2("int_ptr_7 use count:", int_ptr_7.use_count());
        print2("dog_ptr_7 use count:", dog_ptr_7.use_count());

    }    
    return 0;
}