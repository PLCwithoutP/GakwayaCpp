#include <iostream>

int main(int argc, char **argv)
{
    /*
    // A raw variable that can be modified
    std::cout << std::endl;
    std::cout << "Raw variable that can be modified : " << std::endl;

    int number{5}; // Not constant, can change number any way we want
    std::cout << "number : " << number << std::endl;
    std::cout << "&number : " << &number << std::endl;

    // Modify
    number = 12;
    number += 7;

    // Access - Print Out
    std::cout << "number : " << number << std::endl;
    std::cout << "&number : " << &number << std::endl;
    std::cout << std::endl;
    
    // Pointer : can modify the data and the pointer itself
    int *p_number1 {nullptr};
    int number1 {23};

    p_number1 = &number1;

    // Access - Print Out
    std::cout << "number1 : " << number1 << std::endl;
    std::cout << "*p_number1 : " << *p_number1 << std::endl;
    std::cout << std::endl;

    // Change the pointed to value through pointer
    *p_number1 = 432;

    // Access - Print Out
    std::cout << "*p_number1 : " << *p_number1 << std::endl;
    std::cout << std::endl;

    // Change the pointer itself to make it point somewhere else
    int number2 {56};
    p_number1 = &number2;

    // Access - Print Out
    std::cout << "*p_number1 : " << *p_number1 << std::endl;
    std::cout << std::endl;
    */
    /*
    // Pointer pointing to constant data : You can't modify the data through pointer

    int number3 {632}; // Although you can omit the const on number3 here and it is still
                        // going to compile, it is advised to be as explicit as possible in
                        // you code and put the const in front. Make your intents CLEAR
    
    const int* p_number3 {&number3}; // Can't modify number3 through p_number3
    //*p_number3 = 444; // Compiler error
    
    std::cout << "number3 : " << number3 << std::endl;
    std::cout << "*p_number3 : " << *p_number3 << std::endl;
    std::cout << "p_number3 : " << p_number3 << std::endl; 

    // Although we can't change what's pointed to by p_number3,
    // we can still change where it's pointing
    int number4 {872};
    p_number3 = &number4;

    std::cout << "number4 : " << number4 << std::endl;
    std::cout << "*p_number3 : " << *p_number3 << std::endl;
    std::cout << "p_number3 : " << p_number3 << std::endl; 
    */
    /*
    int protected_var {10}; // Can make it const to protect it if we want

    //p_protected_var is a pointer to const data, we can't
    //modify the data through this pointer : regardless of
    //whether the data itself is declared const or not
    const int* p_protected_var {&protected_var};

    //*p_proctected_var = 55;
    protected_var = 66;
    std::cout << "protected_var : " << protected_var << std::endl;
    std::cout << "p_protected_var : " << p_protected_var << std::endl;
    std::cout << "*p_protected_var : " << *p_protected_var << std::endl;
    std::cout << std::endl;
    */
    /*
    // You can't set up a modifiable pointer to const data though,
    // you'll get a compiler error : Invalid convertion from 'const type*' to 'type*'.
    const int some_data{55};

    //int * p_some_data {&some_data};//Compiler error
    //*p_some_data = 66;
    */
    
    /*
    // Both pointer and pointed to value are constant
    const int number5 {459};
    const int* const p_number5 {&number5};
    std::cout << "Pointer is constant, value pointed to is constant : " << std::endl;
    std::cout << "p_number5 : " << p_number5 << std::endl;
    std::cout << "*p_number5 : " << *p_number5 << std::endl;

    // Can't modify the pointed to value through the pointer
    std::cout << "Changing value pointed to by p_number5 through the pointed (Compile Error) " << std::endl;
    // *p_number5 = 222; // Error : Trying to assign to read only location

    // Can't change where the pointed is pointing to : The pointed is now itself constant
    std::cout << "Changing the pointer p_number5 address itself (Compile Error) " << std::endl;
    int number6 {333};
    //p_number5 = &number6; // Error : Trying to assign to read only location

    */
    /*
    // Pointer is constant (can't make it point anywhere else)
    // but pointed to value can change
    std::cout << "Pointer is constant, pointed to value can change : " << std::endl;
    int number7 {982};

    int * const p_number7 {&number7};

    std::cout << "p_number7 : " << p_number7 << std::endl;
    std::cout << "*p_number7 : " << *p_number7 << std::endl;
    std::cout << "Changing value pointed to through p_number7 pointer : " << std::endl;

    *p_number7 = 456;
    std::cout << "The value pointed to by p_number7 now is : " << *p_number7 << std::endl;

    int number8 {2928};
    std::cout << "Changing the address where p_number7 is pointing (Compiler Error)" << std::endl;
    */

    int var1{33};
    int var2{55};
    int *p_var2 {&var1}; // Non const pointer to int
    const int *p_var3 {&var1}; // Pointer to const
    const int * const p_var4 {&var1}; // Const pointer to const data
    int * const p_var5 {&var2}; // Const pointer to non const data

    // If const shows up on the left of * : the data is const
    // If const shows up on the right of * : the pointer is const
    return 0;
}
